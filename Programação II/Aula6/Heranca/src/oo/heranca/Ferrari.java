package oo.heranca;

public class Ferrari extends Carro {
	public Ferrari() {
		VEL_MAX = 350;
	}
	
	public void acelerar() {
		super.acelerarMais(20);
	}
}
