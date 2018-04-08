Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017


Var
// Seção de Declarações das variáveis 
numero : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite um valor: ")
leia(numero)

se (numero mod 2 = 0) entao
   escreval("Par")
senao
   escreval("Impar")
fimse

se (numero > 0) entao
   escreval("Positivo")
senao
   se(numero = 0) entao
      escreval("Igual a zero")
   senao
      escreval("Negativo")
   fimse
fimse
Fimalgoritmo