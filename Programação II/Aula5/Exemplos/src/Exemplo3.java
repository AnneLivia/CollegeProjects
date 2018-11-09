import java.util.Locale;
import java.util.Scanner;

public class Exemplo3 {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int linha, coluna;
		linha  = ip.nextInt();
		coluna = ip.nextInt();
		
		int vet[][] = new int[linha][coluna];
		
		for(int i = 0; i < linha; i++) {
			for(int j = 0; j < coluna; j++) {
				vet[i][j] = ip.nextInt();
			}
		}
		
		for(int i = 0; i < linha; i++) {
			for(int j = 0; j < coluna; j++) {
				System.out.print(vet[i][j] + " ");
			}
			System.out.println();
		}
		
		
		ip.close();
	}
}

