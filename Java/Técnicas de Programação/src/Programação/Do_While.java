package Programação;

import java.util.Scanner;

public class Do_While {
    public static void main(String[] args)
    {
       Scanner input = new Scanner(System.in);
       int i;
     
       do{
           System.out.println("Digite um valor: ");
           i = input.nextInt();  
       }while(i < 20);
    }
}
