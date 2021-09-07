
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
public class TesteCamadas {
    public static void main(String[] args) {
        
        FachadaUsuarioInterface fachada = new FachadaUsuario();
        
        LocalDate ld = LocalDate.now().minusYears(24); // 24 anos atras
        // nao vai salvar porque nao e menor de idade
        fachada.salvarMenorDeIdade("livia", ld);
        
        LocalDate ld2 = LocalDate.now().minusYears(4); // 4 anos atras
        fachada.salvarMenorDeIdade("Anne", ld2);
        
        ld2 = LocalDate.now().minusYears(17); // 17 anos atras
        fachada.salvarMenorDeIdade("lll", ld2);
        
    }
}
