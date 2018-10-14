/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package helloworldjoptionpane;
import javax.swing.JOptionPane;
/**
 *
 * @author annel
 */
public class HelloWorldJOptionPane {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String name;
        name = JOptionPane.showInputDialog("What is your name? ");
        JOptionPane.showMessageDialog(null, "Hello " + name + ", Congrats!");
    }
    
}
