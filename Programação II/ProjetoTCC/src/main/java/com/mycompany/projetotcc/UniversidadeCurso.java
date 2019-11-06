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
@Table(name = "universidade_curso")
@NamedQueries({
    @NamedQuery(name = "UniversidadeCurso.findAll", query = "SELECT u FROM UniversidadeCurso u")})
public class UniversidadeCurso implements Serializable {

    private static final long serialVersionUID = 1L;
    @EmbeddedId
    protected UniversidadeCursoPK universidadeCursoPK;
    @Column(name = "nota_mec")
    private Integer notaMec;
    @JoinColumn(name = "curso_codigo", referencedColumnName = "codigo", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Curso curso;
    @JoinColumn(name = "universidade_cnpj", referencedColumnName = "cnpj", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Universidade universidade;

    public UniversidadeCurso() {
    }

    public UniversidadeCurso(UniversidadeCursoPK universidadeCursoPK) {
        this.universidadeCursoPK = universidadeCursoPK;
    }

    public UniversidadeCurso(String universidadeCnpj, int cursoCodigo) {
        this.universidadeCursoPK = new UniversidadeCursoPK(universidadeCnpj, cursoCodigo);
    }

    public UniversidadeCursoPK getUniversidadeCursoPK() {
        return universidadeCursoPK;
    }

    public void setUniversidadeCursoPK(UniversidadeCursoPK universidadeCursoPK) {
        this.universidadeCursoPK = universidadeCursoPK;
    }

    public Integer getNotaMec() {
        return notaMec;
    }

    public void setNotaMec(Integer notaMec) {
        this.notaMec = notaMec;
    }

    public Curso getCurso() {
        return curso;
    }

    public void setCurso(Curso curso) {
        this.curso = curso;
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
        hash += (universidadeCursoPK != null ? universidadeCursoPK.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof UniversidadeCurso)) {
            return false;
        }
        UniversidadeCurso other = (UniversidadeCurso) object;
        if ((this.universidadeCursoPK == null && other.universidadeCursoPK != null) || (this.universidadeCursoPK != null && !this.universidadeCursoPK.equals(other.universidadeCursoPK))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.UniversidadeCurso[ universidadeCursoPK=" + universidadeCursoPK + " ]";
    }
    
}
