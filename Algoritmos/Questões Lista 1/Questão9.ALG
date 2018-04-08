Algoritmo "Questão 9 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 9 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
i, soma : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

i <- 100
escreval("Ímpares em ordem crescente")
enquanto i <= 200 faca
   se i mod 2 <> 0 entao
      escreval(i)
      soma <- soma + i
   fimse
   i <- i + 1
fimenquanto


i <- 200
escreval("Ímpares em ordem descrescente")
enquanto i >= 100 faca
   se i mod 2 <> 0 entao
      escreval(i)
   fimse
   i <- i - 1
fimenquanto

escreval("Soma dos ímpares: ",soma)

Fimalgoritmo