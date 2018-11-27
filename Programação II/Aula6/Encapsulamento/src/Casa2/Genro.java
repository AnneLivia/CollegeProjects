package Casa2;

import Casa1.Sogro;

public class Genro {
	private String segredo = "Minha sogra fala demais";
	
	public static void main(String[] args) {
		Genro euMesmo = new Genro();
		System.out.println("Nunca falarei..." + euMesmo.segredo);
		
		Filha meuAmor = new Filha();
		System.out.println(meuAmor.segredoDoCasal);
		Sogro sograo = new Sogro();
		System.out.println(sograo.gostoDeCerveja);
		
		//Sogra sogrinha = new Sogra();
		//System.out.println(sogrinha.segredoDeFamilia);
	}
}
