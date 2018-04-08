Algoritmo "Peso Peixe questao 5"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor    :
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Seção de Declarações das variáveis 
P, Exc, M : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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