/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package socketthread;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author annel
 */
public class Cliente {
    public static void main(String[] args) {
        System.out.println("O cliente está conectado");
        try {
            // conecxão de host na porta do servidor
            Socket clientSocket = new Socket("127.0.0.1", 54310);
            // enviar mensagem para o servidor
            DataOutputStream output = new DataOutputStream(clientSocket.getOutputStream());
            output.writeUTF("Olá, essa é uma mensagem de teste.");
            
            // como o servidor retorna mensagem, então precisa receber essa mensagem
            DataInputStream input = new DataInputStream(clientSocket.getInputStream());
            String msg = input.readUTF();
            System.out.println("Mensagem recebida do servidor foi: " + msg);
            
            input.close();
            output.close();
            clientSocket.close();
            
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
