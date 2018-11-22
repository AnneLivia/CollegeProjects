
public class Main {

	public static void main(String[] args) {
		Produto p1 = new Produto();
		Produto p2 = new Produto();
		
		p1.nome = "Notebook Acer 15' 8GB";
		p1.preco = 2300.00;
		p1.desconto = 0.15;
		
		
		p2.nome = "Caneta BIC 15";
		p2.preco = 2.83;
		p2.desconto = 0.05;
		
		System.out.println("Nome produto 1: " + p1.nome +
				           "\nPreco: " + p1.preco + 
				           "\nDesconto: " + p1.desconto +
				           "\nPreco com desconto: " + p1.precoComDesconto());
		System.out.println("Nome produto 2: " + p2.nome +
		           "\nPreco: " + p2.preco + 
		           "\nDesconto: " + p2.desconto +
		           "\nPreco com desconto: " + p2.precoComDesconto());
		
	}

}
