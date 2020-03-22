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
public class UniversidadeCursoPK implements Serializable {

    @Basic(optional = false)
    @Column(name = "universidade_cnpj")
    private String universidadeCnpj;
    @Basic(optional = false)
    @Column(name = "curso_codigo")
    private int cursoCodigo;

    public UniversidadeCursoPK() {
    }

    public UniversidadeCursoPK(String universidadeCnpj, int cursoCodigo) {
        this.universidadeCnpj = universidadeCnpj;
        this.cursoCodigo = cursoCodigo;
    }

    public String getUniversidadeCnpj() {
        return universidadeCnpj;
    }

    public void setUniversidadeCnpj(String universidadeCnpj) {
        this.universidadeCnpj = universidadeCnpj;
    }

    public int getCursoCodigo() {
        return cursoCodigo;
    }

    public void setCursoCodigo(int cursoCodigo) {
        this.cursoCodigo = cursoCodigo;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (universidadeCnpj != null ? universidadeCnpj.hashCode() : 0);
        hash += (int) cursoCodigo;
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof UniversidadeCursoPK)) {
            return false;
        }
        UniversidadeCursoPK other = (UniversidadeCursoPK) object;
        if ((this.universidadeCnpj == null && other.universidadeCnpj != null) || (this.universidadeCnpj != null && !this.universidadeCnpj.equals(other.universidadeCnpj))) {
            return false;
        }
        if (this.cursoCodigo != other.cursoCodigo) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.UniversidadeCursoPK[ universidadeCnpj=" + universidadeCnpj + ", cursoCodigo=" + cursoCodigo + " ]";
    }
    
}
