Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/10/2017
Var
// Seção de Declarações das variáveis 
codigoP, codigoPais : inteiro
pesoP, precoTotal, precoTotalProd: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o codigo do produto: ")
leia(codigoP)
se((codigoP >= 1) E (codigoP <= 10)) entao
   escreval("Digite o peso do produto em kg: ")
   leia(pesoP)
   escreval("Digite o codigo do país de origem: ")
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
                  escreval("Não há imposto para o país de codigo 1")
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
       escreval("Preço total do produto: R$: ",precoTotal)
       escreval("Preço total do produto + emposto: R$",precoTotalProd)
       

   senao
      escreval("Codigo do país está invalido")
   fimse
senao
   escreval("Codigo do produto está invalido")
fimse

Fimalgoritmo