
import facade.ComputerFacade;
import facade.ComputerFacadeInterface;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author annel
 */
public class mainCerta {
    public static void main(String[] args) {
        // agora eu so acesso a fachada que vai interagir com os subsistemas
        ComputerFacadeInterface facade = new ComputerFacade();
        
        facade.montarPC();
        // facade.outroMetodoQualquerQueNaoEstaNaInterface(); nao da para chamar porque nao esta na interface
    }
}
