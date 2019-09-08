package DAO;

import java.util.List;

import javax.persistence.EntityManager;

import Connection.ConnectorFactory;
import programa.Produto;

public class ProdutoDAO {
	public Produto save (Produto p) {
		// estabelecendo conexão com o serviço que gerencia as entidades
		EntityManager em = new ConnectorFactory().getConnection();
		try {
			em.getTransaction().begin();
			if(p.getId() == null) {
				// se o dado ainda não existir;
				em.persist(p);
			} else {
				// se já existir, atualizar.
				em.merge(p);
			}
			em.getTransaction().commit();
		}catch(Exception e) {
			System.err.println(e);
			em.getTransaction().rollback();
		} finally {
			em.close();
		}
		return p;
	}
	// sempre que for necessário fazer alguma autlização, usar o begin e o commit.
	public Produto remove (Integer id) {
		// estabelecendo conexão com o serviço que gerencia as entidades
		EntityManager em = new ConnectorFactory().getConnection();
		Produto p = null;
		try {
			p = em.find(Produto.class, id);
			em.getTransaction().begin();
			em.remove(p);
			em.getTransaction().commit();
		}catch(Exception e) {
			System.err.println(e);
			em.getTransaction().rollback();
		} finally {
			em.close();
		}
		return p;
	}
	
	public Produto findById(Integer id) {
		Produto p = null;
		EntityManager em = new ConnectorFactory().getConnection();
		try {
			em.find(Produto.class, id);
		} catch(Exception e) {
			System.err.println(e);
		} finally {
			em.close();
		}
		return p;
	}
	
	public List<Produto> findALL() {
		List<Produto> p = null;
		EntityManager em = new ConnectorFactory().getConnection();
		try {
			p = em.createQuery("from Produto p").getResultList();
		} catch(Exception e) {
			System.err.println(e);
		} finally {
			em.close();
		}
		return p;
	}
}
