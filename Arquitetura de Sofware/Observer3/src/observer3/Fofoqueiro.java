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
// interface subject
public interface Fofoqueiro {
    // registrar para receber fofoca
    void fazerAmizade(Vizinho v);
    // desfazer
    void intrigar(Vizinho v);
    // notificar
    void fofocar(String fofoca);
}
