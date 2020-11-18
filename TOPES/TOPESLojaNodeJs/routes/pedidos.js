const bodyParser = require('body-parser');

module.exports = app => {
	const Pedidos = app.models.pedidos;

  app.use(bodyParser.urlencoded({ extended: true }));
  app.use(bodyParser.json());

	app.get("/pedidos", (req, res) => {
			Pedidos.findAll({},(retorno)=>
							{res.json({pedidos: retorno})});
	});


   // create application/json parser
  var jsonParser = bodyParser.json();

	app.post("/pedidos", function(req, res) {
			var idPedido = req.body.idPedido;
 			var idUsuario = req.body.idUsuario;
      var idEndereco = req.body.idEndereco;
      var produtos = req.body.produtos;
      var frete = req.body.frete;
      var total = req.body.total;

      console.log(req.body)
			res.json(
				{
					idPedidoRecebido: idPedido,
					idUsuarioRecebido: idUsuario,
          idEnderecoRecebido: idEndereco,
          produtosRecebido: produtos,
          freteRecebido: frete,
          totalRecebido: total,
				}
			)
	});
};