Algoritmo "semnome"
// Disciplina   : [ALGORITMOS]
// Professor    : YOMARA PINHEIRO PIRES
// Descrição   : 1 Elabore um algoritmo que receba do usuário uma quantidade de horas e transforme esse tempo em minutos e segundos.
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :
Var
// Seção de Declarações das variáveis 
hora, minuto, segundo : inteiro
inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite um valor inteiro de hora: ")
leia(hora)

minuto <- hora * 60
segundo <- minuto * 60
escreval("Horas: ",hora)
escreval("Minutos: ",minuto)
escreval("Segundos: ",segundo)
Fimalgoritmo