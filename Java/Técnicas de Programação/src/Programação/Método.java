package programação;

import java.util.Scanner;

public class Método{
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        final int TAM = 5;
        int[] x = new int[TAM];
        System.out.println("Digite os valores do vetor: ");
        for(int i = 0; i < TAM; i++)
        {
            System.out.print(i+1 + " = ");
            x[i] = input.nextInt();
        }
        x = inverter(x,TAM);
        for(int i = 0; i < TAM; i++)
        {
            System.out.println(x[i]);
        }
        
    } 
    @SuppressWarnings("empty-statement")
    public static int[] inverter(int[] v, int t)
    {
        int[] vetor;
        vetor = new int[t];
        int i, j;
        
        for(i = 0, j = t - 1; i < t; i++, j--)
        {
             vetor[j] = v[i];
        }
        return vetor;
    }
}
