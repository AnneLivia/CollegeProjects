/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package media;
import javax.swing.JOptionPane;
/**
 *
 * @author annel
 */
public class Media {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        double n1, n2, result;
        String s1, s2;
        
        n1 = Double.parseDouble(JOptionPane.showInputDialog("Type grade 1: "));
        n2 = Double.parseDouble(JOptionPane.showInputDialog("Type grade 2: "));
        
        result = (n1 + n2) / 2;
        
        if(result >= 5)
            JOptionPane.showMessageDialog(null, "Mean: " + result + ", You've passed");
        else
            JOptionPane.showMessageDialog(null, "Mean: " + result + ", You've Flunked");
    }
    
}
