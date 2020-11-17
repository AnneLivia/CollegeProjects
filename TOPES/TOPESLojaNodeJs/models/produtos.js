module.exports = app => {
	return {
			findAll: (params,callback) => {
				return callback(
					[
						{id:1, idCategoria:3, nome:"Macbook"},
						{id:2, idCategoria:3, nome:"Notebook Acer"},
            {id:3, idCategoria:3, nome:"Notebook Gamer"},
            {id:4, idCategoria:1, nome:"Iphone 12"},
            {id:5, idCategoria:1, nome:"Galaxy Note 20"},
            {id:6, idCategoria:2, nome:"Sofa"},
            {id:7, idCategoria:2, nome:"Poltrona"},
            {id:8, idCategoria:4, nome:"Matéria Escura"},
					]
				)				
			}
	}
};