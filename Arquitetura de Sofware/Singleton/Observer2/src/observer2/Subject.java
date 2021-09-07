/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer2;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author annel
 */
public class Subject {
    
    List<Observador> observadores = new ArrayList<>();
    
    // o objeto (assunto observado no observer)
    public void registrar(Observador obs) {
        observadores.add(obs);
    }
    
    public void remover(Observador obs) {
        observadores.remove(obs);
    }
    
    // quando houver alguma mundaça de estado do objeto observado, noticar os observadores registrados
    public void notificar(String mensagem) {
        for (Observador obs : observadores) {
            obs.receberNotificacao(mensagem);
        }
    }
}
