Algoritmo "semnome"
//  
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/11/2017
Var
// Se��o de Declara��es das vari�veis 
numero, maior : inteiro
flag : logico
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

flag <- falso
repita
   escreva("Digite um valor: ")
   leia(numero)
   se(nao flag) entao
        maior <- numero
        flag <- verdadeiro
   fimse
   se(numero > maior) entao
        maior <- numero
   fimse

ate numero = 0

escreval("O maior n�mero �: ",maior)

Fimalgoritmo