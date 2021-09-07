/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package adapter;

import entidades.OutroUsuario;
import entidades.Usuario;
import java.time.LocalDate;
/**
 *
 * @author annel
 */
public class AdapterUsuario {
    // para permitir que o meu sistema que e diferente possa se comunicar com o outro sistema
    // minha fachada entende usuario e nao o outrousuario
    // metodo que 
    
    public Usuario getUsario(OutroUsuario outro) {
        
        Usuario usuario = new Usuario();
        
        usuario.setNome(outro.getNome());
        usuario.setEmail(outro.getEmail());
        
        LocalDate hoje = LocalDate.now();
        // isso é piper and filter (estilo arquitetura)) pega um resultado e joga para que joga para outro, etc.
        LocalDate nas = hoje.withYear(outro.getAno()).withDayOfMonth(outro.getDia()).withMonth(outro.getMes());
        
        usuario.setNascimento(nas);
        
        return usuario;
    }
}
