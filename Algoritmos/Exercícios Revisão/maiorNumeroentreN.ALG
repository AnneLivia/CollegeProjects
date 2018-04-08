Algoritmo "semnome"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/11/2017
Var
// Seção de Declarações das variáveis 
numero, maior : inteiro
flag : logico
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

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

escreval("O maior número é: ",maior)

Fimalgoritmo