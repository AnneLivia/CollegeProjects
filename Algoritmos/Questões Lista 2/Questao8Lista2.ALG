Algoritmo "Questao 8 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descri��o   : Fun��o que informa o conceito do aluno
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

procedimento conceito(media : real)
inicio
   se ((media >= 0.0) E (media <= 4.9)) entao
      escreval("Conceito D")
   senao
        se ((media >= 5.0) E (media <= 6.9)) entao
           escreval("Conceito C")
        senao
             se ((media >= 7.0) E (media <= 8.9)) entao
                 escreval("Conceito B")
             senao
                  se((media >= 9.0) E (media <= 10)) entao
                     escreval("Conceito A")
                  fimse
             fimse
        fimse
   fimse

fimprocedimento
var
notas : vetor[1..4] de real
media: real
i : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

para i de 1 ate 4 faca
   escreva("Digite a m�dia da",i,"� avalia��o: ")
   leia(notas[i])
   media <- media + notas[i]
fimpara

media <- media/4
escreval("A m�dia foi: ",media)
conceito(media)
Fimalgoritmo