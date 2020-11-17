module.exports = app => {
	return {
			findAll: (params,callback) => {
				return callback(
					[
						{id:1, nome:"Livia", dataNascimento:"16/01/1997",email:"annelivia16@gmail.com", login:"annelivia", senha:"123456"},
						{id:2, nome:"Anne", dataNascimento:"16/01/1997",email:"anne-livia-16@hotmail.com", login:"annel", senha:"123456"},
					]
				)				
			}
	}
};