import java.util.Locale;

public class Exercicio1 {
	public static void main(String args[]) {
		
		String product1 = "Computer";
		String product2 = "Office desk";
		
		int age = 30;
		int code = 5290;
		char gender = 'F';
		
		double price1 = 2100.0;
		double price2 = 650.50;
		double measure = 53.234567;
		
		System.out.println("Products: \n" + product1 + ", which price is $ " + price1 + "\n" +
		                   product2 + ", which price is $ " + price2 + "\n\n" +
				           "Record: " + age + " years old, code " + code + " and gender " + gender + "\n\n");
		System.out.printf("Measure with eight decimal places: %.8f%n" , measure);
		System.out.printf("Rounded (Three decimal places): %.3f%n",measure);
		Locale.setDefault(Locale.US);
		System.out.printf("US decimal point: %.3f%n",measure);

	}
}
