const bodyParser = require('body-parser')
module.exports = app => {
  const Produtos = app.models.produtos;

  app.get("/produtos", (req, res) => {
    Produtos.findAll({}, (retorno) => { res.json({ produtos: retorno }) });
  });


  // todos os produtos que possua algum nome  
  app.get("/produtos/:produto", (req, res) => {
    var produto = req.params.produto;
    var produtosLista = [];
    // verificando os produtos que possua em seu nome o parametro passado 
    Produtos.findAll({}, (retorno) => {
      var retornoo = JSON.parse(JSON.stringify(retorno));
      for (var i = 0; i < retornoo.length; i++) {
        // se o produto atual incluir em seu nome o produto passado, inserir na lista
        if (retornoo[i].nome.toLowerCase().includes(produto.toLowerCase())) {
          produtosLista.push(retornoo[i]);
        }
      }

      res.json({ produtos: produtosLista })
    });
  });
};