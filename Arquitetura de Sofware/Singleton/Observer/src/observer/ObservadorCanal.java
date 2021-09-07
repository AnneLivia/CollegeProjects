/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer;

/**
 *
 * @author annel
 */
public interface ObservadorCanal {
    // a intenção do Observer é quando um objeto muda de estado, todos os seus dependentes sao notificados
    // o objeto observado possui varios dependentes (o observado possui metodos para gerenciar seus dependentes)
    // metodo para adicionar interessados (dependentes), retirar e notificar.
    // exemplo, quando eu estou listada em algumas novidades de email. o subscrive e unsubscrive dos email.
    
    // tenho que ter metodo no dependente para receber a notificacao
    // usar quando precisa notificar varios objetos sobre a mudança de estado de um objeto especifico.
    /*
        Intenção: definir uma dependência um-para-muitos entre objetos, de maneira que quando 
        um objeto muda de estado todos os seus dependentes são notificados e atualizados automaticamente.

    */
    public void update(String nomeCanal, String titulo);
    public void inscreveCanal(ObjetoObservado ch);
}
