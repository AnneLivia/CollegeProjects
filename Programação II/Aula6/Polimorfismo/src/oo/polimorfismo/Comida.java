package oo.polimorfismo;

public class Comida {
	
	private double peso = 0; // kg
	
	public double getPeso() {
		return peso;
	}
	
	public void setPeso(double peso) {
		if(peso > 0) {
			this.peso = peso;
		}
	}
}
