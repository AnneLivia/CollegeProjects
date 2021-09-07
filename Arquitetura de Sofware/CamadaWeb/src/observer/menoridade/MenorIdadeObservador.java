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
public interface MenorIdadeObservador {
    public void notificar(Usuario usuario);
}
