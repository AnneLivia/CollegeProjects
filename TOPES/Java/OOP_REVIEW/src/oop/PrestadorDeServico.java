/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

import java.util.Date;

/**
 *
 * @author Anne Livia
 */
public class PrestadorDeServico extends Pessoa {
    private String empresa;
    private String dataInicio;
    private String dataFim;
    private String servico;

    public PrestadorDeServico(String matricula, String nome, String sexo, int idade, String dataNas) {
        super(matricula, nome, sexo, idade, dataNas);
    }

    public String getEmpresa() {
        return empresa;
    }

    public void setEmpresa(String empresa) {
        this.empresa = empresa;
    }

    public String getDataInicio() {
        return dataInicio;
    }

    public void setDataInicio(String dataInicio) {
        this.dataInicio = dataInicio;
    }

    public String getDataFim() {
        return dataFim;
    }

    public void setDataFim(String dataFim) {
        this.dataFim = dataFim;
    }

    public String getServico() {
        return servico;
    }

    public void setServico(String servico) {
        this.servico = servico;
    }
    
    
}
