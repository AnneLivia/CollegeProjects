Algoritmo "Questao 3 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que retorna o menor número de um vetor
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

funcao menorValor(num1,num2 : real) : real
inicio
     se(num1 < num2)entao
      retorne num1
    senao
      retorne num2
    fimse
fimfuncao

 var
 vet : vetor[1..4] de real
 menor : real
 i : inteiro
 Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite os valores do vetor: ")
para i de 1 ate 4 faca
    escreva("Vet[",i,"] = ")
    leia(vet[i])
fimpara

menor <- vet[1]
para i de 1 ate 3 faca
   menor <- menorValor(menor,vet[i+1])
fimpara
escreval("O menor valor do vetor é: ",menor)

Fimalgoritmo