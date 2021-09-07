/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author annel
 */
public class Canal implements ObjetoObservado {
    private String nome;
    
    List<ObservadorCanal> inscritos = new ArrayList<>();
    private String titulo;
    
    public Canal(String nome) {
        this.nome = nome;
    }
    
    // precisamos do registro,  unregistro e update
    
    @Override
    public void registrar(ObservadorCanal s) {
        inscritos.add(s);
    }
    @Override
    public void unRegistrar(ObservadorCanal s) {
        inscritos.remove(s);
    }
    @Override
    public void notificar() {
        // para cada inscrito, notifica
        for (ObservadorCanal insc : inscritos) {
            insc.update(this.nome, this.titulo);
        }
    }
    @Override
    public void upload(String titulo) {
        this.titulo = titulo;
        this.notificar();
    }
}
