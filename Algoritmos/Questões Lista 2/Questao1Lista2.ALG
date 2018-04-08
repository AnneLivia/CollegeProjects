Algoritmo "Questao 1 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que retorna se o número é par ou impar
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
funcao parOuImpar(num : inteiro) : logico
inicio
      se num mod 2 = 0 entao
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

escreval("Digite um valor: ")
leia(num)
se (parOuImpar(num)) entao
   escreval("É par")
senao
     escreval("É ímpar")
fimse
Fimalgoritmo