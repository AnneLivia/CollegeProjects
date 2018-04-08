Algoritmo "semnome"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/11/2017
PROCEDIMENTO mensagem()
inicio
   escreval
   Escreval("------------------------- V O T A Ç Ã O -------------------------")
   escreval
fimprocedimento
Var
// Seção de Declarações das variáveis 

i, tam, voto, maior,enter: inteiro
candidatos : vetor[1..100] de inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
tam <- 20
mensagem()
escreval("Quantidade de votos para cada candidato: ")
para i de 1 ate 6 faca
  se i < 5 entao
       escreval("Candidato",i,": ",candidatos[i])
  senao
       se i = 5 entao
         escreval("Branco: ",candidatos[i])
       senao
         escreval("Nulo: ",candidatos[i])
       fimse
  fimse
fimpara
escreva("Tecle enter: ")
leia(enter)
limpatela
para i de 1 ate tam faca
      Mensagem()
      ESCREVAL("1 >> Candidato 1")
      ESCREVAL("2 >> Candidato 2")
      ESCREVAL("3 >> Candidato 3")
      ESCREVAL("4 >> Candidato 4")
      ESCREVAL("5 >> BRANCO")
      ESCREVAL("6 >> NULO")
      ESCREVA("Digite o número correspondente ao seu voto: ")
      leia(voto)
      escolha (voto)
         caso 1
                  candidatos[1] <- candidatos[1] + 1
         caso 2
                  candidatos[2] <- candidatos[2] + 1
         caso 3
                  candidatos[3] <- candidatos[3] + 1
         caso 4
                  candidatos[4] <- candidatos[4] + 1
         caso 5
                  candidatos[5] <- candidatos[5] + 1
         caso 6
                  candidatos[6] <- candidatos[6] + 1
      fimescolha
      limpatela
fimpara
maior <- 1
para i de 2 ate 6 faca
   se(candidatos[i] > candidatos[maior]) entao
      maior <- i
   fimse
fimpara
Mensagem()
escreva("O candidato com mais votos foi: ")
escolha(maior)
caso 1
      escreval("Candidato 1 com",candidatos[maior])
caso 2
      escreval("Candidato 2 com",candidatos[maior])
caso 3
      escreval("Candidato 3 com",candidatos[maior])
caso 4
      escreval("Candidato 4 com",candidatos[maior])
caso 5
      limpatela
      Mensagem()
      escreval("O número de votos em BRANCO foi superior com",candidatos[maior])
caso 6
      limpatela
      Mensagem()
      escreval("O número de votos NULO foi superior com",candidatos[maior])
fimescolha
se ( candidatos[5] + candidatos[6] <> 0 ) entao
   escreval("Percentual de votos em BRANCO: ",candidatos[5]/(candidatos[5] + candidatos[6]) * 100,"%")
   escreval("Percentual de votos NULO: ",candidatos[6]/(candidatos[5] + candidatos[6]) * 100,"%")
senao
   escreval("Percentual de votos em BRANCO: 0%")
   escreval("Percentual de votos NULO: 0%")
fimse

escreval("Percentual de votos brancos e nulos: ",(candidatos[5] + candidatos[6]) / tam * 100,"%")
Fimalgoritmo