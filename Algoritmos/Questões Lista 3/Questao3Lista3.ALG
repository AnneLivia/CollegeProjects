Algoritmo "semnome"
// Disciplina   :
// Professor    :
// Descri��o   : Quest�o 3 Lista 3
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017
tipo
   Candidato = registro
      nome : caractere
      portugues, matematica, conGerais, media: real
   fimregistro
Var
// Se��o de Declara��es das vari�veis 
candidatos : vetor[1..100] de Candidato
i, quantidade : inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite a quantidade de pessoas que fizeram a prova: ")
leia(quantidade)
limpatela

para i de 1 ate quantidade faca
   escreval("Cadastre as informa��es dos candidatos: ")
   escreval("")
   escreva("Digite o nome do candidato: ")
   leia(candidatos[i].nome)
   escreval("Digite as notas obtidas pelo(a) ",candidatos[i].nome,":")
   escreval("")
   escreva("Portugu�s: ")
   leia(candidatos[i].portugues)
   escreva("Matem�tica: ")
   leia(candidatos[i].matematica)
   escreva("Conhecimentos Gerais: ")
   leia(candidatos[i].conGerais)
   candidatos[i].media <- (candidatos[i].portugues + candidatos[i].matematica + candidatos[i].conGerais)/3
   limpatela
fimpara

para i de 1 ate quantidade faca
   escreval("------------------------------------------------------")
   escreval("")
   escreval("Nome: ",candidatos[i].nome)
   escreval("Notas Obtidas: ")
   escreval(">>> Portugu�s: ",candidatos[i].portugues)
   escreval(">>> Matem�tica: ",candidatos[i].matematica)
   escreval(">>> Conhecimentos Gerais: ",candidatos[i].conGerais)
   escreval("M�dia: ",candidatos[i].media:2:2)
   se ((candidatos[i].media > 7.0) E (candidatos[i].portugues >= 5.0) E (candidatos[i].matematica >= 5.0) E (candidatos[i].conGerais >= 5.0)) entao
         escreval("-----> ",candidatos[i].nome," est� aprovado(a)")
   senao
         escreval("-----> ",candidatos[i].nome," n�o est� aprovado(a)")
         escreval("Obs: M�dia insuficiente ou foi obtido alguma nota menor que 5")
   fimse
   escreval("")
fimpara
escreval("------------------------------------------------------")


Fimalgoritmo