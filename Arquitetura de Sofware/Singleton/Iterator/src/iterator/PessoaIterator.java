/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iterator;

/**
 *
 * @author annel
 */
public class PessoaIterator implements IteratorInterface{

    /**
     * @param args the command line arguments
     */
    
    /*
        O proposito do iterator e fornecr uma maneira de acessar os elementos de um objeto seqauencialemten
        sem expor sua representacao (e.g: fila, pilha, lista, etc.)
        normalmente as aplicacoes possuem varios objetos e queremos setar dados em cada elemento.
        padrão iterator deixa a iteracao mais clean, mais escondida. nao sei se estou lidando com array, hashlist, tree, etc.
        
    */
    
    private Pessoa[] pessoas; // vai armazenar a lista de itens
    private int posicao = 0;
    
    public PessoaIterator(Pessoa[] pessoas) {
        this.pessoas = pessoas;
    }
    
    @Override
    public boolean hasNext() {
        // verificar se ainda existem itens
        if (posicao >= pessoas.length || pessoas[posicao] == null) {
            return false;
        }
        return true;
    }

    @Override
    public Object next() {
        Pessoa pessoa = pessoas[posicao++];
        return pessoa;
    }
}
