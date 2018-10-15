
package Programação;

import java.util.Scanner;

public class If_Else {
    
    public static void main(String[] args)
    {
        Scanner entrada = new Scanner(System.in); // Declarando objeto que irá captar valores do teclado
  
        System.out.println("Digite seu nome: ");
        String nome = entrada.nextLine();
        System.out.println("Digite sua idade: ");
        int idade = entrada.nextInt();
        
        if(idade >= 18)
        {
            System.out.println("Você é maior de idade");
        }
        else if(idade >= 60)
        {
            System.out.println("Você está na terceira idade");
        }else
        {
            System.out.println("Você é menor de idade");
        }
    }
      
}
