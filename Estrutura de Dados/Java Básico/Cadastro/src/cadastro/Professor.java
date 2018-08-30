/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cadastro;

/**
 *
 * @author annel
 */

import javax.swing.JOptionPane;

public class Professor {
    private String nome, disciplina;
    
    public void inserirNome() {
        nome = JOptionPane.showInputDialog("Digite o nome do professor");
    }
    
    public void inserirDisciplina() {
        disciplina = JOptionPane.showInputDialog("Dgite o nome da disciplina");
    }
    
    public void mostrarProfessor() {
        JOptionPane.showMessageDialog(null, "Nome: " + this.nome + "\nDisciplina: " + this.disciplina);
    }
    
}
