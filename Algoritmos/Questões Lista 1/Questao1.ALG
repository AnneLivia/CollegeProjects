Algoritmo "semnome"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descri��o   : 1 Elabore um algoritmo que receba do usu�rio uma quantidade de horas e transforme esse tempo em minutos e segundos.
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Se��o de Declara��es das vari�veis 
hora, minuto, segundo : inteiro
inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite um valor inteiro de hora: ")
leia(hora)

minuto <- hora * 60
segundo <- minuto * 60
escreval("Horas: ",hora)
escreval("Minutos: ",minuto)
escreval("Segundos: ",segundo)
Fimalgoritmo