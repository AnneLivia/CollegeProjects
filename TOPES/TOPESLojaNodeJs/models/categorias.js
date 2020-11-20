module.exports = app => {
  return {
    findAll: (params, callback) => {
      return callback(
        [{ id: 1, nome: "Celulares" }, { id: 2, nome: "Móveis" }, { id: 3, nome: "Informática" }, { id: 4, nome: "Livros" },]
      )
    }
  }
};