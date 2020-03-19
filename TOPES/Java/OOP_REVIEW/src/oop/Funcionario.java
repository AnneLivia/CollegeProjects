/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

import java.util.Date;

/**
 *
 * @author Aluno
 */
public class Funcionario extends Pessoa {
    private String setor;
    private String formacao;
    private String anoFormacao;   

    public Funcionario(String matricula, String nome, String sexo, int idade, String dataNas) {
        super(matricula, nome, sexo, idade, dataNas);
    }
    
    public String getSetor() {
        return setor;
    }

    public void setSetor(String setor) {
        this.setor = setor;
    }

    public String getFormacao() {
        return formacao;
    }

    public void setFormacao(String formacao) {
        this.formacao = formacao;
    }

    public String getAnoFormacao() {
        return anoFormacao;
    }

    public void setAnoFormacao(String anoFormacao) {
        this.anoFormacao = anoFormacao;
    }
    
    
}
