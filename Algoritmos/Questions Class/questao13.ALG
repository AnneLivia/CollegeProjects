Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Se��o de Declara��es das vari�veis 
idade : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Digite a idade do nadador: ")
leia(idade)

se ((idade >= 5) E (idade <= 7)) entao
       escreval("Infantil A")
senao
   se((idade >= 8) E (idade <= 10)) entao
        escreval("Infantil B")
   senao
      se((idade >= 11) E (idade <= 13)) entao
         escreval("Juvenil A")
      senao
         se((idade >= 14) E (idade <= 17)) entao
            escreval("Juvenil B")
         senao
            se(idade >= 18) entao
               escreval("Adulto")
            senao
               escreval("Idade fora dos parametros de n�vel")
            fimse
         fimse
      fimse
   fimse
fimse
Fimalgoritmo