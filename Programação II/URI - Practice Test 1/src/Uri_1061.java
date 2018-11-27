import java.util.Locale;
import java.util.Scanner;

public class Uri_1061 {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner ip = new Scanner(System.in);
		
		// Variable declarations 
		int day1, day2, hour1, hour2, second1, second2, minute1, minute2, 
		answerDay, answerHour, answerSecond, answerMinute;
		String text; // Utilizada somente para ler a string "Dia"
		char symbol; // Utilizada somente para ler o simbolo ":"
		
		// Dia inicial
		text = ip.next(); // Lendo string "Dia"
		day1 = ip.nextInt(); // Lendo dia inicial
		hour1 = ip.nextInt(); // Lendo hora inicial;
		symbol = ip.next().charAt(0); // lendo simbolo ':'
		minute1 = ip.nextInt(); // Lendo minuto inicial
		symbol = ip.next().charAt(0); // lendo simbolo ':'
		second1 = ip.nextInt(); // Lendo segundo inicial
		
		// Dia Final
		text = ip.next(); // Lendo string "Dia"
		day2 = ip.nextInt(); // Lendo dia final
		hour2 = ip.nextInt(); // Lendo hora final;
		symbol = ip.next().charAt(0); // lendo simbolo ':'
		minute2 = ip.nextInt(); // Lendo minuto final
		symbol = ip.next().charAt(0); // lendo simbolo ':'
		second2 = ip.nextInt(); // Lendo segundo final
	
		// Calculando tempo 

		answerDay = day2 - day1;
		answerHour = hour2 - hour1;
		answerMinute = minute2 - minute1;
		answerSecond = second2 - second1;
		
		if(answerHour < 0) {
			answerHour+=24;
			answerDay--;
		}
		
		if(answerMinute < 0) {
			answerMinute+=60;
			answerHour--;
		}
		
		if(answerSecond < 0) {
			answerSecond+=60;
			answerMinute--;
		}
		
		
		System.out.println(answerDay + " dia(s)\n" + 
		                   answerHour + " hora(s)\n" +
				           answerMinute + " minuto(s)\n" +
		                   answerSecond + " segundo(s)");
		
	}

}
