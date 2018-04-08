Algoritmo "Salario operario questão 6"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor    :
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
// Seção de Declarações das variáveis 
var
C, N, Exc, salarioTotal: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o codigo: ")
leia(C)
escreval("Digite o número de horas trabalhadas: ")
leia(N)

salarioTotal <- N * 10
se N > 50 entao
   Exc <- N - 50
   Exc <- Exc * 20
fimse

escreval("Salário total: R$ ",salarioTotal)
escreval("Salário excedente: R$ ",Exc)

Fimalgoritmo