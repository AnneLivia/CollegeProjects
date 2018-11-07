import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		 Scanner ip = new Scanner(System.in);
		 int x, y;
		       
		while(true) {
            x = ip.nextInt();
            y = ip.nextInt();
            
            if(x > y) {
            	System.out.println("Decrescente");
            } else if (x < y) {
            	System.out.println("Crescente");
            } else {
            	break;
            }
        }
		        	    
	}

}


