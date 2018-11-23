package Casa2;

import Casa1.Sogra;
import Casa1.Sogro;

public class Filha extends Sogra{
	String segredoDoCasal = "Meu Marido está quase sendo demitido";
	
	public static void main(String[] args) {
		Filha euMesma = new Filha();
		System.out.println("Meus pais não sabem..." + euMesma.segredoDoCasal);
		System.out.println(euMesma.segredoDeFamilia);
		
		// Genro meuAmor = new Genro();
		// System.out.println(meuAmor.segredo);
		
		//Sogra mamae = new Sogra();
		//System.out.println(mamae.segredoDeFamilia);
		
		Sogro pai = new Sogro();
		System.out.println(pai.gostoDeCerveja);
	}
}
