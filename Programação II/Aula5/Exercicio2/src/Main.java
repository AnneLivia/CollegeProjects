import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		double soma = 0, media;
		int n = ip.nextInt();
		
		double vet[] = new double[n];
		
		for(int i = 0; i < n; i++) {
			vet[i] = ip.nextDouble();
		}
		
		for(int i = 0; i < n; i++) {
			System.out.printf("%.1f ", vet[i]);
			soma+=vet[i];
		}
		
		System.out.println();
		
		media = soma / n;
		
		System.out.println(soma);
		System.out.println(media);
		
		ip.close();
	}
}
