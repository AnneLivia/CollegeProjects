/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package observer;

/**
 *
 * @author annel
 */
public class Inscrito implements ObservadorCanal {

    private String name;
    private ObjetoObservado canal;

    
    public Inscrito(String name) {
        this.name = name;
        this.canal = canal;
    }
    
   
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public ObjetoObservado getCanal() {
        return canal;
    }
    
    // sempre que houver algum alteracao no canal, deve chamar esse metodo para todos os inscritos
    public void update(String nomeCanal, String titulo) {
        System.out.println("Hey " + this.name + " tem um novo vídeo no canal " + nomeCanal + " cujo "
                + "titulo é " + titulo);
    }
    
    public void inscreveCanal(ObjetoObservado ch) {
        canal = ch;
    }
}
