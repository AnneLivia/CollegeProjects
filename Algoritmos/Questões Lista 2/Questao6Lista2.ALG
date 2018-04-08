Algoritmo "Questao 6 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que verifica se o número é primo ou não
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
// Seção de Declarações das variáveis 
num : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite um valor inteiro e positivo: ")
leia(num)
se (num < 0) entao
   escreval("Erro: número negativo")
senao
   se (ePrimo(num)) entao
      escreval("O número",num," é primo")
   senao
      escreval("O número",num," não é primo")
   fimse
fimse

Fimalgoritmo