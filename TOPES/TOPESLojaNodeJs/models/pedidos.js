module.exports = app => {
  return {
    findAll: (params, callback) => {
      return callback(
        [
          {
            idPedido: 1, idUsuario: 1, idEndereco: 1,
            produtos: [
              {
                idProduto: 1, preco: 100000, quantidade: 1
              },
              {
                idProduto: 6, preco: 500, quantidade: 8
              },
              {
                idProduto: 3, preco: 8000, quantidade: 1
              },
            ],
            frete: 500, total: 112500
          }
        ]
      )
    }
  }
};