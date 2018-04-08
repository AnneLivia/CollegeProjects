Algoritmo "Questão 6 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 6 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
fat, num, i : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite um número inteiro e positivo: ")
leia(num)
se num >= 0 entao
       i <- 1
       fat <- 1
       repita
             fat <- fat * i
             i <- i + 1
       ate(i > num)
       limpatela
       escreval(num,"! = ",fat)
senao
     escreval("Não há fatorial de números negativos")
fimse
Fimalgoritmo