/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer2;

/**
 *
 * @author annel
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // observer
        Subject nota = new Subject();
        Subject matricula = new Subject();
        
        ObservadorCurioso livia = new ObservadorCurioso();
        
        nota.registrar(livia);
        matricula.registrar(livia);
        
        //  ao chamar diretamente o metodo notificar, eu estou indiretamente chamando o objeto livia
        nota.notificar("As notas sairam");
        matricula.notificar("Os periodos de matriculas estão abertos");
        
        matricula.remover(livia);
        
        nota.notificar("As notas sairam de novo");
        matricula.notificar("Os periodos de matriculas estão fechados");
    }
    
}
