import java.util.Locale;
import java.util.Scanner;

public class Exercicio1 {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		double nota1, nota2, notaFinal;
		nota1 = ip.nextDouble();
		nota2 = ip.nextDouble();
		
		notaFinal = nota1 + nota2;
		
		System.out.printf("NOTA FINAL = %.1f%n", notaFinal);
		
		if(notaFinal < 60) {
			System.out.println("REPROVADO");
		}
	}
}
