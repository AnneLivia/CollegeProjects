Algoritmo "semnome"
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 07/11/2017
Var
// Se��o de Declara��es das vari�veis 
vet1, vet2 : vetor[1..10] de inteiro
vet3 : vetor[1..20] de inteiro
i, j, tam: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
tam <- 10
escreval("Digite os valores do 1� vetor: ")
para i de 1 ate tam faca
   escreva("VET1[",i," ]: ")
   leia(vet1[i])
fimpara
limpatela
escreval("Digite os valores do 2� vetor: ")
para i de 1 ate tam faca
   escreva("VET2[",i," ]: ")
   leia(vet2[i])
fimpara

j <- 1
para i de 1 ate tam faca
   vet3[j] <- vet1[i]
   j <- j + 1
   vet3[j] <- vet2[i]
   j <- j + 1
fimpara
limpatela
escreval("Vetor 1: ")
escreval("")
para i de 1 ate tam faca
   escreva(vet1[i])
fimpara
escreval("")
escreval("")
escreval("Vetor 2: ")
escreval("")
para i de 1 ate tam faca
   escreva(vet2[i])
fimpara
escreval("")
escreval("")
escreval("Vetor 3: ")
escreval("")
para i de 1 ate tam * 2 faca
   escreva(vet3[i])
fimpara
escreval("")
Fimalgoritmo