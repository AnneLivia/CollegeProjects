package com.anne.firebaseapp;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.view.menu.MenuBuilder;
import androidx.core.content.res.ResourcesCompat;
import androidx.core.view.ViewCompat;

import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.graphics.fonts.Font;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.BaseAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.FirebaseApp;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.ChildEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.Query;

import java.lang.reflect.Type;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;

public class MeuFeed extends AppCompatActivity {

    private ListView listfeed;
    private ArrayAdapter<Map<String, String>> simpleAdapter;
    private List<Map<String, String>> tweetdata = new ArrayList<>();
    private ArrayList<String> seguindo;

    private FirebaseDatabase database = FirebaseDatabase.getInstance();
    private DatabaseReference ref = database.getReference();

    private ChildEventListener childEventListener;
    private Query queryRef;
    private String meuUid;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_meu_feed);
        FirebaseApp.initializeApp(this);

        listfeed = (ListView) findViewById(R.id.listfeed);
        tweetdata = new ArrayList<>();

        listfeed.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, final View view, final int position, long l) {
                // checar se o usuario atual e o mesmo do tweet clicado, se for deixar ele fazer as operações, caso contrário, não.
                if (tweetdata.get(position).get("uid").equals(meuUid)) {
                    // somente se for igual e que aparacera esses dialogos.
                    AlertDialog.Builder builder = new AlertDialog.Builder(MeuFeed.this, R.style.DialogThemeOne);
                    builder.setTitle("O que você deseja realizar?");

                    builder.setPositiveButton("Editar Tweet", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            // Mostrando outro alert para permitir que o usuario edit o twitter
                            AlertDialog.Builder alterBuilder = new AlertDialog.Builder(MeuFeed.this, R.style.DialogThemeOne);
                            alterBuilder.setTitle("Editar Tweet");
                            // final pode ser acessado em outra função
                            final EditText meutweet = new EditText(MeuFeed.this);
                            meutweet.setTypeface(Typeface.SANS_SERIF);
                            meutweet.setTextSize(18);
                            meutweet.setTextColor(Color.WHITE);
                            ViewCompat.setBackgroundTintList(meutweet, ColorStateList.valueOf(Color.BLUE));
                            // current text (colocando texto atual)
                            TextView t = (TextView) view.findViewById(android.R.id.text1);
                            meutweet.setText(t.getText().toString());

                            // exibindo editview
                            alterBuilder.setView(meutweet);

                            alterBuilder.setPositiveButton("Alterar", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {

                                    // verificar se o tweet nao esta em branco
                                    if (!meutweet.getText().toString().isEmpty()) {
                                        // remover espaços em branco no inicio do tweet
                                        String aux = "";
                                        Boolean isSpace = true;
                                        for (int i = 0; i < meutweet.getText().toString().length(); i++) {
                                            if (isSpace && meutweet.getText().toString().charAt(i) == ' ') {
                                                isSpace = true;
                                            } else {
                                                isSpace = false;
                                                aux += meutweet.getText().toString().charAt(i);
                                            }
                                        }
                                        // alterando valor do bd (texto e dia e hora de publicacao, ja que mudou isso tambem)
                                        ref.child("tweets").child(tweetdata.get(position).get("tid")).child("msg").setValue(aux);

                                        SimpleDateFormat formatterDay = new SimpleDateFormat("dd/MM/yyyy");
                                        SimpleDateFormat formatterHour = new SimpleDateFormat("HH:mm:ss");

                                        Date d = new Date();
                                        Date h = new Date();

                                        ref.child("tweets").child(tweetdata.get(position).get("tid")).child("dia").setValue(formatterDay.format(d));
                                        ref.child("tweets").child(tweetdata.get(position).get("tid")).child("hora").setValue(formatterHour.format(h));

                                        tweetdata.get(position).put("msg", meutweet.getText().toString());
                                        simpleAdapter.notifyDataSetChanged();

                                        Intent intent = getIntent();
                                        finish();
                                        startActivity(intent);

                                    } else {
                                        Toast.makeText(MeuFeed.this, "Tweet vazio!", Toast.LENGTH_SHORT).show();
                                    }
                                }
                            });

                            alterBuilder.setNegativeButton("Cancelar", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                    dialog.cancel();
                                }
                            });


                            alterBuilder.show();
                        }
                    });

                    builder.setNegativeButton("Remover Tweet", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            // Mostrando outro alert para permitir que o usuario remova o twitter
                            AlertDialog.Builder alterBuilder = new AlertDialog.Builder(MeuFeed.this, R.style.DialogThemeThree);
                            alterBuilder.setTitle("Remover tweet");
                            alterBuilder.setPositiveButton("Remover", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                    // removendo valor do bd
                                    ref.child("tweets").child(tweetdata.get(position).get("tid")).removeValue();
                                    tweetdata.remove(position);
                                    simpleAdapter.notifyDataSetChanged();
                                }
                            });

                            alterBuilder.setNegativeButton("Cancelar", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                    dialog.cancel();
                                }
                            });


                            alterBuilder.show();
                        }
                    });

                    builder.setNeutralButton("Cancelar", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            dialog.cancel();
                        }
                    });


                    builder.show();

                } else {
                    Toast.makeText(getApplicationContext(), "Este tweet não é seu!", Toast.LENGTH_SHORT).show();
                }
            }
        });

        simpleAdapter = new ArrayAdapter<Map<String,String>>(MeuFeed.this,
                android.R.layout.simple_list_item_2,
                android.R.id.text1,
                tweetdata) {
            @Override
            // Sobrescreveno o getView para poder por o texto três
            public View getView(int position, View convertView, ViewGroup parent) {
                View view = super.getView(position, convertView, parent);
                TextView text1 = (TextView) view.findViewById(android.R.id.text1);
                TextView text2 = (TextView) view.findViewById(android.R.id.text2);

                Map<String, String> dd = tweetdata.get(position);

                text1.setText(dd.get("conteudo"));
                text2.setText(dd.get("nomeusuario") + " ( " + dd.get("dia") + " - " + dd.get("hora") + ")");

                text1.setTextSize(20);
                text2.setTextSize(14);

                // Mudando fontfamily dos texts
                text1.setTypeface(ResourcesCompat.getFont(getContext(),R.font.catamaran_light));
                text2.setTypeface(ResourcesCompat.getFont(getContext(), R.font.comfortaa_light));

                return view;
            }
        };

        listfeed.setAdapter(simpleAdapter);

        // receber o arraylist da activity anterior
        Intent i = getIntent();
        seguindo = i.getStringArrayListExtra("seguindo");

    }

    @Override
    public boolean onCreateOptionsMenu (Menu menu){
        //inflar o menu. isso adiciona itens a action bar, se presente
        getMenuInflater().inflate(R.menu.menu_feed, menu);

        if(menu instanceof MenuBuilder){
            MenuBuilder m = (MenuBuilder) menu;
            m.setOptionalIconsVisible(true);
        }

        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        int id = item.getItemId();
        if(id == R.id.inicio) {
            finish();
        }

        return super.onOptionsItemSelected(item);
    }


    @Override
    protected void onStart() {
        super.onStart();

        FirebaseUser user = FirebaseAuth.getInstance().getCurrentUser();
        if(user == null) {
            finish();
        } else {
            meuUid = user.getUid();
        }

        tweetdata.clear();

        queryRef = ref.child("tweets").orderByChild("data");
        childEventListener = new ChildEventListener() {
            @Override
            public void onChildAdded(@NonNull DataSnapshot dataSnapshot, @Nullable String s) {
                // mostrar dados so de quem eu sigo e os meus dados
                if(seguindo.contains(dataSnapshot.child("uid").getValue(String.class)) ||
                        dataSnapshot.child("uid").getValue(String.class).equals(meuUid)) {
                        Map<String, String> tweet = new HashMap<>(4);

                        tweet.put("conteudo", dataSnapshot.child("msg").getValue(String.class));
                        tweet.put("nomeusuario", dataSnapshot.child("nome").getValue(String.class));
                        tweet.put("dia", dataSnapshot.child("dia").getValue(String.class));
                        tweet.put("hora", dataSnapshot.child("hora").getValue(String.class));
                        tweet.put("uid", dataSnapshot.child("uid").getValue(String.class));
                        tweet.put("tid", dataSnapshot.child("tid").getValue(String.class));
                        tweetdata.add(tweet);
                        simpleAdapter.notifyDataSetChanged();

                }
            }

            @Override
            public void onChildChanged(@NonNull DataSnapshot dataSnapshot, @Nullable String s) {

            }

            @Override
            public void onChildRemoved(@NonNull DataSnapshot dataSnapshot) {

            }

            @Override
            public void onChildMoved(@NonNull DataSnapshot dataSnapshot, @Nullable String s) {

            }

            @Override
            public void onCancelled(@NonNull DatabaseError databaseError) {

            }
        };
        // configura o ref com base no child event
        queryRef.addChildEventListener(childEventListener);
    }


    @Override
    protected void onStop() {
        super.onStop();
        queryRef.removeEventListener(childEventListener);
    }
}
