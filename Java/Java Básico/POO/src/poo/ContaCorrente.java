/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poo;

/**
 *
 * @author annel
 */

import javax.swing.JOptionPane;

public class ContaCorrente {
    private double saldo;
    
    ContaCorrente() {
        this.saldo = 0.0;
    }
    
    ContaCorrente(double saldo) {
        this.saldo = saldo;
    } 
    
    public void depositar() {
        this.saldo = Double.parseDouble(JOptionPane.showInputDialog("Quanto deseja depositar na sua conta Corrente? "));
    }
    
    public void extrato() {
        JOptionPane.showMessageDialog(null, "Saldo: R$ " + this.saldo);
    }
   
}
