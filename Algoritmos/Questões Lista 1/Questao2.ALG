Algoritmo "Preco Produto"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : 2 - Escreva um algoritmo que receba o nome e o pre�o de custo de 5 produtos, mostre o valor de venda e o respectivo nome de cada produto. Sabe-se que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
// (preco de custo * percentual) + pre�o de custo
Var
// Se��o de Declara��es das vari�veis
nome : vetor[1..5] de caractere
texto : caractere
preco : vetor[1..5] de real
percentual: vetor[1..5] de real
i : inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

para i de 1 ate 5 faca
   escreval("Informa o percentual para o produto ",i,": ")
   leia(percentual[i])
   escreval("Digite o nome do produto ",i,": ")
   leia(nome[i])
   escreval("Digite o preco de custo do produto ",i,": ")
   leia(preco[i])
fimpara

para i de 1 ate 5 faca
  preco[i] <- ((preco[i] * (percentual[i] / 100)) + preco[i])
fimpara

limpatela

para i de 1 ate 2 faca
  escreval("Pre�o de venda: R$",preco[i],"   Node do produto: ", nome[i])
fimpara



Fimalgoritmo