/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer3;

/**
 *
 * @author annel
 */
public class Beltrano implements Vizinho {
    private Fofoqueiro fulano;
    public Beltrano(Fofoqueiro fulano) {
        this.fulano = fulano;
        fulano.fazerAmizade(this);
    }

    @Override
    public void cochichar(String fofoca) {
        // se a fofoca for sobre ele, ele nao vai querer receber a fofoca
        if (fofoca.equals("Beltrano...")) 
            fulano.intrigar(this);
        else
            System.out.println("Beltrano: mairapai, quer dizer que " + fofoca);
    }
}
