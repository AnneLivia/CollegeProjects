Algoritmo "Quest�o 9 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 9 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
i, soma : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

i <- 100
escreval("�mpares em ordem crescente")
enquanto i <= 200 faca
   se i mod 2 <> 0 entao
      escreval(i)
      soma <- soma + i
   fimse
   i <- i + 1
fimenquanto


i <- 200
escreval("�mpares em ordem descrescente")
enquanto i >= 100 faca
   se i mod 2 <> 0 entao
      escreval(i)
   fimse
   i <- i - 1
fimenquanto

escreval("Soma dos �mpares: ",soma)

Fimalgoritmo