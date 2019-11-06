/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.projetotcc;

import java.io.Serializable;
import java.util.List;
import javax.persistence.Basic;
import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;
import javax.persistence.OneToMany;
import javax.persistence.Table;

/**
 *
 * @author annel
 */
@Entity
@Table(name = "universidade")
@NamedQueries({
    @NamedQuery(name = "Universidade.findAll", query = "SELECT u FROM Universidade u")})
public class Universidade implements Serializable {

    private static final long serialVersionUID = 1L;
    @Id
    @Basic(optional = false)
    @Column(name = "cnpj")
    private String cnpj;
    @Column(name = "nome")
    private String nome;
    @OneToMany(cascade = CascadeType.ALL, mappedBy = "universidade")
    private List<UniversidadeCurso> universidadeCursoList;
    @OneToMany(cascade = CascadeType.ALL, mappedBy = "universidade")
    private List<DocenteUniversidade> docenteUniversidadeList;
    @OneToMany(mappedBy = "universidadeCnpj")
    private List<Tcc> tccList;
    @JoinColumn(name = "endereco_id", referencedColumnName = "id")
    @ManyToOne
    private Endereco enderecoId;
    @OneToMany(cascade = CascadeType.ALL, mappedBy = "universidade")
    private List<EstudanteCursoUniversidade> estudanteCursoUniversidadeList;

    public Universidade() {
    }

    public Universidade(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<UniversidadeCurso> getUniversidadeCursoList() {
        return universidadeCursoList;
    }

    public void setUniversidadeCursoList(List<UniversidadeCurso> universidadeCursoList) {
        this.universidadeCursoList = universidadeCursoList;
    }

    public List<DocenteUniversidade> getDocenteUniversidadeList() {
        return docenteUniversidadeList;
    }

    public void setDocenteUniversidadeList(List<DocenteUniversidade> docenteUniversidadeList) {
        this.docenteUniversidadeList = docenteUniversidadeList;
    }

    public List<Tcc> getTccList() {
        return tccList;
    }

    public void setTccList(List<Tcc> tccList) {
        this.tccList = tccList;
    }

    public Endereco getEnderecoId() {
        return enderecoId;
    }

    public void setEnderecoId(Endereco enderecoId) {
        this.enderecoId = enderecoId;
    }

    public List<EstudanteCursoUniversidade> getEstudanteCursoUniversidadeList() {
        return estudanteCursoUniversidadeList;
    }

    public void setEstudanteCursoUniversidadeList(List<EstudanteCursoUniversidade> estudanteCursoUniversidadeList) {
        this.estudanteCursoUniversidadeList = estudanteCursoUniversidadeList;
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (cnpj != null ? cnpj.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof Universidade)) {
            return false;
        }
        Universidade other = (Universidade) object;
        if ((this.cnpj == null && other.cnpj != null) || (this.cnpj != null && !this.cnpj.equals(other.cnpj))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.Universidade[ cnpj=" + cnpj + " ]";
    }
    
}
