Algoritmo "Questao 2 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que retorna o fatorial de um número
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
funcao fatorial(num : inteiro) : inteiro
inicio
      se num = 1 entao
          retorne 1
      senao
          retorne num * fatorial(num - 1)
      fimse
fimfuncao

var
num : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite um valor inteiro e positivo: ")
leia(num)
se num >= 0 entao
   escreval(num,"! = ",fatorial(num))
senao
   escreval("Erro: Número negativo")
fimse

Fimalgoritmo