/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package facade;

import pc.CPU;
import pc.HD;
import pc.Memoria;
import pc.Perifericos;
import pc.SO;

/**
 *
 * @author annel
 */
public class ComputerFacade implements ComputerFacadeInterface {
    // a fachada vai servir para que eu possa acessar de forma simplificada as funcionalidades que eu necessito de algo
    // sem ter que me importar com a questao de dependencias, etc.
    // ou seja, a fachada vai mascarar as classes. escondo o acesso real para a classe.
    // torna mais simples.
    /*
        FACADE - FACHADA (não preciso refazer o que já tem pronto): crio uma fachada que une os 
        componentes necessários, as complexidades e fornece só o que eu quero. prover uma interface 
        única pra conjuntos de interfaces
    
        quem chama a fachada nao precisa saber quais classes, etc. o fachada implementa, coloca, etc.
    
    
        com a fachada eu posso colocar serviços novos sem nem mexer na classe impressora.
    */
    
    private Memoria memoria;
    private HD hd;
    private SO so;
    private CPU cpu;
    private Perifericos perifericos;
    
    // quando instanciar o computador facede, ele automaticamente vai instaciar todos os objetos no construtor
    
    public ComputerFacade() {
        this.memoria = new Memoria();
        this.hd = new HD();
        this.so = new SO();
        this.cpu = new CPU();
        this.perifericos = new Perifericos();
    }
    
    
    // monta o metodo que segue a montagem do computador
    @Override
    public void montarPC() {
        System.out.println("Montando uma nova maquina\n");
        hd.adicionarHD();
        
        memoria.adicionarMemoria();
        
        cpu.adicionarProcessador();
        
        perifericos.adicionarMonitor();
        perifericos.adicionarMouse();
        perifericos.adicionarTeclado();
        
        so.instalarSO();
        
        System.out.println("computador fabricado\n");
    }
    
    
    public void outroMetodoQualquerQueNaoEstaNaInterface() {
        System.out.println("Eita\n");
    }
}
