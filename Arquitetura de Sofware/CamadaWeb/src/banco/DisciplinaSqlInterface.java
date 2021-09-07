/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

import entidades.Disciplina;
import java.util.List;

/**
 *
 * @author annel
 */
public interface DisciplinaSqlInterface {
    public void salvar(Disciplina disciplina);
    
    public void deletar(Disciplina disciplina);
    // como é uma busca aberta, pode retornar mais de uma pessoa com o mesmo nome
    public List<Disciplina> buscar(String nome);
   
    public List<Disciplina> listarTodos();
}
