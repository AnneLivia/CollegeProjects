package Programação;

import java.util.Scanner;


public class Switch {
  public static void main(String[] args)
  {
      Scanner input = new Scanner(System.in);
      int num;
      System.out.println("Digite um número de 1 a 3: ");
      num = input.nextInt();
      switch(num)
      {
          case 1 : System.out.println("Você digitou 1");
                   break;
          case 2 : System.out.println("Você digitou 2");
                   break;
          case 3 : System.out.println("Você digitou 3");
                   break;
          default : System.out.println("Erro");
      }
  }
}
