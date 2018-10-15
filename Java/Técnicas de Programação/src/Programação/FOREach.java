/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Programação;

/**
 *
 * @author annel
 */
public class FOREach {
    public static void main(String[] args)
    {
        int soma = 0;
        int[] vetor = {1,5,2,3,4,1,2,2};
       
        for(int item : vetor)
        {
            soma +=item;
        }
        
        System.out.println("A soma é: "+soma);
    }
}
