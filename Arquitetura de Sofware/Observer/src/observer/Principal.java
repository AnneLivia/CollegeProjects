/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer;

/**
 *
 * @author annel
 */
public class Principal {
    public static void main(String[] args) {
        
        ObjetoObservado livia = new Canal("liviaChannel");
        
        ObservadorCanal s1 = new Inscrito("Livia");
        ObservadorCanal s2 = new Inscrito("Anne");
        ObservadorCanal s3 = new Inscrito("anLi");
        ObservadorCanal s4 = new Inscrito("Liva");
        
        livia.registrar(s1);
        livia.registrar(s3);
        livia.registrar(s4);
        
        s1.inscreveCanal(livia);
        s3.inscreveCanal(livia);
        s4.inscreveCanal(livia);
        
        livia.upload("How observer works");
        
        livia.unRegistrar(s3);
        
        System.out.println("\n\n");
        
        livia.upload("C++ x Java");
    }
}
