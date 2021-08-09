/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package SocketObjeto;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
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
    public static void main(String[] args) throws ClassNotFoundException {
        try {
            System.out.println("Servidor iniciando na porta 54310");
            // primeiro tem que ter um socket (abri a porta)
            ServerSocket serverSocket = new ServerSocket(54310);
            // metodo para aceitar conexao
            Socket clientSocket = serverSocket.accept();
           
            System.out.println("Cliente " + clientSocket.getInetAddress() + " está conectado.");
            
            
            // armazena o dado recebido pela rede nesse input
            ObjectInputStream  input  = new ObjectInputStream (clientSocket.getInputStream());
            
            
            Aluno aluno = (Aluno) input.readObject();
            
            System.out.println(aluno.getNome() + ", " + aluno.getIdade());
            
            input.close();
            clientSocket.close();
            serverSocket.close();
            
            
        } catch (IOException ex) {
            System.out.println("Erro: " + ex.getMessage());
        }
        
        
    }
}
