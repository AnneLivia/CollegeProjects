module.exports = app => {
  app.get('/', (req, res) => {
    res.send('Bem-vindo(a) ao E-Commerce')
  });
};
