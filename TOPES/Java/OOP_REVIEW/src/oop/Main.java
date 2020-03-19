package oop;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        List<Pessoa> p = new ArrayList<Pessoa>();
        
        Funcionario f1 = new Funcionario("1233", "f1", "F", 18, "2018-12-12");
        f1.setFormacao("Eng");
        f1.setSetor("Info");
        f1.setAnoFormacao("2000");
 
        Funcionario f2 = new Funcionario("1234", "f2", "F", 17, "2018-12-12");
        f2.setFormacao("Proj");
        f2.setSetor("Info");
        f2.setAnoFormacao("2010");
        
        Salario s1 = new Salario("Jan", 2000.0, "Brasil", "123", "1", "2019-01-01");
        Salario s2 = new Salario("Jan", 3000.0, "Brasil", "123", "1", "2019-01-01");
        Salario s3 = new Salario("Jan", 4000.0, "Brasil", "123", "1", "2019-01-01");
        
        f1.setSalario(s1);
        f1.setSalario(s2);
        f1.setSalario(s3);
        
        s1 = new Salario("Jan", 2400.0, "Brasil", "124", "2", "2019-01-01");
        s2 = new Salario("Jan", 8000.0, "Brasil", "124", "2", "2019-01-01");
        s3 = new Salario("Jan", 1000.0, "Brasil", "124", "2", "2019-01-01");
        
        f2.setSalario(s1);
        f2.setSalario(s2);
        f2.setSalario(s3);
        
        PrestadorDeServico p1 = new PrestadorDeServico("1111","p1", "F", 18, "2018-12-12");
        p1.setEmpresa("BBBB");
        p1.setServico("XXXX");
        p1.setDataInicio("2010");
        p1.setDataFim("2012");
        
        PrestadorDeServico p2 = new PrestadorDeServico("1112","p2", "F", 17, "2018-12-12");
        p2.setEmpresa("BxxBB");
        p2.setServico("XXXX");
        p2.setDataInicio("2010");
        p2.setDataFim("2012");
        
        
        s1 = new Salario("Jan", 100.0, "Brasil", "125", "3", "2019-01-01");
        s2 = new Salario("Apr", 200.0, "Brasil", "125", "3", "2019-01-01");
        s3 = new Salario("May", 300.0, "Brasil", "125", "3", "2019-01-01");
        
        p1.setSalario(s1);
        p1.setSalario(s2);
        p1.setSalario(s3);
        
        s1 = new Salario("Jan", 400.0, "Brasil", "126", "4", "2019-01-01");
        s2 = new Salario("Apr", 250.0, "Brasil", "126", "4", "2019-01-01");
        s3 = new Salario("May", 10050.0, "Brasil", "126", "4", "2019-01-01");
        
        p2.setSalario(s1);
        p2.setSalario(s2);
        p2.setSalario(s3);
        
        p.add(p1);
        p.add(p2);
        p.add(f1);
        p.add(f2);
        
        
        System.out.println("Maior salario recebido prestador: " + Pessoa.getMaximumSalarioPrestadores(p));
        System.out.println("Maior salario recebido funcionario: " + Pessoa.getMaximumSalarioFuncionario(p));
        System.out.println("Maior salario recebido: " + Pessoa.getMaximumSalario(p));
    }
    
}
