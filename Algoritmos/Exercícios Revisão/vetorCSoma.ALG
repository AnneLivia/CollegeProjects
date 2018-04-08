Algoritmo "semnome"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/11/2017
Var
// Seção de Declarações das variáveis 
vetA, vetB, vetC: vetor[1..100] de inteiro
i, tam: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite o tamanho dos vetores: ")
leia(tam)
limpatela
escreval("Digite os valores do vetor A: ")
para i de 1 ate tam faca
   escreva("vetA [",i," ] = ")
   leia(vetA[i])
fimpara
limpatela
escreval("Digite os valores do vetor B: ")
para i de 1 ate tam faca
   escreva("vetB [",i," ] = ")
   leia(vetB[i])
fimpara

para i de 1 ate tam faca
   vetC[i] <- vetA[i] + vetB[i]
fimpara

limpatela

Escreval("Vetor A")
para i de 1 ate tam faca
   escreva(vetA[i]," ")
fimpara
Escreval("")
Escreval("")
Escreval("Vetor B")
para i de 1 ate tam faca
   escreva(vetB[i]," ")
fimpara
Escreval("")
Escreval("")
Escreval("Vetor C")
para i de 1 ate tam faca
   escreva(vetC[i]," ")
fimpara
Fimalgoritmo