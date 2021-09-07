/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

import entidades.Usuario;
import java.util.List;

/**
 *
 * @author annel
 */

// classe coesa porque so faz aquilo para a qual foi construida. tem apenas uma responsabilidade
public class UsuarioSql implements UsuarioSqlInterface {
    // nenhum outro codigo em outro pacote (fachada, etc.) pode ter sql, so aqui nessa classe pasta banco
    @Override
    public void salvar(Usuario usuario) {
        System.out.println("Salvar: " + usuario);
    }
    
    @Override
    public void deletar(Usuario usuario) {
        System.out.println("Deletar " + usuario);
    }
    
    // como é uma busca aberta, pode retornar mais de uma pessoa com o mesmo nome
    @Override
    public List<Usuario> buscar(String nome) {
        System.out.println("Retornando usuarios com nome " + nome);
        return null;
    }
    
    @Override
    public List<Usuario> listarTodos() {
        System.out.println("retornando todos os usuario do bd");
        return null;
    }
}
