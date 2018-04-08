Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2017
Var
// Seção de Declarações das variáveis 
vet : vetor[1..3] de inteiro
i,j,cont : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
      escreval("Numero primo na posição ",i," com valor: ",vet[i])
   fimse
fimpara
Fimalgoritmo