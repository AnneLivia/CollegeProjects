import java.util.Locale;
import java.util.Scanner;

public class Exercicio2 {
 	
	public static void main(String args[]) {
		// If this is not set to US, the user must digit a number with , instead of .
		Locale.setDefault(Locale.US); // To doesn't have problem while reading number with .
		Scanner input = new Scanner(System.in);
		
		double largura, comprimento, preco;
		
		largura = input.nextDouble();
		comprimento = input.nextDouble();
		preco = input.nextDouble();
		
		System.out.printf("AREA = %.2f%n", largura * comprimento);
		System.out.printf("PRECO = %.2f%n", largura * comprimento * preco);
	}
}
