package com.example.aula4_listadetarefas;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Paint;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;

public class MainActivity extends AppCompatActivity {

    private EditText MeuTexto;
    private ListView MinhaLista;
    private Button MeuBotao;

    // objeto utilizado para inserir no bd
    private SQLiteDatabase BancoDados;

    private ArrayAdapter<String> ItensAdaptador;
    private ArrayList<Integer> ids;
    private ArrayList<String> itens;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        MeuTexto = (EditText) findViewById(R.id.MeuTexto);
        MinhaLista = (ListView) findViewById(R.id.MinhaLista);
        MeuBotao = (Button) findViewById(R.id.MeuBotao);

        // carregar informações do banco de dados assim que carregar o app
        CarregaTarefas();

        // quando apertar o botão, chamar função adicionar tarefas passando a string no meuTexto
        MeuBotao.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                // passar para função adicionatarefa o texto digitado pelo usuario
                AdicionaTarefas(MeuTexto.getText().toString());
            }
        });

        // Se segurar por várias vezes o botão, aparecerá um alert perguntando se quer remover ou não
        MinhaLista.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {

            @Override
            public boolean onItemLongClick(AdapterView<?> adapterView, View view, int position, long l) {
                // necessários essa função com esses parametros, mas pega só a posição que indica o indice e passa para laertaapagartarefa
                //ApagaTarefas(ids.get(position));
                AlertaApagarTarefa(position);

                return false;
            }
        });

        // marcar tarefa como concluida ao dar um clique em cima da mesma
        MinhaLista.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int posicao, long l) {
                try {
                    TextView tt = (TextView) view;
                    // Log.d("BancodeDados", "String: "+ tt.getText());

                    boolean isCross = false;
                    if (!tt.getPaint().isStrikeThruText()) {
                        tt.setPaintFlags(tt.getPaintFlags() | Paint.STRIKE_THRU_TEXT_FLAG);
                        Toast.makeText(MainActivity.this, "Tarefa Concluída!", Toast.LENGTH_SHORT).show();
                    } else {
                        isCross = true;
                        tt.setPaintFlags(tt.getPaintFlags() & (~Paint.STRIKE_THRU_TEXT_FLAG));
                        Toast.makeText(MainActivity.this, "Tarefa Não Concluída!", Toast.LENGTH_SHORT).show();
                    }

                    // updateTarefa(posicao, isCross);

                } catch (Exception e){
                    e.printStackTrace();
                }
            }
        });
    }

    /*
    private void updateTarefa(int pos, boolean iscross) {
        try{
            Log.d("BancodeDados", "Strinsssg nao incluida: ");
            // executar comando de delete onde o id for igual
            BancoDados.execSQL("UPDATE MinhasTarefas SET checked=" + iscross +" WHERE id=" + pos);
            // informar atualizacao
            if(iscross) {
            } else {
            }
            // atualizar list
            CarregaTarefas();
        } catch (Exception e){
            e.printStackTrace();
        }
    }
    */
    private void CarregaTarefas(){
        try{
            // cria bd lista tarefa se não existir, ou abri se existe
            BancoDados = openOrCreateDatabase("ListaTarefas", MODE_PRIVATE, null);
            // cria tabela minhastarefa se não existir com id e tarefa como atributos
            BancoDados.execSQL("CREATE TABLE IF NOT EXISTS MinhasTarefas(id INTEGER PRIMARY KEY AUTOINCREMENT, tarefa VARCHAR, datahora VARCHAR)");

            //String NovaTarefa = MeuTexto.getText().toString();
            //BancoDados.execSQL("INSERT INTO MinhasTarefas(tarefa) VALUES('" + NovaTarefa + "')");

            // rawquery permite fazer uma consulta em sql e armazena isso em um objeto do tipo cursor
            // this interface provides random read-write access to the result set returned by a database query.
            Cursor cursor = BancoDados.rawQuery("SELECT * FROM MinhasTarefas ORDER BY id DESC", null);

            // obtem id e tarefa
            int IndiceColunaID = cursor.getColumnIndex("id");
            int IndiceColunaTarefa = cursor.getColumnIndex("tarefa");

            // inicializando arrays globais  ids e itens
            itens = new ArrayList<String>();
            ids = new ArrayList<Integer>();

            // itensadaptor é um objeto que
            /*
                A list adapter is an object that adapts a collection objects for display in a ListView.
                ArrayAdapter is one simple implementation that maps an array of objects.

                ArrayAdapter<String> adapter = new ArrayAdapter<String>(this,
                android.R.layout.simple_list_item_1, android.R.id.text1, values);
                Added in API level 1 Constructor

                Parameters

                context The current context.

                resource The resource ID for a layout file containing a layout to use when instantiating views.

                textViewResourceId The id of the TextView within the layout resource to be populated objects The objects to represent in the ListView.

            android.R.id.text1 refers to the id of text in android resource. So you need not have the one in your activity.

            values is a string array from the link you provided

                */
            ItensAdaptador = new ArrayAdapter<String>(getApplicationContext(),
                    android.R.layout.simple_list_item_1,
                    android.R.id.text1,
                    itens);

            MinhaLista.setAdapter(ItensAdaptador);

            cursor.moveToFirst();

            // pegando todos os dados cadastrados no bd e populando os arrays de id e de itens
            while (cursor!=null){
                Log.d("BancoDados", "ID: " + cursor.getString(IndiceColunaID) + " Tarefa: " + cursor.getString(IndiceColunaTarefa));
                itens.add(cursor.getString(IndiceColunaTarefa));
                ids.add(Integer.parseInt(cursor.getString(IndiceColunaID)));
                cursor.moveToNext();
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    private void AdicionaTarefas(String tarefa){
        // Andorid Toast can be used to display information for the short period of time.
        // A toast contains message to be displayed quickly and disappears after sometime.
        if (tarefa.isEmpty()){
            // se não houver nada e o usuario apertar o botão, exibir essa mensagem
            Toast.makeText(MainActivity.this, "Preencha o campo tarefa!", Toast.LENGTH_SHORT).show();
        } else{
            // Caso contrario inserir.
            // Tarefa 1: caso haja espaço antes da tarefa, remove e cadastrar somente a tarefa
            String aux = "", word = "";
            // verificar se é primeira palavra ou não para por espaço entre palavras
            boolean firstWord = false;
            // inserir espaço no fim para fazer ultima avaliacao
            tarefa+=' ';
            for(int i = 0; i < tarefa.length(); i++) {
                if(tarefa.charAt(i) != ' ') {
                    // concatenar palavras
                    aux+=tarefa.charAt(i);
                } else {
                    // se achou palavra
                    if(!aux.equals("")) {
                        // verificar se é a primeira,se for por espaço
                        if(firstWord)
                            word+=' ';
                        // concatenar nova palavra com word
                        word+=aux;
                        firstWord = true; // já pode ser considerado que existe mais de uma palavra
                    }
                    aux = "";
                }
            }
            // atualizar tarefa
            tarefa = word;

            if(!tarefa.equals("")) {
                // exibir na tela tarefa add
                Toast.makeText(MainActivity.this, "Tarefa " + tarefa + " adicionada!", Toast.LENGTH_SHORT).show();
                Date datahora = new Date();
                String dia = new SimpleDateFormat("dd/MM/yyyy").format(datahora);
                String hora = new SimpleDateFormat("HH:mm:ss").format(datahora);
                String tempo = dia + " - " + hora;
                tarefa+=" (" + tempo + ")";
                // esvaziar editlist
                MeuTexto.setText("");
                // inserindo no bd
                BancoDados.execSQL("INSERT INTO MinhasTarefas(tarefa, datahora) VALUES('" + tarefa + "', '" + tempo + "')");
                // atualizar informações
                CarregaTarefas();
            } else {
                Toast.makeText(MainActivity.this, "Tarefa vazia!", Toast.LENGTH_SHORT).show();
                MeuTexto.setText("");
            }
        }
    }

    private void ApagaTarefas(Integer id){
        try{
            // executar comando de delete onde o id for igual
            BancoDados.execSQL("DELETE FROM MinhasTarefas WHERE id="+id);
            // informar remocao
            Toast.makeText(MainActivity.this, "Tarefa removida!", Toast.LENGTH_SHORT).show();
            // atualizar list
            CarregaTarefas();
        } catch (Exception e){
            e.printStackTrace();
        }
    }

    // alert para verfifcar se é para apagar ou nao
    private void AlertaApagarTarefa(Integer id){
        // pegar a tarefa que foi selecionada
        String TarefaSelecionada = itens.get(id);
        // objeto integer com id
        final Integer NumeroId = id;

        // alert perguntando se quer remover ou nao, se quiser, chama funcao apagatarefas passando o id
        new AlertDialog.Builder(MainActivity.this)
                .setTitle("Aviso!")
                .setMessage("Deseja apagar a tarefa: " + TarefaSelecionada + "?")
                .setPositiveButton("Sim", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialogInterface, int i) {
                        ApagaTarefas(ids.get(NumeroId));
                    }
                }).setNegativeButton("Não", null).show();

    }
}
