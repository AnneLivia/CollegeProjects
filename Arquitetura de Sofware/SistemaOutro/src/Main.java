
import adapter.AdapterUsuario;
import entidades.OutroUsuario;
import entidades.Usuario;
import fachadas.FachadaUsuario;
import fachadas.FachadaUsuarioInterface;
import java.time.LocalDate;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author annel
 */
public class Main {
    
    public static void main(String[] args) {
        FachadaUsuarioInterface fachada = new FachadaUsuario();
        AdapterUsuario adapter = new AdapterUsuario();
        
        OutroUsuario outro = new OutroUsuario();
        outro.setNome("Livia");
        outro.setAno(1997);
        outro.setMes(1);
        outro.setEmail("an@gmail.com");
        outro.setDia(16);
   
        fachada.salvarUsuario(adapter.getUsario(outro));
    }
}
