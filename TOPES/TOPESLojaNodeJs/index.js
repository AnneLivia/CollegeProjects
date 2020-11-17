//importação de pacotes
const express = require('express');
const consign = require('consign');

const app = express();

consign().include("models").then("libs/middlewares").then("routes").then("libs/boot").into(app);

// manda rodar aplicação na porta 3000
app.listen(3000, () => {
	console.log('server iniciou');
});