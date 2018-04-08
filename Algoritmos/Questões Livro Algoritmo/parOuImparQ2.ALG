Algoritmo "par ou impar Questao 2"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    :
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Seção de Declarações das variáveis 
num, i, p  : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

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