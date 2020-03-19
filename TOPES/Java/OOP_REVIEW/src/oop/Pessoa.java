
package oop;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;


public class Pessoa {
    private String matricula;
    private String nome;
    private String sexo;
    private int idade;
    private String dataNascimento;
    private List<Salario> salario;
    
    public Pessoa(String matricula, String nome, String sexo, int idade, String dataNas) {
        this.matricula = matricula;
        this.nome = nome;
        this.sexo = sexo;
        this.idade = idade;
        this.dataNascimento = dataNas;
        
        salario = new ArrayList<Salario>();
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(String dataNascimento) {
        this.dataNascimento = dataNascimento;
    }
    
    public void setSalario(Salario s) {
        salario.add(s);
    }
    
    public List<Salario> getSalario() {
        return salario;
    }
    
    static public double getMaximumSalarioPrestadores(List<Pessoa> p) {
        double max = 0;
        for (Pessoa pp : p) {
            if (pp instanceof PrestadorDeServico) {
                for (Salario ss : pp.getSalario()) {
                    if (ss.getValor() > max) {
                        max = ss.getValor();
                    }
                }
            }
        }
        return max;
    }
    
    static public double getMaximumSalarioFuncionario(List<Pessoa> p) {
        double max = 0;
        for (Pessoa pp : p) {
            if (pp instanceof Funcionario) {
                for (Salario ss : pp.getSalario()) {
                    if (ss.getValor() > max) {
                        max = ss.getValor();
                    }
                }
            }
        }
        return max;
    }
    
    static public double getMaximumSalario(List<Pessoa> p) {
        double max = 0;
        for (Pessoa pp : p) {
           for (Salario ss : pp.getSalario()) {
                if (ss.getValor() > max) {
                    max = ss.getValor();
                }
            }
        }
        return max;
    }
}
