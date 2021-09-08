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
public interface Vizinho {
    // o vizinho precisa saber cochixar para saber a fofoca do vizinho
    // equivalente ao verbo notificar ( o objeto vai variar) se existir a necessidade de modificar, separar o que varia
    void cochichar(String fococa);
}
