package aula4;

import java.util.Locale;
import java.util.Scanner;

public class exemplo4 {
	public static void main(String[] args) {
		Scanner ip = new Scanner(System.in);
		int n, v, sum = 0;
		n = ip.nextInt();
		for(int i = 0; i < n; i++) {
			v = ip.nextInt();
			sum+=v;
		}
		System.out.println(sum);
		        	    
	}
}
