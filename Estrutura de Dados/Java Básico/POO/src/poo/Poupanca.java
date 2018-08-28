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

public class Poupanca {
    private double saldo; 
    
    Poupanca() {
        this.saldo = 0.0;
    }
    
    Poupanca(double saldo) {
        this.saldo = saldo;
    } 
    
    public void depositar() {
        
        this.saldo = Double.parseDouble(JOptionPane.showInputDialog("Quanto deseja depositar na sua conta Poupança?"));
        
        // Rendimento: 6% ao ano
        
        this.saldo = this.saldo * 1.06; 
    }
    
    public void extrato() {
        JOptionPane.showMessageDialog(null, "Saldo: R$ " + this.saldo);
    } 
}
