Algoritmo "Quest�o 12 Lista 1"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : Quest�o n�mero 12 da lista 1
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
i ,idade, opniao, qtdOtimo, qtdRegular, qtdBom: inteiro
mediaOtimo : real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

 para i de 1 ate 10 faca
      escreva("Digite a sua idade: ")
      leia(idade)
      limpatela
      escreval("Qual a sua opni�o em rela��o ao filme ? ")
      escreval("1 - REGULAR")
      escreval("2 - BOM")
      escreval("3 - OTIMO")
      leia(opniao)
      se opniao = 3 entao
         mediaOtimo <- mediaOtimo + idade
         qtdOtimo <- qtdOtimo + 1
      senao
          se(opniao = 1) entao
            qtdRegular <- qtdRegular + 1
          senao
             se(opniao = 2) entao
               qtdBom <- qtdBom + 1
             fimse
          fimse
      fimse
      limpatela
 fimpara
 se qtdOtimo <> 0 entao
    mediaOtimo <- mediaOtimo / qtdOtimo
    escreval("Media das idades das pessoas que responderam otimo: ",mediaOtimo)
 senao
    escreval("N�o se pode calcular a m�dia de pessoas que respondeream otimo")
 fimse
 escreval("Quantidade de pessoas que responderam regular: ",qtdRegular)
 escreval("Porcentagem de pessoas que responderam bom: ", qtdBom / 5 * 100,"%")
Fimalgoritmo