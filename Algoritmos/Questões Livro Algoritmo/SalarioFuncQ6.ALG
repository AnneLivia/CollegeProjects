Algoritmo "Salario operario quest�o 6"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor    :
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
// Se��o de Declara��es das vari�veis 
var
C, N, Exc, salarioTotal: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o codigo: ")
leia(C)
escreval("Digite o n�mero de horas trabalhadas: ")
leia(N)

salarioTotal <- N * 10
se N > 50 entao
   Exc <- N - 50
   Exc <- Exc * 20
fimse

escreval("Sal�rio total: R$ ",salarioTotal)
escreval("Sal�rio excedente: R$ ",Exc)

Fimalgoritmo