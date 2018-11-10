import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner ip = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		 
	    int age, qtd = 0;
		double mean = 0.0;
		       
		age = ip.nextInt();
		while(age >= 0) {
           mean+=age;
           qtd++;
           age = ip.nextInt();
       }
	
	   if(qtd == 0)
		   System.out.println("Impossível Calcular");
	   else {
		   mean/=qtd;
		   System.out.printf("%.2f%n",mean);
	   }
		        	    
	}
}
