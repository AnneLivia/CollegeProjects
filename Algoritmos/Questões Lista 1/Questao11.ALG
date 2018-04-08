Algoritmo "Questão 11 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 11 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
vetA, vetB, vetC : vetor[1..5] de inteiro
i : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite os valores para o vetor A")
para i de 1  ate 5 faca
    escreva("VetA[",i," ] = ")
    leia(vetA[i])
fimpara
limpatela
escreval("Digite os valores para o vetor B")
para i de 1  ate 5 faca
    escreva("VetB[",i," ] = ")
    leia(vetB[i])
fimpara
limpatela

escreval("Valores do vetor A")
para i de 1  ate 5 faca
    escreva(vetA[i]," ")
fimpara
escreval()
escreval("Valores do vetor B")
para i de 1  ate 5 faca
    escreva(vetB[i]," ")
fimpara
escreval()
escreval("Valores do vetor C")
para i de 1  ate 5 faca
    vetC[i] <- vetA[i] + vetB[i]
    escreva(vetC[i]," ")
fimpara
Fimalgoritmo