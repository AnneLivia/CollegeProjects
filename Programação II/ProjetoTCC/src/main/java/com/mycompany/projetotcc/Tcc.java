/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.projetotcc;

import java.io.Serializable;
import java.util.Date;
import java.util.List;
import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.JoinTable;
import javax.persistence.ManyToMany;
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
@Table(name = "tcc")
@NamedQueries({
    @NamedQuery(name = "Tcc.findAll", query = "SELECT t FROM Tcc t")})
public class Tcc implements Serializable {

    private static final long serialVersionUID = 1L;
    @Id
    @Basic(optional = false)
    @Column(name = "codigo")
    private String codigo;
    @Column(name = "tema")
    private String tema;
    @Column(name = "data_apresentacao")
    @Temporal(TemporalType.DATE)
    private Date dataApresentacao;
    @Column(name = "arquivo")
    private String arquivo;
    // @Max(value=?)  @Min(value=?)//if you know range of your decimal fields consider using these annotations to enforce field validation
    @Column(name = "nota")
    private Float nota;
    @ManyToMany(mappedBy = "tccList")
    private List<Estudante> estudanteList;
    @JoinTable(name = "coorientador_tcc", joinColumns = {
        @JoinColumn(name = "codigo_tcc", referencedColumnName = "codigo")}, inverseJoinColumns = {
        @JoinColumn(name = "docente_cpf", referencedColumnName = "cpf")})
    @ManyToMany
    private List<Docente> docenteList;
    @JoinColumn(name = "orientador_cpf", referencedColumnName = "cpf")
    @ManyToOne
    private Docente orientadorCpf;
    @JoinColumn(name = "curso_codigo", referencedColumnName = "codigo")
    @ManyToOne
    private Curso cursoCodigo;
    @JoinColumn(name = "universidade_cnpj", referencedColumnName = "cnpj")
    @ManyToOne
    private Universidade universidadeCnpj;

    public Tcc() {
    }

    public Tcc(String codigo) {
        this.codigo = codigo;
    }

    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    public String getTema() {
        return tema;
    }

    public void setTema(String tema) {
        this.tema = tema;
    }

    public Date getDataApresentacao() {
        return dataApresentacao;
    }

    public void setDataApresentacao(Date dataApresentacao) {
        this.dataApresentacao = dataApresentacao;
    }

    public String getArquivo() {
        return arquivo;
    }

    public void setArquivo(String arquivo) {
        this.arquivo = arquivo;
    }

    public Float getNota() {
        return nota;
    }

    public void setNota(Float nota) {
        this.nota = nota;
    }

    public List<Estudante> getEstudanteList() {
        return estudanteList;
    }

    public void setEstudanteList(List<Estudante> estudanteList) {
        this.estudanteList = estudanteList;
    }

    public List<Docente> getDocenteList() {
        return docenteList;
    }

    public void setDocenteList(List<Docente> docenteList) {
        this.docenteList = docenteList;
    }

    public Docente getOrientadorCpf() {
        return orientadorCpf;
    }

    public void setOrientadorCpf(Docente orientadorCpf) {
        this.orientadorCpf = orientadorCpf;
    }

    public Curso getCursoCodigo() {
        return cursoCodigo;
    }

    public void setCursoCodigo(Curso cursoCodigo) {
        this.cursoCodigo = cursoCodigo;
    }

    public Universidade getUniversidadeCnpj() {
        return universidadeCnpj;
    }

    public void setUniversidadeCnpj(Universidade universidadeCnpj) {
        this.universidadeCnpj = universidadeCnpj;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (codigo != null ? codigo.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof Tcc)) {
            return false;
        }
        Tcc other = (Tcc) object;
        if ((this.codigo == null && other.codigo != null) || (this.codigo != null && !this.codigo.equals(other.codigo))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.Tcc[ codigo=" + codigo + " ]";
    }
    
}
