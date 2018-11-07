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
public class exemplo3 {
     public static void main(String[] args) {
        // TODO code application logic here
        Scanner ip = new Scanner(System.in);
        int x = ip.nextInt();
        int sum = 0;
        while(x != 0) {
            sum+=x;
            x = ip.nextInt();
        }
        
        System.out.println("Soma: "+ sum);
        
        ip.close();
    }
    
}
