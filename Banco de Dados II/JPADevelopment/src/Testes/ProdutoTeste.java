package Testes;

import DAO.ProdutoDAO;
import programa.Categoria;
import programa.Produto;

public class ProdutoTeste {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Produto p = new Produto();
		ProdutoDAO dao = new ProdutoDAO();
		Categoria c = new Categoria();
		c.setId(2);
		// p.setId(2);
		p.setDescricao("Arroz 3");
		p.setQtd(10);
		p.setValor(4.50);
		p.setCategoria(c);
		
		dao.save(p);
	}

}
