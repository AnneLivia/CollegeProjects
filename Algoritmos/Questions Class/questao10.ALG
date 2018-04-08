Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Seção de Declarações das variáveis 
gratificacao, salBruto,salBase, ir, salarioLiq : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite o salario base: ")
leia(salBase)
escreval("Digite a gratificação: ")
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