package programas;

import java.util.Locale;
import java.util.Scanner;

public class uri1094 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		Locale.setDefault(Locale.US); 
		
		int t, qtd, qtdCoelho, qtdRato, qtdSapo, total;
		char cobaia;
		
		total = qtdCoelho = qtdRato = qtdSapo = 0;
		
		t = input.nextInt();
		
		int i = 0;
		while(i < t) {
			qtd = input.nextInt();
			cobaia = input.next().charAt(0);
			
			if(cobaia == 'C') {
				qtdCoelho+=qtd;
			} else if (cobaia == 'R') {
				qtdRato+=qtd;
			} else {
				qtdSapo+=qtd;
			}
			
			total+=qtd;
			
			i++;
	   }
		
	   System.out.println("Total: " + total + " cobaias");
	   System.out.println("Total de coelhos: "+qtdCoelho);
	   System.out.println("Total de ratos: "+qtdRato);
	   System.out.println("Total de sapos: "+qtdSapo);
	   System.out.printf("Percentual de coelhos: %.2f %%%n",((double)qtdCoelho/total) * 100);
	   System.out.printf("Percentual de ratos: %.2f %%%n",((double)qtdRato/total) * 100);
	   System.out.printf("Percentual de sapos: %.2f %%%n",((double)qtdSapo/total) * 100);
	}
}
