/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.rpcproject;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.apache.xmlrpc.XmlRpcException;
import org.apache.xmlrpc.server.PropertyHandlerMapping;
import org.apache.xmlrpc.server.XmlRpcServer;
import org.apache.xmlrpc.webserver.WebServer;




/**
 *
 * @author annel
 */
public class Server {
    private Server() {
        // criando um webserver (para nao usar um socket), o socket está sendo utilizado internamente
        WebServer ws = new WebServer(8185);
        
        // chamar um metodo remoto (levantar a infraestrutura desse webserver)
        XmlRpcServer server = ws.getXmlRpcServer();
        
        // precisa manipular os metodos da rede, para fazer isso tem que usar o property handle mapping
        PropertyHandlerMapping phm = new PropertyHandlerMapping();
        
        try {
            phm.addHandler("calc", Calculadora.class);
            server.setHandlerMapping(phm); // a calculadora esta adicionada no servidor
            // levantar servidor para fncionar
            ws.start();
            System.out.println("Servidor está ok");
        } catch (XmlRpcException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
        
        
    }
    
    public static void main(String[] args) {
        new Server(); // para iniciar o server
    }
}
