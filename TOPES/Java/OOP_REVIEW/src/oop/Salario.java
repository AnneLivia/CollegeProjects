/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

import java.util.Date;

/**
 *
 * @author Aluna Anne Livia
 */
public class Salario {
    private String mes;
    private Double valor;
    private String banco;
    private String conta, agencia;
    private String dataPagamento;

    public Salario(String mes, Double valor, String banco, String conta, String agencia, String dataPagamento) {
        this.mes = mes;
        this.valor = valor;
        this.banco = banco;
        this.conta = conta;
        this.agencia = agencia;
        this.dataPagamento = dataPagamento;
    }

    public String getMes() {
        return mes;
    }

    public void setMes(String mes) {
        this.mes = mes;
    }

    public Double getValor() {
        return valor;
    }

    public void setValor(Double valor) {
        this.valor = valor;
    }

    public String getBanco() {
        return banco;
    }

    public void setBanco(String banco) {
        this.banco = banco;
    }

    public String getConta() {
        return conta;
    }

    public void setConta(String conta) {
        this.conta = conta;
    }

    public String getAgencia() {
        return agencia;
    }

    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }

    public String getDataPagamento() {
        return dataPagamento;
    }

    public void setDataPagamento(String dataPagamento) {
        this.dataPagamento = dataPagamento;
    }
    
    
}
