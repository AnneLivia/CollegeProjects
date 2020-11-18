module.exports = app => {
	return {
			findAll: (params,callback) => {
				return callback(
					[
						{id:1, idCategoria:3, nome:"Macbook", preco: 100000},
						{id:2, idCategoria:3, nome:"Notebook Acer", preco: 4000},
            {id:3, idCategoria:3, nome:"Notebook Gamer", preco: 8000},
            {id:4, idCategoria:1, nome:"Iphone 12", preco:1200},
            {id:5, idCategoria:1, nome:"Galaxy Note 20", preco:1240},
            {id:6, idCategoria:2, nome:"Sofa", preco:500},
            {id:7, idCategoria:2, nome:"Poltrona", preco:240.22},
            {id:8, idCategoria:4, nome:"Matéria Escura", preco:25},
					]
				)				
			}
	}
};