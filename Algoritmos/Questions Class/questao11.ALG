Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017


Var
// Se��o de Declara��es das vari�veis 
numero : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite um valor: ")
leia(numero)

se (numero mod 2 = 0) entao
   escreval("Par")
senao
   escreval("Impar")
fimse

se (numero > 0) entao
   escreval("Positivo")
senao
   se(numero = 0) entao
      escreval("Igual a zero")
   senao
      escreval("Negativo")
   fimse
fimse
Fimalgoritmo