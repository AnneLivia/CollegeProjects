Algoritmo "Quest�o 10 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 10 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
v : vetor[1..10] de inteiro
soma, i: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite os valores do vetor: ")
para i de 1 ate 10 faca
   escreva("V[",i," ] : ")
   leia(v[i])
   se v[i] mod 2 <> 0 entao
      soma <- soma + v[i]
   fimse
fimpara
escreval("Soma dos valores impares do vetor: ",soma)
Fimalgoritmo