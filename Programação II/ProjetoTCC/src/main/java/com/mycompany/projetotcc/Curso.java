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
@Table(name = "curso")
@NamedQueries({
    @NamedQuery(name = "Curso.findAll", query = "SELECT c FROM Curso c")})
public class Curso implements Serializable {

    private static final long serialVersionUID = 1L;
    @Id
    @Basic(optional = false)
    @Column(name = "codigo")
    private Integer codigo;
    @Column(name = "nome")
    private String nome;
    @OneToMany(cascade = CascadeType.ALL, mappedBy = "curso")
    private List<UniversidadeCurso> universidadeCursoList;
    @OneToMany(mappedBy = "cursoCodigo")
    private List<Tcc> tccList;
    @JoinColumn(name = "area_id", referencedColumnName = "id")
    @ManyToOne
    private Area areaId;
    @OneToMany(cascade = CascadeType.ALL, mappedBy = "curso")
    private List<EstudanteCursoUniversidade> estudanteCursoUniversidadeList;

    public Curso() {
    }

    public Curso(Integer codigo) {
        this.codigo = codigo;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
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

    public List<Tcc> getTccList() {
        return tccList;
    }

    public void setTccList(List<Tcc> tccList) {
        this.tccList = tccList;
    }

    public Area getAreaId() {
        return areaId;
    }

    public void setAreaId(Area areaId) {
        this.areaId = areaId;
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
        hash += (codigo != null ? codigo.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof Curso)) {
            return false;
        }
        Curso other = (Curso) object;
        if ((this.codigo == null && other.codigo != null) || (this.codigo != null && !this.codigo.equals(other.codigo))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "com.mycompany.projetotcc.Curso[ codigo=" + codigo + " ]";
    }
    
}
