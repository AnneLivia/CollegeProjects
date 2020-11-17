const bodyParser = require('body-parser')
module.exports = app => {
	const Usuarios = app.models.usuarios;
	
	app.get("/usuarios", (req, res) => {
			Usuarios.findAll({},(retorno)=>
							{res.json({usuarios: retorno})});
	});

// create application/json parser
  var jsonParser = bodyParser.json()
	app.post("/usuarios", jsonParser, function(req, res) {
		
			var nome = req.body.nome;
 			var idUsuario = req.body.id;
      var email = req.body.email;
      var dataNascimento = req.body.dataNascimento;
      var login = req.body.login;
      var senha = req.body.senha;

			res.json(
				{
					nomeRecebido: nome,
					idRecebido: idUsuario,
          emailRecebido: email,
          dataNascimentoRecebido: dataNascimento,
          loginRecebido: login,
          senhaRecebido: senha,
				}
			)
	});
};