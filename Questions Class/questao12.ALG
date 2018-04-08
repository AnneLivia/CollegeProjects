Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Seção de Declarações das variáveis 
niPoluicao : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite o nível de poluição: ")
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
            escreval("Nível de poluição aceitavel")
         fimse
      fimse
   fimse
fimse
Fimalgoritmo