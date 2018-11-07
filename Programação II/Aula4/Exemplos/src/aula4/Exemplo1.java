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
public class Exemplo1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner ip = new Scanner(System.in);
        int x = ip.nextInt();
        
        String dia = "";
        if(x == 1) {
            dia = "Domingo";
        } else if (x == 2) {
            dia = "Segunda";
        } else if (x == 3) {
            dia = "Terca";
        } else if (x == 4) {
            dia = "Quarta";
        } else if (x == 5) {
            dia = "Quinta";
        } else if (x == 6) {
            dia = "Sexta";
        } else if (x == 7) {
            dia = "Sabado";
        } else {
            dia = "Dia inválido";
        }
        
        System.out.println("Dia da Semana: " + dia);
    }
    
}
