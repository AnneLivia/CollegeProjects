Algoritmo "Questao 5 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que verifica se o ano é bissexto
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
// Seção de Declarações das variáveis 

var
ano : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva(" Digite um ano: ")
leia(ano)

se anoBissexto(ano) entao
   escreval( ano," é um ano bissexto")
senao
   escreval( ano," não é um ano bissexto")
fimse
Fimalgoritmo
