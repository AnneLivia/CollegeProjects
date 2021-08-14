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
class ThreadSocket extends Thread {
    private Socket socket;
    private Boolean running = true;
    
    public ThreadSocket(Socket socket) {
        this.socket = socket;
    }
    // é preciso do metodo run para poder rodar a thread
    // a complexidade de input e output tem que ficar na thread
    public void run() {
        System.out.println(Thread.currentThread().getName() + " está ativa");
        try {
            DataInputStream input = new DataInputStream(socket.getInputStream());
            String msg = input.readUTF();
            String msgProcessada = msg.toUpperCase();
            
            // enviar tambem mensagem
            DataOutputStream output = new DataOutputStream(socket.getOutputStream());
            output.writeUTF(msgProcessada);
            
            input.close();
            output.close();
            socket.close();
            
        } catch (IOException ex) {
            ex.printStackTrace();
        }
        
    }
    
    public void Stop() {
        this.running = false;
    }
}
