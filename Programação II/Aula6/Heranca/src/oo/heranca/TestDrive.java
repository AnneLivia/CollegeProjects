package oo.heranca;

public class TestDrive extends Carro {
	public static void main(String[] args) {
		Carro c = new Civic();
		c.acelerar();
		System.out.println(c.getVelocidadeAtual());
		
		c = new Ferrari();
		c.acelerar();
		System.out.println(c.getVelocidadeAtual());
	}
}
