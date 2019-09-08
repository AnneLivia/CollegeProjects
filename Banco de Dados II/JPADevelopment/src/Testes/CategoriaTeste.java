package Testes;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

import Connection.ConnectorFactory;
import DAO.CategoriaDAO;
import programa.Categoria;

public class CategoriaTeste {

	public static void main(String[] args) {
		/*
		// TODO Auto-generated method stub
		Categoria c = new Categoria();
		// id é gerado automaticamente
		c.setDescricao("Carro");
		c.setId(3);
		// é necessario para fazer a inserção, esse createEntity... pede o nome do percistence
		EntityManager em = new ConnectorFactory().getConnection(); // criando o enty manager
		CategoriaDAO dao = new CategoriaDAO();
		c = dao.save(c);
	    em.close();
	    
	    System.out.println("ID: " + c.getDescricao());
	    System.out.println("Desricao: " + c.getDescricao());
	    
		CategoriaDAO dao = new CategoriaDAO();
		// Categoria c = dao.findById(2);
		for (Categoria c : dao.findAll()) {
			System.out.println("Id: " + c.getId() + ", Descricao: " + c.getDescricao());
		}
		*/
		CategoriaDAO dao = new CategoriaDAO();
		dao.remove(3);
	}
	
}
