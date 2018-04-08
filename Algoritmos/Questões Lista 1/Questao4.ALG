Algoritmo "Calculadora"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 4 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
n1, n2 : real
op : caracter

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o número 1: ")
leia(n1)
escreva("Digite o número 2: ")
leia(n2)

limpatela
escreval("Qual operação você deseja realizar ?")
escreval("Obs: digite o simbolo da operação como: +, -, etc.")
escreva("Digite aqui: ")
leia(op)
limpatela
escolha op
    caso "+"
             escreval("--------- S O M A ---------")
             escreval(n1," + ",n2," = ",n1+n2)
    caso "-"
             escreval("--------- S U B T R A Ç Ã O ---------")
             escreval(n1," - ",n2," = ",n1-n2)
    caso "x","*"
             escreval("--------- M U L T I P L I C A Ç Ã O ---------")
             escreval(n1," x ",n2," = ",n1*n2)
    caso "/"
             se(n2 <> 0) entao
                    escreval("--------- D I V I S Ã O ---------")
                    escreval(n1," / ",n2," = ",n1/n2)
             senao
                    escreval("Não pode haver divisão por 0")
             fimse
    outrocaso
             escreval("Operador invalida")
fimescolha
Fimalgoritmo