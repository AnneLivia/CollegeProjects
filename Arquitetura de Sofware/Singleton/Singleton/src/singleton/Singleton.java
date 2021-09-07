package singleton;

public class Singleton {
    
    // static é variavel de classe e não de instancia (logo é compartilhada por todos os objetos dessa classe)
    private static Singleton singleton = null;
    
    private String nome;
    private int idade;


    // evitar que o usuário faça a instancia da classe
    private Singleton() {

    }

    // metódo publico que vai retornar o singleton e garantir que a classe em questão possua apenas uma instancia
    public static Singleton getInstance() {
        if (singleton == null) {
            // se ainda nao tiver tido instancia, pode instanciar, caso contrario nao, porque ai nao vai ser singleton
            singleton = new Singleton();
        }
        
        return singleton;
    }

    public String getNome(){
		return this.nome;
	}
	public int getIdade(){
		return this.idade;
	}

	public void setNome(String nome){
		this.nome = nome;
	}
	public void setIdade(int ida){
		this.idade = ida;
	}
}