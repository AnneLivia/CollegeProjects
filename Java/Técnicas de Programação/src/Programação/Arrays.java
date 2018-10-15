
package Programação;
/**
 *
 * @author annel
 */
import java.util.Scanner;

public class Arrays {
 
    public static void main(String[] args)
    {
        Scanner entrada = new Scanner(System.in);
        
        int[] vetor; // Declarando uma vaviável do tipo array
        vetor = new int[10]; // Criando uma instancia que vai dar o tamanho 10 
        for(int i = 0; i < 10; i++)
        {
            System.out.printf("%5d%5d\n", i,vetor[i]);
        }
        
        int[] pessoas;
        System.out.println("Digite a quantidade de pessoas: ");
        int quant = entrada.nextInt();
        pessoas = new int[quant];
        
        for(int i = 0; i < quant; i++)
        {
            System.out.println("Digite seu número individual: ");
            pessoas[i] = entrada.nextInt();
        }
        
        System.out.printf("%5s%7s\n","Número individual","Posição");
        for(int i = 0; i < pessoas.length; i++)
        {
            System.out.printf("%5d%9d\n",pessoas[i],i);
        }
    }
}
