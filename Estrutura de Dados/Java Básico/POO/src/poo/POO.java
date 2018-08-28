/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poo;

import javax.swing.JOptionPane;

/**
 *
 * @author annel
 */

public class POO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente();
        ContaCorrente c2 = new ContaCorrente();
        
        Poupanca p = new Poupanca();
        Poupanca p2 = new Poupanca();
        
        cc.depositar();
        cc.extrato();
        
        p.depositar();
        p.extrato();
        
        c2.depositar();
        c2.extrato();
        
        p2.depositar();
        p2.extrato();
        
    }
    
}
