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

public class Aluno {
    private String nome, curso;
    private int mat;
    
    public void inserirNome() {
        nome = JOptionPane.showInputDialog("Digite o nome do aluno");
    }
    
    public void inserirCurso() {
        curso = JOptionPane.showInputDialog("Digite o curso do " + this.nome);
    }
    
    public void inserirMatricula() {
        mat = Integer.parseInt(JOptionPane.showInputDialog("Digite a matricula do " + this.nome));
    }
    
    public void mostrarAluno() {
        JOptionPane.showMessageDialog(null, "Nome: " + nome + "\nCurso: " + curso + "\nMatrícula: " + mat);
    }
}
