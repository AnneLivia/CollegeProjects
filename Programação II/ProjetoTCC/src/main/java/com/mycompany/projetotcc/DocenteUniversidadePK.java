/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.projetotcc;

import java.io.Serializable;
import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Embeddable;

/**
 *
 * @author annel
 */
@Embeddable
public class DocenteUniversidadePK implements Serializable {

    @Basic(optional = false)
    @Column(name = "universidade_cnpj")
    private String universidadeCnpj;
    @Basic(optional = false)
    @Column(name = "docente_cpf")
    private String docenteCpf;

    public DocenteUniversidadePK() {
    }

    public DocenteUniversidadePK(String universidadeCnpj, String docenteCpf) {
        this.universidadeCnpj = universidadeCnpj;
        this.docenteCpf = docenteCpf;
    }

    public String getUniversidadeCnpj() {
        return universidadeCnpj;
    }

    public void setUniversidadeCnpj(String universidadeCnpj) {
        this.universidadeCnpj = universidadeCnpj;
    }

    public String getDocenteCpf() {
        return docenteCpf;
    }

    public void setDocenteCpf(String docenteCpf) {
        this.docenteCpf = docenteCpf;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (universidadeCnpj != null ? universidadeCnpj.hashCode() : 0);
        hash += (docenteCpf != null ? docenteCpf.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof DocenteUniversidadePK)) {
            return false;
        }
        DocenteUniversidadePK other = (DocenteUniversidadePK) object;
        if ((this.universidadeCnpj == null && other.universidadeCnpj != null) || (this.universidadeCnpj != null && !this.universidadeCnpj.equals(other.universidadeCnpj))) {
            return false;
        }
        if ((this.docenteCpf == null && other.docenteCpf != null) || (this.docenteCpf != null && !this.docenteCpf.equals(other.docenteCpf))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.DocenteUniversidadePK[ universidadeCnpj=" + universidadeCnpj + ", docenteCpf=" + docenteCpf + " ]";
    }
    
}
