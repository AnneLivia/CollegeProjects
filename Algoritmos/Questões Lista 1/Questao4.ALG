Algoritmo "Calculadora"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 4 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
n1, n2 : real
op : caracter

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite o n�mero 1: ")
leia(n1)
escreva("Digite o n�mero 2: ")
leia(n2)

limpatela
escreval("Qual opera��o voc� deseja realizar ?")
escreval("Obs: digite o simbolo da opera��o como: +, -, etc.")
escreva("Digite aqui: ")
leia(op)
limpatela
escolha op
    caso "+"
             escreval("--------- S O M A ---------")
             escreval(n1," + ",n2," = ",n1+n2)
    caso "-"
             escreval("--------- S U B T R A � � O ---------")
             escreval(n1," - ",n2," = ",n1-n2)
    caso "x","*"
             escreval("--------- M U L T I P L I C A � � O ---------")
             escreval(n1," x ",n2," = ",n1*n2)
    caso "/"
             se(n2 <> 0) entao
                    escreval("--------- D I V I S � O ---------")
                    escreval(n1," / ",n2," = ",n1/n2)
             senao
                    escreval("N�o pode haver divis�o por 0")
             fimse
    outrocaso
             escreval("Operador invalida")
fimescolha
Fimalgoritmo