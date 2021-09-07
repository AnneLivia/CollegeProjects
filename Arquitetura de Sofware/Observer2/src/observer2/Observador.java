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
public interface Observador {
    // precisar ter o metodo referente a receber a notificao
    void receberNotificacao(String mensagem);
}
