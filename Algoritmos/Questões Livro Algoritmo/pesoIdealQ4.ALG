Algoritmo "Peso ideal questao 4"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor    :
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
altura, pesoIdeal : real
sexo : caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite sua altura: ")
leia(altura)
escreval("Qual seu sexo: ")
escreval("F - feminino.")
escreval("M - masculino.")
escreval("Digite aqui: ")
leia(sexo)

se ((sexo = "m") ou (sexo = "M")) entao
   pesoIdeal <- ((72.7  * altura) - 58)
senao
   se((sexo = "f") ou (sexo = "F")) entao
      pesoIdeal <- ((62.1 * altura) - 44.7)
   fimse
fimse

escreval("Seu peso ideal: ",pesoIdeal)

Fimalgoritmo