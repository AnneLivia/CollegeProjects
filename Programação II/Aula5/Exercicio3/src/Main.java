import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		
		int n = ip.nextInt();
		
		
		String[] nome = new String[n];
		int[] idade = new int[n];
		double[] altura = new double[n];
		double mediaAlt, somaAlt = 0.0, porc16;
		int qtdMenos16 = 0;
		
		for(int i = 0; i < n; i++) {
			nome[i] = ip.next();
			idade[i] = ip.nextInt();
			altura[i] = ip.nextDouble();
		}
		
		for(int i = 0; i < n; i++) {
			somaAlt += altura[i];
			if(idade[i] < 16) {
				qtdMenos16++;
			}
		}
		
		mediaAlt = somaAlt / n;
		porc16 = (double) (qtdMenos16 * 100) / n;
		System.out.printf("Altura média: %.2f%n", mediaAlt);
		System.out.printf("Pessoas com menos de 16 anos: %.2f%%%n", porc16);
		
		ip.close();
	}
}
