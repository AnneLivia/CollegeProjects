Algoritmo "Quest�o 5 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 5 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
maior, menor, num, i, contador: inteiro
media : real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite valores inteiros e positivos")
escreval("Obs: Se o valor for negativo este valor n�o far� parte do calc�lo")
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
           escreval("Valor negativo n�o entrar� no calc�lo")
    fimse
fimpara
limpatela
media <- media / contador
escreval("Maior valor: ",maior)
escreval("Menor valor: ",menor)
escreval("Media dos valores: ",media)
Fimalgoritmo