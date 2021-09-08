/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer3;

import java.util.Random;

/**
 *
 * @author annel
 */
public class Rua implements Runnable {
    private Fofoqueiro fulano;
    
    private String[] fofoca = {"madrisivaldo foi visto...",
                               "Casiaclidiacone estava com...",
                               "Eriminasteurides contou que...",
                               "Beltrano..."};
    
    Thread th;
    private Random momento;
    
    public Rua () {
        fulano = new Fulano();
        new Beltrano(fulano);
        new Cicrano(fulano);
        
        momento = new Random();
        
        th = new Thread(this);
        th.start();
        
    }

    @Override
    public void run() {
       for (int i = 0; i < 10; i++) {
           try {
               int m = momento.nextInt(4); 
               // * 1000 que é por milissegundos
               Thread.sleep(m * 1000);
               ( (Fulano) fulano).setFofoca(fofoca[m]);
           } catch (Exception ex) {
               ex.printStackTrace();
           }
       }
    }
}
