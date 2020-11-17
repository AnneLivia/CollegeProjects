module.exports = app => {
	app.listen(app.get("port"),() => {
			console.log('Servidor no Ar')
	})	
}