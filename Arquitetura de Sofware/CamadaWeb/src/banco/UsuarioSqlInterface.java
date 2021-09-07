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
public interface UsuarioSqlInterface {
    public void salvar(Usuario usuario);
    
    public void deletar(Usuario usuario);
    
    // como é uma busca aberta, pode retornar mais de uma pessoa com o mesmo nome
    public List<Usuario> buscar(String nome);
    
    public List<Usuario> listarTodos();
}
