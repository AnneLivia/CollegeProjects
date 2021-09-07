/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fachadas;

import banco.UsuarioSql;
import banco.UsuarioSqlInterface;
import entidades.Usuario;
import java.time.LocalDate;
import negocio.NegocioUsuario;
import negocio.NegocioUsuarioInterface;

/**
 *
 * @author annel
 */
public class FachadaUsuario implements FachadaUsuarioInterface {
    // fachada e a mais externa
    
    private UsuarioSqlInterface usuariosql;
    private NegocioUsuarioInterface negocioUsuario;
    
    public FachadaUsuario() {
        usuariosql = new UsuarioSql();
        negocioUsuario = new NegocioUsuario();
    }
    
    @Override
    public boolean salvarMenorDeIdade(String nome, LocalDate nascimento) {
        // salvar dados no banco
        
        // so preciso de pessoas menor de idade, se a pessoa for maior de idade, entao retorna false. 
        // regras de negocios depende do requisitos, etc.
        if (negocioUsuario.validaMaiorDeIdade(nascimento))
            return false;
        
        Usuario usuario = new Usuario();
        usuario.setNome(nome);
        
        
        usuario.setNascimento(nascimento);
        
        usuariosql.salvar(usuario);
       
        // salvou 
        return false;
        
        
    }
    
    @Override
    public void salvarUsuario(Usuario usuario) {
        usuariosql.salvar(usuario);
    }
}
