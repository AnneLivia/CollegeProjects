const rp = require('request-promise')
const req = require('request')
const bodyParser = require('body-parser')
module.exports = app => {
	const Enderecos = app.models.enderecos;

  app.use(bodyParser.urlencoded({ extended: true }));

	app.get("/enderecos", (req, res) => {
			Enderecos.findAll({},(retorno)=>
							{res.json({enderecos: retorno})});
	});

  app.get('/enderecos/cep/:cep', (req, res) => {
		var cep = req.params.cep;	
		const getViaCep = {
            uri: 'https://viacep.com.br/ws/'+cep+'/json/',
            method: 'GET'            
        }
        
		rp(getViaCep).then(function (parsedBody) {
                res.send(parsedBody);
            }).catch(function (err) { 
                res.send("ERRO");
            });
	});

// create application/json parser
  var jsonParser = bodyParser.json()
	app.post("/enderecos", jsonParser, function(req, res) {
		
 			var idPessoa = req.body.idPessoa;
      var idEndereco = req.body.idEndereco;
      var logradouro = req.body.logradouro;
      var numero = req.body.numero;
      var complemento = req.body.complemento;
      var bairro = req.body.bairro;
      var cidade = req.body.cidade;
      var estado = req.body.estado;
      var tipoDeEndereco = req.body.tipoDeEndereco;
      var cep = req.body.cep;

      console.log(req.body);
      
			res.json(
				{
					idPessoaRecebido: idPessoa,
					logradouroRecebido: logradouro,
          numeroRecebido: numero,
          complementoRecebido: complemento,
          bairroRecebido: bairro,
          cidadeRecebido: cidade,
          estadoRecebido: estado,
          tipoDeEnderecoRecebido: tipoDeEndereco,
          cepRecebido: cep,
          idEnderecoRecebido: idEndereco,
				}
			)
	});
};