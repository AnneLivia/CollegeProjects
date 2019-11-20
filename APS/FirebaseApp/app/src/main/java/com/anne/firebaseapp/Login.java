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

public class Login extends AppCompatActivity {

    private FirebaseAuth MinhaAuth;
    private FirebaseAuth.AuthStateListener MinhaAuthListener;
    private EditText CampoEmail, CampoSenha;
    private Button btvoltar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        Login.this.overridePendingTransition(R.anim.slide_in_right, R.anim.slide_out_left);

        btvoltar = (Button) findViewById(R.id.btreturn);

        btvoltar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent i = new Intent(Login.this, MainActivity.class);
                startActivity(i);
                finish();
                Login.this.overridePendingTransition(R.anim.slide_in_left, R.anim.slide_out_right);
            }
        });

        MinhaAuth = FirebaseAuth.getInstance();

        //inicializar objetos de interface
        CampoEmail = (EditText) findViewById(R.id.emailCampoLogin);
        CampoSenha = (EditText) findViewById(R.id.senhaCampoLogin);

        MinhaAuthListener = new FirebaseAuth.AuthStateListener() {
            @Override
            public void onAuthStateChanged(@NonNull FirebaseAuth firebaseAuth) {

                FirebaseUser user = firebaseAuth.getCurrentUser();
                if (user != null) {
                    //
                    Log.d("MeuLog", "Usuário conectado: " + user.getUid());
                    Intent i = new Intent(getApplicationContext(), SegundaTela.class);
                    startActivity(i);
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

    public void ClicaLogin(View view){
        if(!CampoEmail.getText().toString().isEmpty() && !CampoSenha.getText().toString().isEmpty()) {
            MinhaAuth.signInWithEmailAndPassword(CampoEmail.getText().toString(), CampoSenha.getText().toString()).addOnCompleteListener(this, new OnCompleteListener<AuthResult>() {
                @Override
                public void onComplete(@NonNull Task<AuthResult> task) {
                    if (!task.isSuccessful()) {
                        Toast.makeText(getApplicationContext(), "Senha e/ou Email incorreto.", Toast.LENGTH_SHORT).show();
                        Log.d("MeuLog", "Falha na autenticação");
                    } else {
                        Toast.makeText(getApplicationContext(), "Bem vindo(a)", Toast.LENGTH_SHORT).show();
                    }
                }
            });
        } else {
            Toast.makeText(getApplicationContext(), "Preencher todos os campos!", Toast.LENGTH_SHORT).show();
        }
    }

}
