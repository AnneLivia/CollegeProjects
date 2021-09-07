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
public interface ObjetoObservado {
    // no subject sempre tem que ter o subscribe, unsubcrive e notificar a mudanca de estado
    public void registrar(ObservadorCanal s);
    
    public void unRegistrar(ObservadorCanal s);
    
    public void notificar();
    
    public void upload(String titulo);
   
}
