/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.projetotcc;

import java.io.Serializable;
import java.util.Date;
import javax.persistence.Column;
import javax.persistence.EmbeddedId;
import javax.persistence.Entity;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;
import javax.persistence.Table;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

/**
 *
 * @author annel
 */
@Entity
@Table(name = "estudante_curso_universidade")
@NamedQueries({
    @NamedQuery(name = "EstudanteCursoUniversidade.findAll", query = "SELECT e FROM EstudanteCursoUniversidade e")})
public class EstudanteCursoUniversidade implements Serializable {

    private static final long serialVersionUID = 1L;
    @EmbeddedId
    protected EstudanteCursoUniversidadePK estudanteCursoUniversidadePK;
    @Column(name = "data_inicio")
    @Temporal(TemporalType.DATE)
    private Date dataInicio;
    @Column(name = "data_fim")
    @Temporal(TemporalType.DATE)
    private Date dataFim;
    @JoinColumn(name = "estudante_cpf", referencedColumnName = "cpf", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Estudante estudante;
    @JoinColumn(name = "curso_codigo", referencedColumnName = "codigo", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Curso curso;
    @JoinColumn(name = "universidade_cnpj", referencedColumnName = "cnpj", insertable = false, updatable = false)
    @ManyToOne(optional = false)
    private Universidade universidade;

    public EstudanteCursoUniversidade() {
    }

    public EstudanteCursoUniversidade(EstudanteCursoUniversidadePK estudanteCursoUniversidadePK) {
        this.estudanteCursoUniversidadePK = estudanteCursoUniversidadePK;
    }

    public EstudanteCursoUniversidade(String estudanteCpf, int cursoCodigo, String universidadeCnpj) {
        this.estudanteCursoUniversidadePK = new EstudanteCursoUniversidadePK(estudanteCpf, cursoCodigo, universidadeCnpj);
    }

    public EstudanteCursoUniversidadePK getEstudanteCursoUniversidadePK() {
        return estudanteCursoUniversidadePK;
    }

    public void setEstudanteCursoUniversidadePK(EstudanteCursoUniversidadePK estudanteCursoUniversidadePK) {
        this.estudanteCursoUniversidadePK = estudanteCursoUniversidadePK;
    }

    public Date getDataInicio() {
        return dataInicio;
    }

    public void setDataInicio(Date dataInicio) {
        this.dataInicio = dataInicio;
    }

    public Date getDataFim() {
        return dataFim;
    }

    public void setDataFim(Date dataFim) {
        this.dataFim = dataFim;
    }

    public Estudante getEstudante() {
        return estudante;
    }

    public void setEstudante(Estudante estudante) {
        this.estudante = estudante;
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
        hash += (estudanteCursoUniversidadePK != null ? estudanteCursoUniversidadePK.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof EstudanteCursoUniversidade)) {
            return false;
        }
        EstudanteCursoUniversidade other = (EstudanteCursoUniversidade) object;
        if ((this.estudanteCursoUniversidadePK == null && other.estudanteCursoUniversidadePK != null) || (this.estudanteCursoUniversidadePK != null && !this.estudanteCursoUniversidadePK.equals(other.estudanteCursoUniversidadePK))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.EstudanteCursoUniversidade[ estudanteCursoUniversidadePK=" + estudanteCursoUniversidadePK + " ]";
    }
    
}
