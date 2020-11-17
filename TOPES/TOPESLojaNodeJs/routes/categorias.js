module.exports = app => {
	const Categorias = app.models.categorias;
	
	app.get("/categorias", (req, res) => {
			Categorias.findAll({},(retorno)=>
							{res.json({categorias: retorno})});
	});
};