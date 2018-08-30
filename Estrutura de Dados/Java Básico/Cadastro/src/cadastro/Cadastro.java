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

public class Cadastro {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int op;
        do {
            op = Integer.parseInt(JOptionPane.showInputDialog("1 - Cadastrar professor\n2 - Cadastrar aluno\n3 - Sair"));
            switch(op) {
                case 1:
                        Professor pr = new Professor();
                        pr.inserirNome();
                        pr.inserirDisciplina();
                        pr.mostrarProfessor();
                        break;
                case 2: 
                        Aluno al = new Aluno();
                        al.inserirNome();
                        al.inserirCurso();
                        al.inserirMatricula();
                        al.mostrarAluno();
                        break;
                case 3: JOptionPane.showMessageDialog(null, "Cadastro Finalizado");
                        break;
                default: JOptionPane.showMessageDialog(null, "Opção invalida");
            }
        } while(op != 3);
    }
    
}
