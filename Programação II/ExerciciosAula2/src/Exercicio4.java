import java.util.Locale;
import java.util.Scanner;

public class Exercicio4 {
	public static void main(String args[]) {
		Scanner ip = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		String name1, name2;
		int age1, age2;
		double meanAge;
		
		name1 = ip.next();
		age1 = ip.nextInt();
		
		name2 = ip.next();
		age2 = ip.nextInt();
		
		meanAge = (age1 + age2) / 2.0;
		
		System.out.printf("A idade média de %s e %s é de %.1f%n",name1,name2,meanAge);
		
		ip.close();
	}
}
