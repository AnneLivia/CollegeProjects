Algoritmo "livro"
// Disciplina   :
// Professor    :
// Descri��o   :
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017

tipo
Livro = registro
   nome : caractere
   autor : caractere
   genero : caractere
   numeroPaginas : inteiro
   anoPublicacao : inteiro
   ISBN : caractere
fimregistro
Var
// Se��o de Declara��es das vari�veis 
book : Livro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite o nome do livro: ")
leia(book.nome)
escreva("Digite o autor do livro: ")
leia(book.autor)
escreva("Digite o gen�ro do livro: ")
leia(book.genero)
escreva("Digite o n�mero de p�ginas do livro: ")
leia(book.numeroPaginas)
escreva("Digite o ano de publica��o do livro: ")
leia(book.anoPublicacao)
escreva("Digite o identificador n�merico (ISBN): ")
leia(book.ISBN)

limpatela

escreval("Nome do livro: ",book.nome)
escreval("Autor: ",book.autor)
escreval("Gen�ro: ",book.genero)
escreval("N�mero de p�ginas: ",book.numeroPaginas)
escreval("Ano de publica��o: ",book.anoPublicacao)
escreval("ISBN: ",book.ISBN)

Fimalgoritmo