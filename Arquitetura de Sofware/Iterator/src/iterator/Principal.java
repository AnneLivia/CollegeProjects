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
public class Principal {
    public static void main(String[] args) {
        // for each é um iterator
        Pessoa[] p = new Pessoa[4];
        p[0] = new Pessoa("Livia", 24);
        p[1] = new Pessoa("Anne", 24);
        p[2] = new Pessoa("Sos", 56);
        p[3] = new Pessoa("Sa", 7);
        
        IteratorInterface iterator = new PessoaIterator(p);
        
        while(iterator.hasNext()) {
            Pessoa pp = (Pessoa)iterator.next();
            System.out.println("Pessoa: " + pp.getNome() + ", idade " + pp.getIdade());
        }
    }
}
