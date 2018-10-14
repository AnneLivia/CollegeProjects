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
public class Banco {
    String numeroConta, agencia;
    
    Banco() {
        
    }
    
    public void setNumeroConta(String numeroConta){
        this.numeroConta = numeroConta;
    }
    
    public String getNumeroConta() {
        return this.numeroConta;
    }
    
    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }
    
    public String getAgencia(){ 
        return this.agencia;
    }
}
