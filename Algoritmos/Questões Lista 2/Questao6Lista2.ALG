Algoritmo "Questao 6 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descri��o   : Fun��o que verifica se o n�mero � primo ou n�o
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

funcao ePrimo(num : inteiro) : logico
var
ini, cont : inteiro
inicio
     para ini de 1 ate num faca
         se (num mod ini = 0) entao
            cont <- cont + 1
         fimse
     fimpara
     se cont = 2 entao
        retorne verdadeiro
     senao
        retorne falso
     fimse
fimfuncao

Var
// Se��o de Declara��es das vari�veis 
num : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite um valor inteiro e positivo: ")
leia(num)
se (num < 0) entao
   escreval("Erro: n�mero negativo")
senao
   se (ePrimo(num)) entao
      escreval("O n�mero",num," � primo")
   senao
      escreval("O n�mero",num," n�o � primo")
   fimse
fimse

Fimalgoritmo