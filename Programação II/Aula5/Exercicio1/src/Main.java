import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in); 
		
		int n = ip.nextInt();
		
		int vet[] = new int[n];
		
		for(int i = 0; i < n; i++) {
			vet[i] = ip.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			if(vet[i] < 0)
				System.out.println(vet[i]);
		}
		
		ip.close();
	}
}
