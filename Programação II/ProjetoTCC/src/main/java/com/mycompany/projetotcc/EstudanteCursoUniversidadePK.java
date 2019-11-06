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
public class EstudanteCursoUniversidadePK implements Serializable {

    @Basic(optional = false)
    @Column(name = "estudante_cpf")
    private String estudanteCpf;
    @Basic(optional = false)
    @Column(name = "curso_codigo")
    private int cursoCodigo;
    @Basic(optional = false)
    @Column(name = "universidade_cnpj")
    private String universidadeCnpj;

    public EstudanteCursoUniversidadePK() {
    }

    public EstudanteCursoUniversidadePK(String estudanteCpf, int cursoCodigo, String universidadeCnpj) {
        this.estudanteCpf = estudanteCpf;
        this.cursoCodigo = cursoCodigo;
        this.universidadeCnpj = universidadeCnpj;
    }

    public String getEstudanteCpf() {
        return estudanteCpf;
    }

    public void setEstudanteCpf(String estudanteCpf) {
        this.estudanteCpf = estudanteCpf;
    }

    public int getCursoCodigo() {
        return cursoCodigo;
    }

    public void setCursoCodigo(int cursoCodigo) {
        this.cursoCodigo = cursoCodigo;
    }

    public String getUniversidadeCnpj() {
        return universidadeCnpj;
    }

    public void setUniversidadeCnpj(String universidadeCnpj) {
        this.universidadeCnpj = universidadeCnpj;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (estudanteCpf != null ? estudanteCpf.hashCode() : 0);
        hash += (int) cursoCodigo;
        hash += (universidadeCnpj != null ? universidadeCnpj.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof EstudanteCursoUniversidadePK)) {
            return false;
        }
        EstudanteCursoUniversidadePK other = (EstudanteCursoUniversidadePK) object;
        if ((this.estudanteCpf == null && other.estudanteCpf != null) || (this.estudanteCpf != null && !this.estudanteCpf.equals(other.estudanteCpf))) {
            return false;
        }
        if (this.cursoCodigo != other.cursoCodigo) {
            return false;
        }
        if ((this.universidadeCnpj == null && other.universidadeCnpj != null) || (this.universidadeCnpj != null && !this.universidadeCnpj.equals(other.universidadeCnpj))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.EstudanteCursoUniversidadePK[ estudanteCpf=" + estudanteCpf + ", cursoCodigo=" + cursoCodigo + ", universidadeCnpj=" + universidadeCnpj + " ]";
    }
    
}
