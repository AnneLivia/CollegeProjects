import java.util.Locale;
import java.util.Scanner;

public class Exemplo2 {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int tam = ip.nextInt();
		
		String vet[] = new String[tam];
		
		for(int i = 0; i < tam; i++) {
			vet[i] = ip.next();
		}
		
		System.out.println("Nomes Lidos: ");
		for(String nome : vet) {
			System.out.println(nome);
		}
		
		ip.close();
	}
}
