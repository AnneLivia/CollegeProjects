/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula4;

import java.util.Scanner;

/**
 *
 * @author annel
 */
public class Exemplo2 {
     public static void main(String[] args) {
        // TODO code application logic here
        Scanner ip = new Scanner(System.in);
        int x = ip.nextInt();
        
        String dia = "";
        switch(x) {
            case 1:
                dia = "Domingo";
                break;
            case 2:
                dia = "Segunda";
                break;
            case 3: 
                dia = "Terca";
                break;
            case 4:
                dia = "Quarta";
                break;
            case 5:
                dia = "Quinta";
                break;
            case 6:
                dia = "Sexta";
                break;
            case 7:
                dia = "Sabado";
                break;
            default:
                dia = "Dia inválido";
        }
        
        System.out.println("Dia da Semana: " + dia);
    }
    
}
