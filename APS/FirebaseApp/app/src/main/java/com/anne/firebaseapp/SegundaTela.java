package com.anne.firebaseapp;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.view.menu.MenuBuilder;
import androidx.core.content.res.ResourcesCompat;
import androidx.core.view.ViewCompat;

import android.bluetooth.le.AdvertiseData;
import android.bluetooth.le.AdvertisingSetParameters;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Bundle;
import android.provider.ContactsContract;
import android.util.Log;
import android.view.Menu;
        import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.CheckedTextView;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.ChildEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;

public class SegundaTela extends AppCompatActivity {

    private ListView listView;
    private ArrayAdapter<String> arrayAdapter;

    // para todos os usuarios adicionados
    private ArrayList<String> usuarios;
    // o userId que o firebase cria é um conjunto de caracteres
    private ArrayList<String> userIds;
    // grava os usuarios que estiver seguindo
    private ArrayList<String> seguindo;

    private FirebaseDatabase database = FirebaseDatabase.getInstance();
    private DatabaseReference ref = database.getReference();

    private ChildEventListener childEventListener;
    private ValueEventListener valueEventListener;

    private String meuUid;
    private  String meuNome;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_segunda_tela);

        SegundaTela.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);

        // inicializar objetos
        seguindo = new ArrayList<>();
        usuarios = new ArrayList<>(); // atraves do eventlistener obtem o objeto (usuario) do firebase
        userIds = new ArrayList<>();

        //ASSOCIAR a lista de usuarios
        arrayAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_checked, usuarios) {
            @Override
            // Sobrescreveno o getView para poder por o texto três
            public View getView(int position, View convertView, ViewGroup parent) {
                View view = super.getView(position, convertView, parent);
                TextView text = (TextView) view.findViewById(android.R.id.text1);

                // Mudando fontfamily dos texts
                text.setTypeface(ResourcesCompat.getFont(getContext(),R.font.catamaran_light));
                text.setTextSize(22);

                return view;
            }
        }; // lista com checkbox

        // inicializar lista
        listView = (ListView) findViewById(R.id.list);

        listView.setChoiceMode(AbsListView.CHOICE_MODE_MULTIPLE);
        listView.setAdapter(arrayAdapter);

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                // cada um dos listener marcados vao ser entendidos como checkedtextview
                CheckedTextView checkedTextView = (CheckedTextView) view;
                // se ele estiver marcado é porque eu cliquei nele para marcar
                if(checkedTextView.isChecked()) {
                    // pora incluir a pessoa que estou seguindo no arraylist seguindo
                    seguindo.add(userIds.get(position));
                } else {
                    seguindo.remove(seguindo.indexOf(userIds.get(position)));
                }

                // inserir ou remover do bd que estou seguindo (dentro do child pega o id e cria a referencia de que esta seguindo
                ref.child("usuarios").child(meuUid).child("seguindo").setValue(seguindo);
            }
        });
    }


    @Override
    public boolean onCreateOptionsMenu (Menu menu){
        //inflar o menu. isso adiciona itens a action bar, se presente
        getMenuInflater().inflate(R.menu.menu_twitter, menu);

        if(menu instanceof MenuBuilder){
            MenuBuilder m = (MenuBuilder) menu;
            m.setOptionalIconsVisible(true);
        }
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        int id = item.getItemId();
        if(id == R.id.feed) {
            Intent intent = new Intent(SegundaTela.this, MeuFeed.class);
            // enviando para proxima tela esses arrays com esses valores

            intent.putStringArrayListExtra("seguindo", seguindo);
            SegundaTela.this.startActivity(intent);
            finish();
            SegundaTela.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);
        } else if(id == R.id.tweet){
            AlertDialog.Builder builder = new AlertDialog.Builder(this, R.style.DialogThemeOne);
            builder.setTitle("Fazer um tweet");
            // final pode ser acessado em outra função
            final EditText meutweet = new EditText(this);

            meutweet.setTypeface(Typeface.SANS_SERIF);
            meutweet.setTextSize(18);
            meutweet.setTextColor(Color.WHITE);
            ViewCompat.setBackgroundTintList(meutweet, ColorStateList.valueOf(Color.BLUE));

            builder.setView(meutweet);

            builder.setPositiveButton("Enviar", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    // map de strings para linkar itens
                    Map<String, Object> tweet = new HashMap<>();

                    // verificar se o tweet nao esta em branco
                    if (!meutweet.getText().toString().isEmpty()) {
                        // remover espaços em branco no inicio do tweet
                        String aux = "";
                        Boolean isSpace = true;
                        for(int i = 0; i < meutweet.getText().toString().length(); i++) {
                            if(isSpace && meutweet.getText().toString().charAt(i) == ' ') {
                                isSpace = true;
                            } else {
                                isSpace = false;
                                aux+=meutweet.getText().toString().charAt(i);
                            }
                        }

                        tweet.put("msg", aux);
                        tweet.put("uid", meuUid);
                        // -1 * currentTimeMillis -> pega o tempo atual em milliseconds, o -1 é para ordenar em funcao do tempo tendo em vista que os dados no firebase nao sao ordenados
                        // servirá para manter a ordem da publicação também
                        tweet.put("data", -1 * System.currentTimeMillis());
                        tweet.put("nome", meuNome);

                        SimpleDateFormat formatterDay = new SimpleDateFormat("dd/MM/yyyy");
                        SimpleDateFormat formatterHour = new SimpleDateFormat("HH:mm:ss");

                        Date d = new Date();
                        Date h = new Date();
                        tweet.put("dia", formatterDay.format(d));
                        tweet.put("hora", formatterHour.format(h));

                        // obtendo a key para referencia-la depois
                        String keytweet = ref.child("tweets").push().getKey();
                        tweet.put("tid", keytweet);

                        // criar uma referencia do firebase chamada tweets e define um valor a partir de 'tweet'
                        ref.child("tweets").child(keytweet).setValue(tweet);
                        Toast.makeText(getApplicationContext(), "Seu tweet foi enviado", Toast.LENGTH_SHORT).show();
                    } else {
                        // Se estiver vazio, informar com um toast
                        Toast.makeText(SegundaTela.this, "Tweet vazio!", Toast.LENGTH_SHORT).show();
                    }
                }
            });

            builder.setNegativeButton("Cancelar", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    dialog.cancel();
                }
            });

            builder.show();

            return true;

        } else if (id == R.id.sair){
            FirebaseAuth.getInstance().signOut();
            Intent t = new Intent(SegundaTela.this, MainActivity.class);
            SegundaTela.this.startActivity(t);
            finish();
            SegundaTela.this.overridePendingTransition(R.anim.slide_in_left, R.anim.slide_out_right);
        }

        return super.onOptionsItemSelected(item);
    }

    // na hora em que a tela ficar disponível
    @Override
    protected void onStart() {
        super.onStart();

        FirebaseUser user = FirebaseAuth.getInstance().getCurrentUser();

        if(user == null) {
            // se usuario estiver vazio, encerra a activity
            finish();
        } else {
            // caso ele tenha usuario
            meuUid = user.getUid();
            // adiciona um listener para a seguinte referencia do firebase
            ref.child("usuarios").child(meuUid).child("nome").addListenerForSingleValueEvent(new ValueEventListener() {
                @Override
                public void onDataChange(@NonNull DataSnapshot dataSnapshot) {
                    // quando mudar o dado vamos obter o valor
                    meuNome = dataSnapshot.getValue(String.class);
                }

                @Override
                public void onCancelled(@NonNull DatabaseError databaseError) {

                }
            });
        }

        // para inicializar limpo
        userIds.clear();
        usuarios.clear();


        childEventListener = new ChildEventListener() {
            @Override
            public void onChildAdded(@NonNull DataSnapshot dataSnapshot, @Nullable String s) {
                if(!dataSnapshot.child("uid").getValue(String.class).equals(meuUid)) {
                    usuarios.add(dataSnapshot.child("nome").getValue(String.class));
                    userIds.add(dataSnapshot.child("uid").getValue(String.class));

                    arrayAdapter.notifyDataSetChanged();

                    atualizarLista();
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

        ref.child("usuarios").addChildEventListener(childEventListener);

        valueEventListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot dataSnapshot) {
                seguindo.clear();
                for (DataSnapshot d : dataSnapshot.getChildren()) {
                    seguindo.add(d.getValue(String.class));

                }

                Log.d("MeuLog", "Seguindo " + seguindo);
                atualizarLista();
            }

            @Override
            public void onCancelled(@NonNull DatabaseError databaseError) {

            }
        };


        ref.child("usuarios").child(meuUid).child("seguindo").addValueEventListener(valueEventListener);

    }


    public void atualizarLista() {
        for (String uid : userIds) {
            if(seguindo.contains(uid)) {
                listView.setItemChecked(userIds.indexOf(uid), true);
            } else {
                listView.setItemChecked(userIds.indexOf(uid), false);
            }
        }
    }

}
