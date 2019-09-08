package Connection;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

public class ConnectorFactory {
	private static EntityManagerFactory emf = Persistence.createEntityManagerFactory("meuPU");
	
	public EntityManager getConnection() {
		return emf.createEntityManager();
	}
}
