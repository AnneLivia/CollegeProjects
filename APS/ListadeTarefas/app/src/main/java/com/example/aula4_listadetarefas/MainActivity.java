package com.example.aula4_listadetarefas;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.ContentValues;
import android.content.DialogInterface;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Color;
import android.graphics.Paint;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
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

    private EditText MeuTexto, MinhaData, MinhaHora;
    private ListView MinhaLista;
    private Button MeuBotao;

    // objeto utilizado para inserir no bd
    private SQLiteDatabase BancoDados;

    private ArrayAdapter<String> ItensAdaptador;
    private ArrayList<Integer> ids;
    private ArrayList<String> itens, datahora, checked;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        MeuTexto = (EditText) findViewById(R.id.MeuTexto);
        MinhaLista = (ListView) findViewById(R.id.MinhaLista);
        MeuBotao = (Button) findViewById(R.id.MeuBotao);
        MinhaData = (EditText) findViewById(R.id.MinhaData);
        MinhaHora = (EditText) findViewById(R.id.MinhaHora);

        // carregar informações do banco de dados assim que carregar o app
        CarregaTarefas();

        // quando apertar o botão, chamar função adicionar tarefas passando a string no meuTexto
        MeuBotao.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                // passar para função adicionatarefa o texto digitado pelo usuario
                // checar se data esta correta
                if(isDate(MinhaData.getText().toString())) {
                    if(isHour(MinhaHora.getText().toString())) {
                        AdicionaTarefas(MeuTexto.getText().toString(), MinhaData.getText().toString(), MinhaHora.getText().toString());
                    } else {
                        Toast.makeText(MainActivity.this, "Hora não inserida ou no formato errado.", Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(MainActivity.this, "Data não inserida ou no formato errado.", Toast.LENGTH_SHORT).show();
                }
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
                updateTarefa(posicao);
            }
        });
    }


    private boolean isDate(String date) {
        // dd/mm/yyyy
        if(date.length() == 10) {
            if(date.charAt(2) == '/' && date.charAt(5) == '/') {
                int n = 0;
                for(int i = 0; i < 10; ++i) {
                    int a = (date.charAt(i) - '0');
                    if(i != 2 && i != 5 && a >= 0 && a <= 9) {
                        n++;
                    }
                }

                if(n == 8) {
                    return true;
                }
            }
        }
        return false;
    }


    private boolean isHour(String hour) {
        Log.d("Banco de Dados", "N: " + hour);
        // hh:mm
        if(hour.length() == 5) {
            if(hour.charAt(2) == ':') {
                int n = 0;
                for(int i = 0; i < 5; ++i) {
                    int a = (hour.charAt(i) - '0');
                    if(i != 2 && a >= 0 && a <= 9) {
                        n++;
                    }
                }

                if(n == 4) {
                    return true;
                }
            }
        }
        return false;
    }

    private void updateTarefa(int pos) {
        try{
            Integer posId = ids.get(pos);
            // new value
            int check = 1;
            if(checked.get(pos).equals("1"))
                check = 0;

            Log.d("BancodeDados", "Atualizacao em " + posId + " para " + check);

            // atualizando valor da coluna checked
            ContentValues checkedNew = new ContentValues();
            checkedNew.put("checked", Integer.toString(check));
            // executar comando de incluir onde o id for igual pos
            BancoDados.update("MinhasTarefas", checkedNew, "id = " + posId, null);
            // informar atualizacao
            if(check == 1) {
                Toast.makeText(MainActivity.this, "Tarefa Concluída!", Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(MainActivity.this, "Tarefa Não Concluída!", Toast.LENGTH_SHORT).show();
            }

            // atualizar list
            CarregaTarefas();
        } catch (Exception e){
            e.printStackTrace();
        }
    }

    private void CarregaTarefas(){
        try{
            // cria bd lista tarefa se não existir, ou abri se existe
            BancoDados = openOrCreateDatabase("ListaTarefas", MODE_PRIVATE, null);
            // cria tabela minhastarefa se não existir com id e tarefa como atributos
            BancoDados.execSQL("CREATE TABLE IF NOT EXISTS MinhasTarefas(id INTEGER PRIMARY KEY AUTOINCREMENT, tarefa VARCHAR, datahora VARCHAR, checked VARCHAR)");

            //String NovaTarefa = MeuTexto.getText().toString();
            //BancoDados.execSQL("INSERT INTO MinhasTarefas(tarefa) VALUES('" + NovaTarefa + "')");

            // rawquery permite fazer uma consulta em sql e armazena isso em um objeto do tipo cursor
            // this interface provides random read-write access to the result set returned by a database query.
            Cursor cursor = BancoDados.rawQuery("SELECT * FROM MinhasTarefas ORDER BY id DESC", null);

            // obtem id e tarefa
            int IndiceColunaID = cursor.getColumnIndex("id");
            int IndiceColunaTarefa = cursor.getColumnIndex("tarefa");
            int IndiceColunaChecked = cursor.getColumnIndex("checked");
            int IndiceColunaDataHora = cursor.getColumnIndex("datahora");

            // inicializando arrays globais  ids e itens
            itens = new ArrayList<String>();
            ids = new ArrayList<Integer>();
            checked = new ArrayList<String>();
            datahora = new ArrayList<String>();

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
                    android.R.layout.simple_list_item_2,
                    android.R.id.text1,
                    itens) {
                @Override
                // Sobrescreveno o getView para poder por o texto três
                public View getView(int position, View convertView, ViewGroup parent) {
                    View view = super.getView(position, convertView, parent);
                    TextView text1 = (TextView) view.findViewById(android.R.id.text1);
                    TextView text2 = (TextView) view.findViewById(android.R.id.text2);
                    text1.setText(itens.get(position).toString());
                    text2.setText(datahora.get(position).toString());

                    text1.setTextColor(Color.BLACK);
                    text2.setTextColor(Color.BLUE);

                    // verificando no bd se o valor em cheched é 1 ou 0, se 1 riscar caso contrario tirar o risco
                    if(checked.get(position).equals("1")) {
                        text1.setPaintFlags(text1.getPaintFlags() | Paint.STRIKE_THRU_TEXT_FLAG);
                        text2.setPaintFlags(text1.getPaintFlags() | Paint.STRIKE_THRU_TEXT_FLAG);
                    } else {
                        text1.setPaintFlags(text1.getPaintFlags() & (~Paint.STRIKE_THRU_TEXT_FLAG));
                        text2.setPaintFlags(text1.getPaintFlags() & (~Paint.STRIKE_THRU_TEXT_FLAG));
                    }
                    return view;
                }
            };

            MinhaLista.setAdapter(ItensAdaptador);

            cursor.moveToFirst();

            // pegando todos os dados cadastrados no bd e populando os arrays de id e de itens
            while (cursor!=null){
                Log.d("BancoDados", "ID: " + cursor.getString(IndiceColunaID) + " Tarefa: " + cursor.getString(IndiceColunaTarefa) + "DataHora: " + cursor.getString(IndiceColunaDataHora));
                itens.add(cursor.getString(IndiceColunaTarefa));
                ids.add(Integer.parseInt(cursor.getString(IndiceColunaID)));
                checked.add(cursor.getString(IndiceColunaChecked));
                datahora.add(cursor.getString(IndiceColunaDataHora));
                cursor.moveToNext();
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    private void AdicionaTarefas(String tarefa, String data, String hora){
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
                String dia = data;
                String horario = hora;
                String tempo = dia + " - " + horario;
                // esvaziar editlist
                MeuTexto.setText("");
                MinhaHora.setText("");
                MinhaData.setText("");
                // inserindo no bd
                BancoDados.execSQL( "INSERT INTO MinhasTarefas(tarefa, datahora, checked) VALUES('" + tarefa + "', '" + tempo + "', '" + 0 + "')");
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
