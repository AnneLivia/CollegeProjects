Algoritmo "Quadrado de 4 numeros Questao 7"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor    :
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
// Se��o de Declara��es das vari�veis 
n1,n2,n3,n4: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o primeiro numero: ")
leia(n1)
escreval("Digite o segundo numero: ")
leia(n2)
escreval("Digite o terceiro numero: ")
leia(n3)
escreval("Digite o quarto numero: ")
leia(n4)

se ((n3 ^ 2) >= 1000) entao
   escreval("O quadrado de",n3," �: ", n3 ^ 2)
senao
    escreval("O quadrado de",n1," �: ",n1 ^ 2)
    escreval("O quadrado de",n2," �: ",n2 ^ 2)
    escreval("O quadrado de",n3," �: ",n3 ^ 2)
    escreval("O quadrado de",n4," �: ",n4 ^ 2)
fimse
Fimalgoritmo