/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fachadas;

import entidades.Usuario;
import java.time.LocalDate;

/**
 *
 * @author annel
 */
public interface FachadaUsuarioInterface {
    public boolean salvarMenorDeIdade(String nome, LocalDate nascimento);
    public void salvarUsuario(Usuario usuario);
}
