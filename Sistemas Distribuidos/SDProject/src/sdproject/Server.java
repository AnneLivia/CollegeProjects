/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sdproject;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author annel
 */
public class Server {
    // qual a porta do sistema?
    public static void main(String[] args) {
        try {
            System.out.println("Servidor iniciando na porta 54320");
            // primeiro tem que ter um socket (abri a porta)
            ServerSocket serverSocket = new ServerSocket(54320);
            // metodo para aceitar conexao
            Socket clientSocket = serverSocket.accept();
           
            System.out.println("Cliente " + clientSocket.getInetAddress() + " está conectado.");
            
            // armazena o dado recebido pela rede nesse input
            DataInputStream input  = new DataInputStream(clientSocket.getInputStream());
            
            // enviar uma mensagem de volta para o usuário
            // readutf retorna dados ate no formato unicode
            String msg = input.readUTF();
            
            String mesgProcessada = msg.toUpperCase();
            
            // mensagem sainda do servidor para o cliente
            DataOutputStream output = new DataOutputStream(clientSocket.getOutputStream());
            
            output.writeUTF(mesgProcessada);
            
            // fechar o fluxo de informacao
            input.close();
            output.close();
            clientSocket.close();
            serverSocket.close();
            
            
        } catch (IOException ex) {
            System.out.println("Erro: " + ex.getMessage());
        }
        
        
    }
}
