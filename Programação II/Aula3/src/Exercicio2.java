import java.util.Locale;
import java.util.Scanner;

public class Exercicio2 {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		double a, b, c, delta;
		
		a = ip.nextDouble();
		b = ip.nextDouble();
		c = ip.nextDouble();
		
		delta = Math.pow(b,2) - (4 * a * c);
		
		if(a == 0 || delta < 0) {
			System.out.println("Impossivel calcular");
		} else {
			double raiz1, raiz2;
			raiz1 = (-b + Math.sqrt(delta)) / (2 * a);
			raiz2 = (-b - Math.sqrt(delta)) / (2 * a);
			
			System.out.printf("R1 = %.5f%n", raiz1);
			System.out.printf("R2 = %.5f%n", raiz2);
		}
	}

}
