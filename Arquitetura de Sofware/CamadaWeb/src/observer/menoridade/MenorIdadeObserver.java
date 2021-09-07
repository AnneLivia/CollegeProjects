/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer.menoridade;

import entidades.Usuario;

/**
 *
 * @author annel
 */
public interface MenorIdadeObserver {
    // se algo com menor de idade acontecer deve avisar os menor de idades
    public void registrar(MenorIdadeObservador observador);
    public void retirar(MenorIdadeObservador observador);
    public void avisar(Usuario usuario);
}
