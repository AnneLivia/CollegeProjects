/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package adapter;

/**
 *
 * @author annel
 */
public class Principal {
    public static void main(String[] args) {
        CotacaoAdapter cotacao = new CotacaoAdapter();
        cotacao.setValor(1.00);
        
        System.out.println("R$ " + cotacao.getValor());
        System.out.println("$ " + cotacao.getValorDolar());
    }
}
