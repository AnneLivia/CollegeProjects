Algoritmo "Peso Peixe questao 5"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor    :
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Se��o de Declara��es das vari�veis 
P, Exc, M : real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o peso de peixes: ")
leia(P)
se P > 50 entao
   Exc <- P - 50
   M <- Exc * 4.00
fimse
escreval("Peso dos peixes: ",P," KG")
escreval("Peso excedente: ",Exc," KG")
escreval("Valor da multa: R$ ",M)

Fimalgoritmo