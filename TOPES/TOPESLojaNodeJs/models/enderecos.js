module.exports = app => {
	return {
			findAll: (params,callback) => {
				return callback(
					[
						{idPessoa:1, logradouro:"xxx",numero:"xxxx", complemento:"xxxx", bairro:"xxxx",
            cidade:"xxxx", estado:"xxxx", 
            tipoDeEndereco:"casa"},
						{idPessoa:2, logradouro:"xxx",numero:"xxxx", complemento:"xxxx", bairro:"xxxx",
            cidade:"xxxx", estado:"xxxx", 
            tipoDeEndereco:"apt"},
					]
				)				
			}
	}
};