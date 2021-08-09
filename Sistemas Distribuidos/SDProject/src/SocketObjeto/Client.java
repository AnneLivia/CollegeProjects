/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SocketObjeto;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author annel
 */
public class Client {
    public static void main(String[] args) {
     
        Socket clientSocket;
        try {
            System.out.println("Cliente iniciando na porta 54310");
            // ja se conecta ao localhost e porta 127.0.0.1 = ip do localhost
            clientSocket = new Socket("127.0.0.1", 54310);
            
             // mensagem saindo do cliente para o servidor
            ObjectOutputStream output = new ObjectOutputStream(clientSocket.getOutputStream());
            
            Aluno a = new Aluno();
            a.setIdade(10);
            a.setNome("Livia");
            
            output.writeObject(a);
            // output.flush();
            
            
            output.close();

            clientSocket.close();
           
        } catch (IOException ex) {
            
            System.out.println("Erro: " + ex.getMessage());
        
        }
           
           
            
        
    }
}
