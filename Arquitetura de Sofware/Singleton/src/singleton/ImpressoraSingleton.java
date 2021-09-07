package singleton;


import java.util.List;
import java.util.ArrayList;


public class ImpressoraSingleton {

    // static é variavel de classe e não de instancia (logo é compartilhada por todos os objetos dessa classe)
    private static ImpressoraSingleton singleton = null;

    private List<String> palavrasParaImprimir = new ArrayList<>();

    // evita instancia
    private ImpressoraSingleton() {

    }

    // metodo para obter a instancia
    public static ImpressoraSingleton getInstace() {
        if (singleton == null) 
            singleton = new ImpressoraSingleton();
        return singleton;
    }

    public void enviarParaImpressao(String palavra) {
        palavrasParaImprimir.add(palavra);
    }

    public void imprimir() {
        for (String var : palavrasParaImprimir) {
            System.out.println(var);
        }
        
    }
}