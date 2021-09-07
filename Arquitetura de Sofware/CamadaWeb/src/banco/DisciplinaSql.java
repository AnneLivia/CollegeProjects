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
public class DisciplinaSql implements DisciplinaSqlInterface {
    // nenhum outro codigo em outro pacote (fachada, etc.) pode ter sql, so aqui nessa classe pasta banco
    @Override
    public void salvar(Disciplina disciplina) {
        System.out.println("Salvou a disciplina no bd");
    }
    
    @Override
    public void deletar(Disciplina disciplina) {
        System.out.println("Deletar disciplina do bd");
    }
    
    // como é uma busca aberta, pode retornar mais de uma pessoa com o mesmo nome
    @Override
    public List<Disciplina> buscar(String nome) {
        System.out.println("Retornando disciplinas com nome " + nome);
        return null;
    }
    
    @Override
    public List<Disciplina> listarTodos() {
        System.out.println("retornando todos as disciplinas do bd");
        return null;
    }
}
