module.exports = app => {
  const Categorias = app.models.categorias;
  const Produtos = app.models.produtos;



  app.get("/categorias", (req, res) => {
    Categorias.findAll({}, (retorno) => { res.json({ categorias: retorno }) });
  });


  // todos os produtos de uma categoria  
  app.get("/categorias/:categoria", (req, res) => {
    var categoria = req.params.categoria;
    var idCategoria = "";
    var produtosLista = [];

    // pegando o id da categoria
    Categorias.findAll({}, (retorno) => {
      var retornoo = JSON.parse(JSON.stringify(retorno));
      for (var i = 0; i < retornoo.length; i++) {
        if (retornoo[i].nome.toLowerCase() == categoria.toLowerCase()) {
          idCategoria = retornoo[i].id;
          break;
        }
      }
    });

    // verificando os produtos com o mesmo id da categoria 
    Produtos.findAll({}, (retorno) => {
      var retornoo = JSON.parse(JSON.stringify(retorno));
      for (var i = 0; i < retornoo.length; i++) {
        if (retornoo[i].idCategoria == idCategoria) {
          produtosLista.push(retornoo[i]);
        }
      }

      res.json({ categorias: produtosLista })
    });
  });
};