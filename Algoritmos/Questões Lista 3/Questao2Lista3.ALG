Algoritmo "Produtos"
// Disciplina   :
// Professor    :
// Descri��o   : Quest�o 2 Lista 3
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017
tipo
   Produto = registro
      nome : caractere
      codigo : inteiro
      preco : real
   fimregistro
Var
// Se��o de Declara��es das vari�veis 
produtos : vetor[1..100] de Produto
quantidade, i, cod : inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Digite a quantidade de produtos: ")
leia(quantidade)
limpatela
para i de 1 ate quantidade faca
       escreval("------------- C A D A S T R O  D E  P R O D U T O S  -------------")
       escreva("Digite o NOME do produto: ")
       leia(produtos[i].nome)
       escreva("Digite o C�DIGO do ",produtos[i].nome,": ")
       leia(produtos[i].codigo)
       escreva("Digite o PRE�O do ",produtos[i].nome,": ")
       leia(produtos[i].preco)
       limpatela
fimpara
escreval("------------  P R O D U T O S  C A D A S T R A D O S  ------------")
para i de 1 ate quantidade faca
       escreval(">> ",produtos[i].nome," -- C�digo: ",produtos[i].codigo)
fimpara
escreval("")
escreva("Digite o c�digo de algum produto para consultar o seu pre�o: ")
leia(cod)
escreval("")
para i de 1 ate quantidade faca
   se cod = produtos[i].codigo entao
      escreval("Pre�o do ",produtos[i].nome," �: R$ ",produtos[i].preco:2:2)
   fimse
fimpara
Fimalgoritmo