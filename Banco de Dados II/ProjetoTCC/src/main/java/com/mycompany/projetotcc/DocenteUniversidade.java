/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.projetotcc;

import java.io.Serializable;
import javax.persistence.Column;
import javax.persistence.EmbeddedId;
import javax.persistence.Entity;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;
import javax.persistence.Table;

/**
 *
 * @author annel
 */
@Entity
@Table(name = "docente_universidade")
@NamedQueries({
    @NamedQuery(name = "DocenteUniversidade.findAll", query = "SELECT d FROM DocenteUniversidade d")})
public class DocenteUniversidade implements Serializable {

    private static final long serialVersionUID = 1L;
    @EmbeddedId
    protected DocenteUniversidadePK docenteUniversidadePK;
    @Column(name = "tipo_vinculo")
    private String tipoVinculo;
    @JoinColumn(name = "docente_cpf", referencedColumnName = "cpf", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Docente docente;
    @JoinColumn(name = "universidade_cnpj", referencedColumnName = "cnpj", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Universidade universidade;

    public DocenteUniversidade() {
    }

    public DocenteUniversidade(DocenteUniversidadePK docenteUniversidadePK) {
        this.docenteUniversidadePK = docenteUniversidadePK;
    }

    public DocenteUniversidade(String universidadeCnpj, String docenteCpf) {
        this.docenteUniversidadePK = new DocenteUniversidadePK(universidadeCnpj, docenteCpf);
    }

    public DocenteUniversidadePK getDocenteUniversidadePK() {
        return docenteUniversidadePK;
    }

    public void setDocenteUniversidadePK(DocenteUniversidadePK docenteUniversidadePK) {
        this.docenteUniversidadePK = docenteUniversidadePK;
    }

    public String getTipoVinculo() {
        return tipoVinculo;
    }

    public void setTipoVinculo(String tipoVinculo) {
        this.tipoVinculo = tipoVinculo;
    }

    public Docente getDocente() {
        return docente;
    }

    public void setDocente(Docente docente) {
        this.docente = docente;
    }

    public Universidade getUniversidade() {
        return universidade;
    }

    public void setUniversidade(Universidade universidade) {
        this.universidade = universidade;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (docenteUniversidadePK != null ? docenteUniversidadePK.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof DocenteUniversidade)) {
            return false;
        }
        DocenteUniversidade other = (DocenteUniversidade) object;
        if ((this.docenteUniversidadePK == null && other.docenteUniversidadePK != null) || (this.docenteUniversidadePK != null && !this.docenteUniversidadePK.equals(other.docenteUniversidadePK))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.DocenteUniversidade[ docenteUniversidadePK=" + docenteUniversidadePK + " ]";
    }
    
}
