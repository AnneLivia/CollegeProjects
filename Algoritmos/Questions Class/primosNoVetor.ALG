Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2017
Var
// Se��o de Declara��es das vari�veis 
vet : vetor[1..3] de inteiro
i,j,cont : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite os valores do vetor: ")
para i de 1 ate 3 faca
   escreva("Vet[",i,"] = ")
   leia(vet[i])
fimpara

para i de 1 ate 3 faca
cont <- 0
   para j de 1 ate vet[i] faca
      se (vet[i] mod j = 0 ) entao
         cont <- cont + 1
      fimse
   fimpara
   se (cont <= 2) entao
      escreval("Numero primo na posi��o ",i," com valor: ",vet[i])
   fimse
fimpara
Fimalgoritmo