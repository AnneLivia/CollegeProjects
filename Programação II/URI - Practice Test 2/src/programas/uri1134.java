package programas;
import java.util.Scanner;

public class uri1134 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int cod, qtdA, qtdG, qtdD;
		qtdA = qtdG = qtdD = 0;
		
		do {
			cod = input.nextInt();
			if(cod >= 1 && cod < 4) {
				switch(cod) {
					case 1: qtdA++;
						    break;
					case 2: qtdG++;
							break;
					case 3: qtdD++;
							break;
				}
			}
		} while (cod != 4);
		
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: "+qtdA);
		System.out.println("Gasolina: "+qtdG);
		System.out.println("Diesel: "+qtdD);
	}
}
