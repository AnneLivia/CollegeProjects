Algoritmo "par ou impar Questao 2"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    :
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Se��o de Declara��es das vari�veis 
num, i, p  : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreval("Digite um valor: ")
leia(num)
se num mod 2 = 0 entao
   p <- num
senao
   i <- num
fimse

escreval("P: ",p)
escreval("I: ",i)
Fimalgoritmo