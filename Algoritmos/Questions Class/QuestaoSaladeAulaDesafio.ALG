Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Se��o de Declara��es das vari�veis 
codigoP, codigoPais : inteiro
pesoP, precoTotal, precoTotalProd: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite o codigo do produto: ")
leia(codigoP)
se((codigoP >= 1) E (codigoP <= 10)) entao
   escreval("Digite o peso do produto em kg: ")
   leia(pesoP)
   escreval("Digite o codigo do pa�s de origem: ")
   leia(codigoPais)
   se ((codigoPais >= 1) E (codigoPais <= 3)) entao
      escolha(codigoPais)
         caso 1
                  se((codigoP >= 1) E (codigoP <= 4)) entao
                       precoTotal <- (10 * (pesoP * 1000))
                       precoTotalProd <- precoTotal
                  senao
                     se ((codigoP >= 5) E (codigoP <= 7)) entao
                        precoTotal <- (25 * (pesoP * 1000))
                         precoTotalProd <- precoTotal
                     senao
                        se((codigoP >= 8) E (codigoP <= 10)) entao
                           precoTotal <- (35 * (pesoP * 1000))
                           precoTotalProd <- precoTotal
                        fimse
                     fimse
                  fimse
                  escreval("N�o h� imposto para o pa�s de codigo 1")
         caso 2
                  se((codigoP >= 1) E (codigoP <= 4)) entao
                       precoTotal <- (10 * (pesoP * 1000))
                       precoTotalProd <- precoTotal + (precoTotal * (15/100))
                  senao
                     se ((codigoP >= 5) E (codigoP <= 7)) entao
                        precoTotal <- (25 * (pesoP * 1000))
                        precoTotalProd <- precoTotal + (precoTotal * (15/100))
                     senao
                        se((codigoP >= 8) E (codigoP <= 10)) entao
                           precoTotal <- (35 * (pesoP * 1000))
                           precoTotalProd <- precoTotal + (precoTotal * (15/100))
                        fimse
                     fimse
                  fimse
                  escreval("Valor do imposto: ", precoTotal * (15/100))
         caso 3
                  se((codigoP >= 1) E (codigoP <= 4)) entao
                       precoTotal <- (10 * (pesoP * 1000))
                       precoTotalProd <- precoTotal + (precoTotal * (25/100))
                  senao
                     se ((codigoP >= 5) E (codigoP <= 7)) entao
                        precoTotal <- (25 * (pesoP * 1000))
                        precoTotalProd <- precoTotal + (precoTotal * (25/100))
                     senao
                        se((codigoP >= 8) E (codigoP <= 10)) entao
                           precoTotal <- (35 * (pesoP * 1000))
                           precoTotalProd <- precoTotal + (precoTotal * (25/100))
                        fimse
                     fimse
                  fimse
                  escreval("Valor do imposto: ", precoTotal * (25/100))
       fimescolha
       escreval("Peso do produto em gramas: ",pesoP * 1000," g.")
       escreval("Pre�o total do produto: R$: ",precoTotal)
       escreval("Pre�o total do produto + emposto: R$",precoTotalProd)
       

   senao
      escreval("Codigo do pa�s est� invalido")
   fimse
senao
   escreval("Codigo do produto est� invalido")
fimse

Fimalgoritmo