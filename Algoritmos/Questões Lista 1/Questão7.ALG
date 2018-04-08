Algoritmo "Questão 7 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : Questão número 7 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
salario, soma : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o salario do funcionario: ")
leia(salario)
repita
      soma <- salario + soma
      escreval("Digite o salario do funcionario: ")
      leia(salario)
ate salario < 0

escreva("A soma dos salarios dos funcionários é: R$",soma)
Fimalgoritmo