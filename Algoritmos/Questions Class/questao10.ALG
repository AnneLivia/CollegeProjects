Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Se��o de Declara��es das vari�veis 
gratificacao, salBruto,salBase, ir, salarioLiq : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreval("Digite o salario base: ")
leia(salBase)
escreval("Digite a gratifica��o: ")
leia(gratificacao)

salBruto <- salBase + gratificacao

se (salBruto < 100 ) entao
   ir <- (salBruto*(15/100))
senao
   ir <- (salBruto * (20/100))
fimse
salarioLiq <- salBruto - ir
escreval("Salario liquido: ",salarioLiq)
Fimalgoritmo