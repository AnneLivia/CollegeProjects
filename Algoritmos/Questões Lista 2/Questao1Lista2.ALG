Algoritmo "Questao 1 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descri��o   : Fun��o que retorna se o n�mero � par ou impar
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
// Se��o de Declara��es das vari�veis 
num : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreval("Digite um valor: ")
leia(num)
se (parOuImpar(num)) entao
   escreval("� par")
senao
     escreval("� �mpar")
fimse
Fimalgoritmo