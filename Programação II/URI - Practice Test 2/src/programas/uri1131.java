package programas;

import java.util.Scanner;

// Grenais - 1131

public class uri1131 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int opcao, golg, goli, qtdGrenal, qtdi, qtdg, qtdEm;
		
		qtdGrenal = qtdi = qtdg = qtdEm = 0;
		
		do {
			goli = input.nextInt(); // Gol Inter
			golg = input.nextInt(); // Gol Gremio 
			qtdGrenal++;
			if(goli > golg) {
				qtdi++;
			} else if (golg > goli){
				qtdg++;
			} else {
				qtdEm++;
			}
			
			System.out.println("Novo grenal (1-sim 2-nao)");
			opcao = input.nextInt(); // Novo grenal?
		} while(opcao != 2);
		
		System.out.println(qtdGrenal + " grenais");
		System.out.println("Inter:"+qtdi);
		System.out.println("Gremio:"+qtdg);
		System.out.println("Empates:"+qtdEm);
		
		if(qtdi > qtdg) {
			System.out.println("Inter venceu mais");
		} else if (qtdg > qtdi){
			System.out.println("Gremio venceu mais");
		} else {
			System.out.println("Nao houve vencedor");
		}
		input.close();
	
	}

}
