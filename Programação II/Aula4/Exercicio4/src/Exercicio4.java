import java.util.Scanner;

public class Exercicio4 {
public static void main(String[] args) {
		
		Scanner ip = new Scanner(System.in);
		int n1, n2, aux, sum = 0;
		n1 = ip.nextInt();
		n2 = ip.nextInt();
		
		if(n1 > n2) {
			aux = n2;
			n2 = n1;
			n1 = aux;
		}
		
		
		for(int i = n1 + 1; i < n2; i++) {
			if(i % 2 != 0) {
				sum+=i;
			}
		}
		
		System.out.println(sum);
	}
}
