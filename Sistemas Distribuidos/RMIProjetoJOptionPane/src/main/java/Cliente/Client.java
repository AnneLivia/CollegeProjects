/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Cliente;

import RMI.RemoteInterface;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import javax.swing.JOptionPane;

/**
 *
 * @author annel
 */
public class Client {
    public static void main(String[] args) {
        try {
            String pick = JOptionPane.showInputDialog("Bota o valor: pedra papel ou tesoura");
            Registry registro = LocateRegistry.getRegistry("127.0.0.1", 1099);
            RemoteInterface s = (RemoteInterface) registro.lookup("srp"); //srp de scissors, rock and paper
            
            JOptionPane.showMessageDialog(null, "Você enviou " + pick + " e recebeu do servidor " + s.escolha(pick));
        } catch(Exception ex) {
            ex.printStackTrace();
        }
    }
}
