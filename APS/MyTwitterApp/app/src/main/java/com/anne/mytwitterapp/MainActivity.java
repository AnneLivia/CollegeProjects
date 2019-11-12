package com.anne.mytwitterapp;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class MainActivity extends AppCompatActivity {

    private FirebaseAuth MinhaAuth;
    private EditText CampoNome, CampoEmail, CampoSenha;
    // monitora se esta logado ou nao
    private FirebaseAuth.AuthStateListener MinhaAuthListener;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        CampoNome = (EditText) findViewById(R.id.campoNome);
        CampoEmail = (EditText) findViewById(R.id.campoEmail);
        CampoSenha = (EditText) findViewById(R.id.campoSenha);

        MinhaAuth = FirebaseAuth.getInstance(); // pegar instania atual do firebase (se usuario logado, login e senha), caso contrario, instacia vazia
        MinhaAuthListener = new FirebaseAuth.AuthStateListener() {
            @Override
            public void onAuthStateChanged(@NonNull FirebaseAuth firebaseAuth) {
                // FirebaseAuth é o que vai validar o login do usuario
                FirebaseUser user = firebaseAuth.getCurrentUser();
                if(user != null) {
                    // se possuir usuario passa para a proxima activity
                    Log.d("MeuLog", "Usuario conectado: " + user.getUid(), null);
                    Intent i = new Intent(getApplicationContext(), SegundaTela.class);
                    startActivity(i);
                } else {
                    Log.d("Meulog", "Usuario não conectado", null);
                }
            }
        };
    }

    @Override
    public void onStart() {
        super.onStart();
        MinhaAuth.addAuthStateListener(MinhaAuthListener);
    }

    @Override
    public void onStop() {
        super.onStop();
        MinhaAuth.removeAuthStateListener(MinhaAuthListener);
    }

    public void clicaLogin(View v) {
        MinhaAuth.signInWithEmailAndPassword(CampoEmail.getText().toString(),
                CampoSenha.getText().toString()).addOnCompleteListener(this, new OnCompleteListener<AuthResult>() {
            @Override
            public void onComplete(@NonNull Task<AuthResult> task) {
                if(!task.isSuccessful()) {
                    // se nao foi um sucesso
                    Log.d("MeuLog", "Login nao realizado");
                } else {

                }
            }
        });
    }

    public void clicaCriarUsuario(View v) {
        MinhaAuth.createUserWithEmailAndPassword(CampoEmail.getText().toString(), CampoSenha.getText().toString()).addOnCompleteListener(
                this, new OnCompleteListener<AuthResult>() {
                    @Override
                    public void onComplete(@NonNull Task<AuthResult> task) {
                        if (!task.isSuccessful()) {
                            Log.d("MeuLog", "Cadastro errado " + task.getException().getMessage());
                        } else {
                            // Criar firebase databse
                            FirebaseDatabase database = FirebaseDatabase.getInstance();
                            // Cria refefencia chmada usuarios
                            // firebaseAuth grtstnst cria id para essa autenticacao
                            DatabaseReference ref  = database.getReference("usuarios").
                                    child(FirebaseAuth.getInstance().getCurrentUser().getUid());
                            // dentro desse objeto vamos salva o nome do usuario
                            ref.child("nome").setValue(CampoNome.getText().toString());
                            ref.child("uid").setValue(FirebaseAuth.getInstance().getUid());

                        }
                    }
                });
    }

}



