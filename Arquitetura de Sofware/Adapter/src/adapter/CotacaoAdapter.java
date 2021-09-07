/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package adapter;

/**
 *
 * @author annel
 */
public class CotacaoAdapter extends Cotacao {

    /**
     * @param args the command line arguments
     * @return 
     */
    
    // adapter vai permitir que dois objetos incompativeis se comuniquem 
    // exemplo classico tomada de três pinos. usamos o adaptador na tomada...
    // exemplo, digamos que o conector tomada tem tres pinos, mas a tomada na parede tem dois pinos
    // pluga a tomada de três pinos no adaptador e o adaptor que é de 3 pinos pode ser conectado na tomada
    // target - alvo; adaptador extend esse alvo, esse targe. a gente sobrescreve os metodos dele e faz as adaptaçoes necessarias
    // a gente sobrescreve os dados de acordo com a necessidade que a gente tiver
    // posso fazer o que quiser
    
    @Override
    public double getValor() {
        return (super.getValor() * 3.00);
    }
    
    @Override
    public void setValor(double valor) {
        // seta o valor em dolar
        super.setValor(valor / 3.00);
    }
    
    public double getValorDolar() {
        return super.getValor();
    }
    
}
