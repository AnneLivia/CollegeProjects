Algoritmo "Peixe Peso"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 3 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
P, Exce, M : real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o peso dos peixes: ")
leia(P)
se (P > 50) entao
   Exce <- P - 50
   M <- exce * 4
fimse
escreval("Peso do Peixe: ",P," KG")
escreval("Excesso de peso: ",Exce," KG")
escreva("Valor da multa: R$ ",M)

Fimalgoritmo