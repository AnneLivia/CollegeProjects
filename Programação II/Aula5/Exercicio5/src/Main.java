import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int linha, coluna;
		linha = ip.nextInt();
		coluna = ip.nextInt();
		
		double[][] matriz = new double[linha][coluna];
		double[] vetor = new double[linha];
		
		for(int i = 0; i < linha; i++) {
			for(int j = 0; j < coluna; j++) {
				matriz[i][j] = ip.nextDouble();
			}
		}
		
		for(int i = 0; i < linha; i++) {
			vetor[i] = 0;
			for(int j = 0; j < coluna; j++) {
				vetor[i]+=matriz[i][j];
			}
		}
		
		for(int i = 0; i < linha; i++) {
			System.out.println(vetor[i]);
		}
		
		ip.close();
	}

}
