Algoritmo "Preco Produto"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : 2 - Escreva um algoritmo que receba o nome e o preço de custo de 5 produtos, mostre o valor de venda e o respectivo nome de cada produto. Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
// (preco de custo * percentual) + preço de custo
Var
// Seção de Declarações das variáveis
nome : vetor[1..5] de caractere
texto : caractere
preco : vetor[1..5] de real
percentual: vetor[1..5] de real
i : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

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
  escreval("Preço de venda: R$",preco[i],"   Node do produto: ", nome[i])
fimpara



Fimalgoritmo