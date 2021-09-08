/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer3;

import java.util.ArrayList;
import java.util.List;


/**
 *
 * @author annel
 */
class Fulano implements Fofoqueiro {
    
    // para lembrar de quem vai receber a resposta, é preciso da lista de pessoas registradas
    
    List<Vizinho> vizinhos;
    private String fofoca;
    
    public Fulano() {
        vizinhos = new ArrayList<>();
    }
    
    // assim que mudar o estado, avisar quem esta na lista
    public void setFofoca(String fofoca) {
        this.fofoca = fofoca;
        this.fofocar(fofoca);
    }
    
    @Override
    public void fazerAmizade(Vizinho v) {
        vizinhos.add(v);
    }

    @Override
    public void intrigar(Vizinho v) {
        vizinhos.remove(v);
    }

    @Override
    public void fofocar(String fofoca) {
        for (Vizinho vv : vizinhos) {
            vv.cochichar(fofoca);
        }
    }
}
