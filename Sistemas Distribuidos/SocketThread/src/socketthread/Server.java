/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package socketthread;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author annel
 */
public class Server {
    public static void main(String[] args) {
        System.out.println("Servidor iniciando na porta 54310");
        try {
            // primeiro tem que ter um socket (abri a porta)
            ServerSocket serverSocket = new ServerSocket(54310);
            // rodando de forma indefinida, a cada novo cliente, haverá o start da thread
            while(true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("O cliente " + clientSocket.getInetAddress() + " está conectado!");
                
                // passando o clientsocket para a thread
                ThreadSocket threadSocket = new ThreadSocket(clientSocket);
                
                threadSocket.start();
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
        
        
        
    }
            
}
