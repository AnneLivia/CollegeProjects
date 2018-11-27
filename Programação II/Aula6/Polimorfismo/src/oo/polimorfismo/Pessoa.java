package oo.polimorfismo;

public class Pessoa {
	private double peso = 0;
	
	public Pessoa(double pesoInicial) {
		this.peso = pesoInicial;
	}
	
	public double getPeso() {
		return peso;
	}
	
	public void comer(Comida comida) {
		this.peso+=comida.getPeso();
	}
	
	/*
	 * public void comer(Arroz arroz) {
	 * 	// this.peso += arroz.getPeso();
	 * }
	 * */
}
