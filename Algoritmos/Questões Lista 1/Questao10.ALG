Algoritmo "Questão 10 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 10 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
v : vetor[1..10] de inteiro
soma, i: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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