/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Servidor;

import RMI.RemoteInterface;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

/**
 *
 * @author annel
 */
public class ServerImplements extends UnicastRemoteObject implements RemoteInterface {
    
    public ServerImplements() throws RemoteException {
        super();
    }
    
    @Override
    public String escolha(String opcao) throws RemoteException {
        return "pedra";
    }
    
}
