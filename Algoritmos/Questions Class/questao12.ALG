Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Se��o de Declara��es das vari�veis 
niPoluicao : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreval("Digite o n�vel de polui��o: ")
leia(niPoluicao)

se (niPoluicao = 0.3) entao
   escreval("Grupo 1 suspenda as atividades")
senao
   se (niPoluicao = 0.4) entao
      escreval("Grupo 1 e 2 suspendam as atividades")
   senao
      se(niPoluicao >= 0.5) entao
         escreval("Todos os grupos suspedam as atividades")
      senao
         se((niPoluicao >= 0.05) E (niPoluicao <= 0.25)) entao
            escreval("N�vel de polui��o aceitavel")
         fimse
      fimse
   fimse
fimse
Fimalgoritmo