//importação de pacotes
const express = require('express');
const consign = require('consign');
const cors = require('cors');

const app = express();

app.use(cors());

app.use(express.json())    // <==== parse request body as JSON

consign().include("models").then("libs/middlewares").then("routes").then("libs/boot").into(app);

// manda rodar aplicação na porta 3000
app.listen(3000, () => {
	console.log('server iniciou');
});