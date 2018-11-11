import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner ip = new Scanner(System.in);
		int n = ip.nextInt();
		for(int i = 1; i <= 10; i++) {
			System.out.println(i + " x " + n + " = " + (i * n));
		}
	}

}
