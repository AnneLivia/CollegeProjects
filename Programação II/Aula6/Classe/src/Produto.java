
public class Produto {
	String nome;
	double preco;
	//double desconto;
	static double desconto = 0.15;
	
	Produto() {
		
	}
	
	Produto(String nome, double preco, double desconto) {
		this.nome = nome;
		this.preco = preco;
		//this.desconto = desconto;
	}
	
	double precoComDesconto() {
		return preco - (preco * desconto);
	}
	
}
