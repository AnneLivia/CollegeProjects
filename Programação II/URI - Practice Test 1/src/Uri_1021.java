import java.util.Locale;
import java.util.Scanner;

public class Uri_1021 {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		
		// Variables declaration
		float value;  
		int note100, note50, note20, note10, note5, note2; // Notas
		int coin1, coin50, coin25, coin10, coin5, coin01;  // Moedas
		
		value = ip.nextFloat(); 
		
		// Calculando Notas
		note100 = (int)(value / 100); 
		value-=(note100 * 100); // Decrementando o tanto que foi retirado
		note50 = (int)(value / 50);
		value-=(note50 * 50);
		note20 = (int)(value / 20);
		value-=(note20 * 20);
		note10 = (int)(value / 10);
		value-=(note10 * 10);
		note5 = (int)(value / 5);
		value-=(note5 * 5);
		note2 = (int)(value / 2);
		value-=(note2 * 2);
		
		value+=0.001; // evitar erro de precisão
	
		// Calculando moedas
		coin1 = (int)(value / 1); 
		value-=(coin1 * 1);
		coin50 = (int)(value / 0.50);
		value-=(coin50 * 0.50);
		coin25 = (int)(value / 0.25);
		value-=(coin25 * 0.25);
		coin10 = (int)(value / 0.10);
		value-=(coin10 * 0.10);
		coin5 = (int)(value / 0.05);
		value-=(coin5 * 0.05);
		coin01 = (int)(value / 0.01);
		value-=(coin01 * 0.01);
		
		System.out.println("NOTAS:\n" +
		                  note100 + " nota(s) de R$ 100.00\n" +
		                  note50 + " nota(s) de R$ 50.00\n" +
		                  note20 + " nota(s) de R$ 20.00\n" +
		                  note10 + " nota(s) de R$ 10.00\n" +
		                  note5 + " nota(s) de R$ 5.00\n" +
		                  note2 + " nota(s) de R$ 2.00");
		System.out.println("MOEDAS:\n" +
                			coin1 + " moeda(s) de R$ 1.00\n" +
                			coin50 + " moeda(s) de R$ 0.50\n" +
			                coin25 + " moeda(s) de R$ 0.25\n" +
			                coin10 + " moeda(s) de R$ 0.10\n" +
			                coin5 + " moeda(s) de R$ 0.05\n" +
			                coin01 + " moeda(s) de R$ 0.01");

	}
}
