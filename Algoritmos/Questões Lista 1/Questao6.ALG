Algoritmo "Quest�o 6 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 6 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
fat, num, i : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreval("Digite um n�mero inteiro e positivo: ")
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
     escreval("N�o h� fatorial de n�meros negativos")
fimse
Fimalgoritmo