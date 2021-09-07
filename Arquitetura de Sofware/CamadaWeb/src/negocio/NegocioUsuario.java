/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package negocio;

import java.time.LocalDate;

/**
 *
 * @author annel
 */
public class NegocioUsuario implements NegocioUsuarioInterface {
    // verificar se nome esta completo, cpf esta correto, etc. se precisar verificar algo, o codigo vem em negocio
    @Override
    public boolean validaMaiorDeIdade(LocalDate nascimento) {
        LocalDate hoje = LocalDate.now();
        int anohoje = hoje.getYear();
        int anousuario = nascimento.getYear();
        // so pode salvar se for menor de idade
        // isso e regra de negocio
        if ((anohoje - anousuario) >= 18 ) {
            // nao pode salvar porque nao cumpriu alguma regra de negocio
            // para tornar o codiog mais coeso ainda, pode colocar a regra de negocio no pacote negocio
            return true;
        }
        
        return false;
    }
}
