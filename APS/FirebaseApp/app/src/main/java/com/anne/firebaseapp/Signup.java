package com.anne.firebaseapp;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class Signup extends AppCompatActivity {
    private FirebaseAuth MinhaAuth;
    private FirebaseAuth.AuthStateListener MinhaAuthListener;
    private EditText CampoNome, CampoEmail, CampoSenha;
    private Button btvoltar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_signup);

        Signup.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);

        btvoltar = (Button) findViewById(R.id.btreturn);

        btvoltar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent i = new Intent(Signup.this, MainActivity.class);
                startActivity(i);
                finish();
                Signup.this.overridePendingTransition(R.anim.slide_in_left, R.anim.slide_out_right);
            }
        });

        MinhaAuth = FirebaseAuth.getInstance();

        //inicializar objetos de interface
        CampoNome = (EditText) findViewById(R.id.nomeCampoSignup);
        CampoEmail = (EditText) findViewById(R.id.emailCampoSignup);
        CampoSenha = (EditText) findViewById(R.id.senhaCampoSignup);

        MinhaAuthListener = new FirebaseAuth.AuthStateListener() {
            @Override
            public void onAuthStateChanged(@NonNull FirebaseAuth firebaseAuth) {

                FirebaseUser user = firebaseAuth.getCurrentUser();
                if (user != null) {
                    //
                    Log.d("MeuLog", "Usuário conectado: " + user.getUid());
                    Intent i = new Intent(getApplicationContext(), SegundaTela.class);
                    startActivity(i);
                    Signup.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);
                } else {
                    Log.d("MeuLog", "Sem usuários conectados");
                }
            }
        };
    }

    @Override
    public void onStart(){
        super.onStart();
        MinhaAuth.addAuthStateListener(MinhaAuthListener);

    }

    //quando parar a view remove o listener
    @Override
    public void onStop(){
        super.onStop();
        if (MinhaAuthListener!=null){
            MinhaAuth.removeAuthStateListener(MinhaAuthListener);
        }
    }

    public void ClicaCriarUsuario(View view){
        if(!CampoEmail.getText().toString().isEmpty() &&
                !CampoNome.getText().toString().isEmpty() && !CampoSenha.getText().toString().isEmpty()) {
            MinhaAuth.createUserWithEmailAndPassword(CampoEmail.getText().toString(), CampoSenha.getText().toString()).addOnCompleteListener(this, new OnCompleteListener<AuthResult>() {
                @Override
                public void onComplete(@NonNull Task<AuthResult> task) {
                    if (!task.isSuccessful()) {
                        Toast.makeText(Signup.this, "Email já existente.", Toast.LENGTH_SHORT).show();
                        Log.d("MeuLog", "Falha no cadastro. Causa: " + task.getException().getMessage());
                    } else {
                        //criar o firebase database
                        FirebaseDatabase database = FirebaseDatabase.getInstance();
                        //cria uma referencia chamada 'usuarios'
                        //FirebaseAuth.getInstance() cria um id para essa autenticação
                        //cria uma nova referencia dentro do campo 'usuarios' e o filho
                        //dele vai criar um objeto com id (getUid) dele
                        DatabaseReference ref = database.getReference("usuarios").child(FirebaseAuth.getInstance().getCurrentUser().getUid());
                        //dentro desse objeto vamos salvar o nome do usuario
                        ref.child("nome").setValue(CampoNome.getText().toString());
                        //e o user id sera utilizado para Login do usuario
                        ref.child("uid").setValue(FirebaseAuth.getInstance().getUid());

                        Intent i = new Intent(getApplicationContext(), SegundaTela.class);
                        startActivity(i);
                        Signup.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);
                        Toast.makeText(Signup.this, "Cadastro efetuado com sucesso!", Toast.LENGTH_SHORT).show();
                    }
                }
            });
        } else {
            Toast.makeText(Signup.this, "Preencher todos os campo para efetuar o login.", Toast.LENGTH_SHORT).show();
        }
    }
}
