/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sdproject;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
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
            System.out.println("Cliente iniciando na porta 54320");
            // ja se conecta ao localhost e porta 127.0.0.1 = ip do localhost
            clientSocket = new Socket("127.0.0.1", 54320);
            
             // mensagem saindo do cliente para o servidor
            DataOutputStream output = new DataOutputStream(clientSocket.getOutputStream());
            
            output.writeUTF("Meu teste");
            
            // devo estar preparada para receber resposta do servidor
            DataInputStream input  = new DataInputStream(clientSocket.getInputStream());
            
            // readutf retorna dados ate no formato unicode
            String msg = input.readUTF();
            System.out.println("A mensagem nova é: " + msg);
            
            output.close();
            input.close();
            clientSocket.close();
           
        } catch (IOException ex) {
            
            System.out.println("Erro: " + ex.getMessage());
        
        }
           
           
            
        
    }
}
