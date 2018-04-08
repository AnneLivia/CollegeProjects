Algoritmo "Questao 9 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA PINHEIRO	PIRES
// Descrição   : Função que informa o conceito do aluno
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

procedimento ordenados(num1,num2,num3 : inteiro)
inicio
se ((num1 <= num2) E (num1 <= num3)) entao
     se(num2 < num3) entao
        escreval(num1,num2,num3)
     senao
        escreval(num1,num3,num2)
     fimse
senao
     se ((num2 <= num1) E (num2 <= num3)) entao
          se(num1 <= num3) entao
             escreval(num2,num1,num3)
          senao
             escreval(num2,num3,num1)
          fimse
     senao
          se(num1 <= num2) entao
             escreval(num3,num1,num2)
          senao
             escreval(num3,num2,num1)
          fimse
     fimse
fimse

fimprocedimento
Var
// Seção de Declarações das variáveis
n1,n2,n3 : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Digite o primero valor: ")
leia(n1)
escreva("Digite o segundo valor: ")
leia(n2)
escreva("Digite o terceiro valor: ")
leia(n3)
ordenados(n1,n2,n3)
Fimalgoritmo