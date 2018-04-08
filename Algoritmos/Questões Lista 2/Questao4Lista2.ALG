Algoritmo "Questao 4 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Funções calculadoras
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

funcao soma(num1,num2 : real) : real
inicio
      retorne num1 + num2
fimfuncao

funcao mult(num1,num2 : real) : real
inicio
      retorne num1 * num2
fimfuncao

funcao divi(num1,num2 : real) : real
inicio
      retorne num1 / num2
fimfuncao

funcao sub(num1,num2 : real) : real
inicio
      retorne num1 - num2
fimfuncao

var
num1, num2 : real
opcao : inteiro
continuar : caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
repita
      limpatela
      escreval("-------------------- C A L C U L A D O R A -----------------------")
      escreval("---------------------------- MENU --------------------------------")
      escreval(" 1 - SOMA")
      escreval(" 2 - SUBTRAÇÃO")
      escreval(" 3 - MULTIPLICAÇÃO")
      escreval(" 4 - DIVISÃO")
      escreva(" Digite aqui: ")
      leia(opcao)
      limpatela
      escreval("Forneça os valores necessarios para o calcúlo:")
      escreva("Digite o primeiro valor: ")
      leia(num1)
      escreva("Digite o segundo valor: ")
      leia(num2)
      limpatela
      escreval("-------------------- C A L C U L A D O R A -----------------------")
      escolha opcao
          caso 1
                   escreva("SOMA -> ")
                   escreval( num1," +",num2," =",soma(num1,num2))
          
          caso 2
                   escreva("SUBTRAÇÃO -> ")
                   escreval( num1," -",num2," =",sub(num1,num2))
          
          caso 3
                   escreva("MULTIPLICAÇÃO -> ")
                   escreval( num1," x",num2," =",mult(num1,num2))
          
          caso 4
                   escreva("DIVISÃO -> ")
                   se num2 = 0 entao
                      escreval("Não há divisão por 0")
                   senao
                       escreval( num1," /",num2," =",divi(num1,num2))
                   fimse
          outrocaso
                   escreval("Opção invalida")
      fimescolha
      escreval("Deseja sair ? S/N")
      leia(continuar)
ate ((continuar = "S") ou (continuar = "s"))
escreval("Calculadora finalizada...")
Fimalgoritmo