Algoritmo "Questão 5 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 5 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
maior, menor, num, i, contador: inteiro
media : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite valores inteiros e positivos")
escreval("Obs: Se o valor for negativo este valor não fará parte do calcúlo")
menor <- 100000
para i de 1 ate 10 faca
    escreva("Digite o valor",i,": ")
    leia(num)
    se(num >= 0) entao
           se (i = 1) entao
              maior <- num
              menor <- num
           fimse
           se (maior < num) entao
              maior <- num
           fimse
           se (menor > num) entao
               menor <- num
           fimse
           media <- media + num
           contador <- contador + 1
    senao
           escreval("Valor negativo não entrará no calcúlo")
    fimse
fimpara
limpatela
media <- media / contador
escreval("Maior valor: ",maior)
escreval("Menor valor: ",menor)
escreval("Media dos valores: ",media)
Fimalgoritmo