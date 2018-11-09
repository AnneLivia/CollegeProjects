import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int n =  ip.nextInt();
		int qtdNegativo = 0;
		int vet[][] = new int[n][n];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				vet[i][j] = ip.nextInt();
				
			}
		}
		
		System.out.println("DIAGONAL PRINCIPAL:");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(vet[i][j] < 0)
					qtdNegativo++;
				if(i == j)
					System.out.print(vet[i][j] + " ");
			}
		}
		
		System.out.println();
		
		System.out.println("QUANTIDADE DE NEGATIVOS = " + qtdNegativo);
		
		ip.close();
	}

}
