Algoritmo "livro"
// Disciplina   :
// Professor    :
// Descrição   :
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
// Seção de Declarações das variáveis 
book : Livro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o nome do livro: ")
leia(book.nome)
escreva("Digite o autor do livro: ")
leia(book.autor)
escreva("Digite o genêro do livro: ")
leia(book.genero)
escreva("Digite o número de páginas do livro: ")
leia(book.numeroPaginas)
escreva("Digite o ano de publicação do livro: ")
leia(book.anoPublicacao)
escreva("Digite o identificador númerico (ISBN): ")
leia(book.ISBN)

limpatela

escreval("Nome do livro: ",book.nome)
escreval("Autor: ",book.autor)
escreval("Genêro: ",book.genero)
escreval("Número de páginas: ",book.numeroPaginas)
escreval("Ano de publicação: ",book.anoPublicacao)
escreval("ISBN: ",book.ISBN)

Fimalgoritmo