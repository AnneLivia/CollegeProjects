Algoritmo "Questao 5 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descri��o   : Fun��o que verifica se o ano � bissexto
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

funcao anoBissexto(ano : inteiro) : logico
inicio
      se (ano mod 4 = 0) e (ano mod 100 <> 0) entao
         retorne verdadeiro
      senao
         se (ano mod 400 = 0) entao
           retorne verdadeiro
         senao
           retorne falso
         fimse
      fimse
fimfuncao
// Se��o de Declara��es das vari�veis 

var
ano : inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva(" Digite um ano: ")
leia(ano)

se anoBissexto(ano) entao
   escreval( ano," � um ano bissexto")
senao
   escreval( ano," n�o � um ano bissexto")
fimse
Fimalgoritmo
