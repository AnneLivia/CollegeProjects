package DAO;

import java.util.List;

import javax.persistence.EntityManager;

import Connection.ConnectorFactory;
import programa.Categoria;

public class CategoriaDAO {
	// metodo de salvar (insert na tabela)
	public Categoria save (Categoria categoria) {
		EntityManager em = new ConnectorFactory().getConnection(); 
		// ve3rificar se deu certo, se não da um rollback
		try {
			// iniciar uma transação
			em.getTransaction().begin();
			if(categoria.getId() == null) {
				// se o id for igual a null é porque ainda não existe
				em.persist(categoria); // persistir no banco de dados o objeto criado
			} else {
				// se não for igual a null, já existe, então será feito um update
				em.merge(categoria); // assim faz o update.
			}
			
			em.getTransaction().commit();
		} catch (Exception e) {
			System.err.println(e);
			em.getTransaction().rollback(); // desfaz tudo
		} finally {
			em.close();
		}
		
		return categoria;
	}
	
	// encontrar objeto
	
	public Categoria findById(Integer id) {
		Categoria categoria = null;
		EntityManager em = new ConnectorFactory().getConnection(); 
		try {
			// chama a classe e o id
			categoria = em.find(Categoria.class, id);
		} catch (Exception e) {
			System.err.println(e);
		} finally {
			em.close();
		}
		return categoria;
	}
	
	// para retornar uma lista de dados da tabela
	public List<Categoria> findAll() {
		EntityManager em = new ConnectorFactory().getConnection(); 
		List<Categoria> cat = null;
		try {
			// aqui é precisa criar um query
			cat = em.createQuery("from Categoria c").getResultList();
		} catch (Exception e) {
			System.err.println(e);
		} finally {
			em.close();
		}
		return cat;
	}
	
	// metodo de remover o objeto do banco de dados
	public Categoria remove(Integer id) {
		Categoria c = null;
		EntityManager em = new ConnectorFactory().getConnection();
		try {
			c = em.find(Categoria.class, id);
			em.getTransaction().begin();
			em.remove(c);
			em.getTransaction().commit();
		} catch (Exception e) {
			System.err.println(e);
			em.getTransaction().rollback();
		} finally {
			em.close();
		}
		return c;
	}
}
