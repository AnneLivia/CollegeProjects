Algoritmo "Quest�o 7 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 7 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
salario, soma : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o salario do funcionario: ")
leia(salario)
repita
      soma <- salario + soma
      escreval("Digite o salario do funcionario: ")
      leia(salario)
ate salario < 0

escreva("A soma dos salarios dos funcion�rios �: R$",soma)
Fimalgoritmo