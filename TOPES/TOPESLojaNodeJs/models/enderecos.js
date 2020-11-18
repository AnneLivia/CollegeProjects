module.exports = app => {
	return {
			findAll: (params,callback) => {
				return callback(
					[
						{idPessoa:1, logradouro:"xxx",numero:"xxxx", complemento:"xxxx", bairro:"xxxx",
            cidade:"xxxx", estado:"xxxx", 
            tipoDeEndereco:"casa", cep:"00000000", idEndereco:1},
						{idPessoa:2, logradouro:"xxx",numero:"xxxx", complemento:"xxxx", bairro:"xxxx",
            cidade:"xxxx", estado:"xxxx", 
            tipoDeEndereco:"apt", cep:"00000000", idEndereco:2},
					]
				)				
			}
	}
};