import java.util.Locale;
import java.util.Scanner;

public class Uri_1051 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		
		double cash;
		
		cash = ip.nextDouble();
		
		if(cash >= 0.0 && cash <= 2000.00) {
	        System.out.println("Isento");
	    } else if(cash >= 2000.01 && cash <= 3000.00) {
	        System.out.printf("R$ %.2f%n",(cash - 2000) * 0.08);
	    } else if (cash >= 3000.01 && cash <= 4500.00) {
	        double ex1;
	        System.out.printf("R$ %.2f%n",(((cash - 3000) * 0.18) + (1000 * 0.08)));
	    } else {
	    	System.out.printf("R$ %.2f%n",(((cash - 4500) * 0.28) + ((4500 - 3000) * 0.18) + ((3000 - 2000) * 0.08)));
	    }
	}

}
