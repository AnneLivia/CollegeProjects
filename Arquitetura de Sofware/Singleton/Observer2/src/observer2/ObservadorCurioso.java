/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer2;

/**
 *
 * @author annel
 */
public class ObservadorCurioso implements Observador {
    private String nome;
    
    @Override
    public void receberNotificacao(String mensagem) {
        System.out.println("Curioso: " + mensagem);
    }
}
