/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer;

import entidades.Usuario;
import java.util.ArrayList;
import java.util.List;
import observer.menoridade.MenorIdadeObservador;
import observer.menoridade.MenorIdadeObserver;

/**
 *
 * @author annel
 */
public class MenorIdadeObserverImplementacao implements MenorIdadeObserver {
    List<MenorIdadeObservador> observadores = new ArrayList<>();
    @Override
    public void registrar(MenorIdadeObservador observador) {
        observadores.add(observador);
    }

    @Override
    public void retirar(MenorIdadeObservador observador) {
        observadores.remove(observador);
    }
    
    @Override
    public void avisar(Usuario usuario) {
        for (MenorIdadeObservador obs : observadores) {
            obs.notificar(usuario);
        }
    }
}
