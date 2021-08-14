/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.rpcproject;

import java.net.MalformedURLException;
import java.net.URL;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.apache.xmlrpc.XmlRpcException;
import org.apache.xmlrpc.client.XmlRpcClient;
import org.apache.xmlrpc.client.XmlRpcClientConfigImpl;

/**
 *
 * @author annel
 */
public class Client {
    private static final String SERVER_URL = "http://localhost:8185";
    private XmlRpcClient client;
    // construir construir para logar 
    public Client() {
        // parte de configuracao do cliente
        XmlRpcClientConfigImpl confClient = new XmlRpcClientConfigImpl();
        try {
            confClient.setServerURL(new URL(SERVER_URL));
            // levantar o client
            client = new XmlRpcClient();
            // e configurado
            client.setConfig(confClient);
            
            
        } catch (MalformedURLException ex) {
            ex.printStackTrace();
        }
    }
    
    // é preciso implmentar os metodos (fazer chamada remota de metodo)
    public int soma(int x, int y) {
        // dessa forma ja converte para inteiro
        Object [] parametros = new Object[]{new Integer(x), new Integer(y)};
        Integer result = 0;
        try {
            // executa no servidor, converte para interior e mostra para a gente
            result = (Integer) client.execute("calc.adicao", parametros);
        } catch (XmlRpcException ex) {
            ex.printStackTrace();
        }
        return result;
    }
    
    // é preciso implmentar os metodos (fazer chamada remota de metodo)
    public int subtracao(int x, int y) {
        // dessa forma ja converte para inteiro
        Object [] parametros = new Object[]{new Integer(x), new Integer(y)};
        Integer result = 0;
        try {
            // executa no servidor, converte para interior e mostra para a gente
            result = (Integer) client.execute("calc.subtracao", parametros);
        } catch (XmlRpcException ex) {
            ex.printStackTrace();
        }
        return result;
    }
    
    // é preciso implmentar os metodos (fazer chamada remota de metodo)
    public int multiplicacao(int x, int y) {
        // dessa forma ja converte para inteiro
        Object [] parametros = new Object[]{new Integer(x), new Integer(y)};
        Integer result = 0;
        try {
            // executa no servidor, converte para interior e mostra para a gente
            result = (Integer) client.execute("calc.multiplicacao", parametros);
        } catch (XmlRpcException ex) {
            ex.printStackTrace();
        }
        return result;
    }
    
    // é preciso implmentar os metodos (fazer chamada remota de metodo)
    public int divisao(int x, int y) {
        // dessa forma ja converte para inteiro
        Object [] parametros = new Object[]{new Integer(x), new Integer(y)};
        Integer result = 0;
        try {
            // executa no servidor, converte para interior e mostra para a gente
            result = (Integer) client.execute("calc.divisao", parametros);
        } catch (XmlRpcException ex) {
            ex.printStackTrace();
        }
        return result;
    }
    
    
    public static void main(String[] args) {
        Client client = new Client();
        
        System.out.println("Soma 10 + 10: " + client.soma(10, 10));
        System.out.println("Mult 10 * 10: " + client.multiplicacao(10, 10));
        System.out.println("Sub 10 - 10: " + client.subtracao(10, 10));
        System.out.println("Div 10 / 10: " + client.divisao(10, 10));
           
    }
            
}
