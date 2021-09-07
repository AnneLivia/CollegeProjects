/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package entidades;

import observer.menoridade.MenorIdadeObservador;

/**
 *
 * @author annel
 */
public class PoliciaFederal implements MenorIdadeObservador {

    @Override
    public void notificar(Usuario usuario) {
        System.out.println("Enviando para inspetores alerta!" + usuario);
    }
    
}
