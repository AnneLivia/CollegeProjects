
import pc.CPU;
import pc.HD;
import pc.Memoria;
import pc.Perifericos;
import pc.SO;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author annel
 */
public class MainErrada {
    public static void main(String[] args) {
        
        /* Porque isso está errado? porque eu estou acessando várias classes, fazendo a ligação com vários subssitemas
            imagina vários clientes fazendo toda essa repetição. e se houver mudança em alguma classe? com por exemplo SO
            se tiver muitos clientes, vai ter que alterar tudo em todos os clientes.
            Para resolver isso a gente cria uma fachada, uma frente que vai ser responsavel por lidar com todos esses subsistemas
            e os clietes agora não precisarao mais chamar todos esses subsistemas diretamente, mas sim a fachada
            e nao interessa como a fachada esta implementado, o importante e que ela me de a informação que eu quero
        */
        HD hd = new HD();
        hd.adicionarHD();
        
        Memoria memoria = new Memoria();
        memoria.adicionarMemoria();
        
        CPU cpu = new CPU();
        cpu.adicionarProcessador();
        
        Perifericos perifericos = new Perifericos();
        perifericos.adicionarMonitor();
        perifericos.adicionarMouse();
        perifericos.adicionarTeclado();
        
        SO so = new SO();
        so.instalarSO();
    }
    
}
