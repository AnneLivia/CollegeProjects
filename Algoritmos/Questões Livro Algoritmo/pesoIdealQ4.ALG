Algoritmo "Peso ideal questao 4"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor    :
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Anne Livia da F. Macedo
// Data atual  : 09/10/2017
Var
altura, pesoIdeal : real
sexo : caractere

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

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