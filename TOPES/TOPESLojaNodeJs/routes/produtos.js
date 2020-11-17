const bodyParser = require('body-parser')
module.exports = app => {
	const Produtos = app.models.produtos;
	
	app.get("/produtos", (req, res) => {
			Produtos.findAll({},(retorno)=>
							{res.json({produtos: retorno})});
	});
};