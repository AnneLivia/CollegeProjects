package singleton;

public class Main {

    public static void main (String[] args) {
        // Singleton s1 = new Singleton(); nao pode
        Singleton s1 = Singleton.getInstance();
        s1.setNome("Livia");
        Singleton s2 = Singleton.getInstance();
        s2.setNome("Anne");
        System.out.println(s1.getNome());
        
        
        ImpressoraSingleton impr1 = ImpressoraSingleton.getInstace();
        ImpressoraSingleton impr2 = ImpressoraSingleton.getInstace();
        ImpressoraSingleton impr3 = ImpressoraSingleton.getInstace();
        
        impr1.enviarParaImpressao("livia");
        impr2.enviarParaImpressao("anne");
        impr3.enviarParaImpressao("sddsaads");
        
        impr2.imprimir();
    }
}