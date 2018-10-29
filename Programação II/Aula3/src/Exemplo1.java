import java.util.Scanner;

public class Exemplo1 {
	public static void main(String args[]) {
		Scanner ip = new Scanner(System.in);
		System.out.print("Digite somente a hora F(24h): ");
		
		int hora = ip.nextInt();
		
		if(hora >= 0 && hora < 12) {
			System.out.println("Bom Dia!");
		} else if (hora >= 12 && hora < 18) {
			System.out.println("Boa  tarde!");
		} else {
			System.out.println("Boa noite!");
		}
		
		ip.close();
		
	}
}
