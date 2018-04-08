Algoritmo "Quadrado de 4 numeros Questao 7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor    :
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Seção de Declarações das variáveis 
n1,n2,n3,n4: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o primeiro numero: ")
leia(n1)
escreval("Digite o segundo numero: ")
leia(n2)
escreval("Digite o terceiro numero: ")
leia(n3)
escreval("Digite o quarto numero: ")
leia(n4)

se ((n3 ^ 2) >= 1000) entao
   escreval("O quadrado de",n3," é: ", n3 ^ 2)
senao
    escreval("O quadrado de",n1," é: ",n1 ^ 2)
    escreval("O quadrado de",n2," é: ",n2 ^ 2)
    escreval("O quadrado de",n3," é: ",n3 ^ 2)
    escreval("O quadrado de",n4," é: ",n4 ^ 2)
fimse
Fimalgoritmo