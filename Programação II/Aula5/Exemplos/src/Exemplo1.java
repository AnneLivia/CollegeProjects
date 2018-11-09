import java.util.Locale;
import java.util.Scanner;

public class Exemplo1 {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int tam = ip.nextInt();
		
		double vet[] = new double[tam];
		
		for(int i = 0; i < tam; i++) {
			vet[i] = ip.nextDouble();
		}
		
		for(int i = 0; i < tam; i++) {
			System.out.printf("%.1f%n",vet[i]);
		}
		
		ip.close();
	}
}
