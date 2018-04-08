Algoritmo "Produtos"
// Disciplina   :
// Professor    :
// Descrição   : Questão 2 Lista 3
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017
tipo
   Produto = registro
      nome : caractere
      codigo : inteiro
      preco : real
   fimregistro
Var
// Seção de Declarações das variáveis 
produtos : vetor[1..100] de Produto
quantidade, i, cod : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Digite a quantidade de produtos: ")
leia(quantidade)
limpatela
para i de 1 ate quantidade faca
       escreval("------------- C A D A S T R O  D E  P R O D U T O S  -------------")
       escreva("Digite o NOME do produto: ")
       leia(produtos[i].nome)
       escreva("Digite o CÓDIGO do ",produtos[i].nome,": ")
       leia(produtos[i].codigo)
       escreva("Digite o PREÇO do ",produtos[i].nome,": ")
       leia(produtos[i].preco)
       limpatela
fimpara
escreval("------------  P R O D U T O S  C A D A S T R A D O S  ------------")
para i de 1 ate quantidade faca
       escreval(">> ",produtos[i].nome," -- Código: ",produtos[i].codigo)
fimpara
escreval("")
escreva("Digite o código de algum produto para consultar o seu preço: ")
leia(cod)
escreval("")
para i de 1 ate quantidade faca
   se cod = produtos[i].codigo entao
      escreval("Preço do ",produtos[i].nome," é: R$ ",produtos[i].preco:2:2)
   fimse
fimpara
Fimalgoritmo