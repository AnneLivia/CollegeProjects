Algoritmo "chequeBancario"
// Disciplina   :
// Professor    :
// Descri��o   :
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017

tipo
   Cheque = registro
          localEmissao : caractere
          assinatura : caractere
          nomeBeneficiario : caractere
          banco : caractere
          agencia : inteiro
          conta : inteiro
          valor : real
          dia, mes, ano : inteiro
   fimregistro
Var
// Se��o de Declara��es das vari�veis 
   cheque : Cheque
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval(" ---------------- C H E Q U E  B A N C � R I O ------------------")
   escreval
   escreva(" Digite o local de Emiss�o: ")
   leia(cheque.localEmissao)
   escreva(" Digite a sua assinatura: ")
   leia(cheque.assinatura)
   escreva(" Digite o nome do benefici�rio: ")
   leia(cheque.nomeBeneficiario)
   escreva(" Digite o nome banco: ")
   leia(cheque.banco)
   escreva(" Digite o n�mero da agencia: ")
   leia(cheque.agencia)
   escreva(" Digite o n�mero da conta: ")
   leia(cheque.conta)
   escreva(" Digite o valor: ")
   leia(cheque.valor)
   escreva(" Digite o dia da emiss�o: ")
   leia(cheque.dia)
   escreva(" Digite o m�s da emiss�o: ")
   leia(cheque.mes)
   escreva(" Digite o ano da emiss�o: ")
   leia(cheque.ano)

   
   limpatela
   
   escreval("----------------- C H E Q U E  B A N C � R I O -------------------")
   escreval
   escreval(" Local de Emiss�o: ",cheque.localEmissao)
   escreval(" Assinatura: ", cheque.assinatura)
   escreval(" Benefici�rio: ",cheque.nomeBeneficiario)
   escreval(" Banco: ",cheque.banco)
   escreval(" Ag�ncia: ",cheque.agencia)
   escreval(" Conta: ",cheque.conta)
   escreval(" Valor: R$ ",cheque.valor)
   escreval(" Data de emiss�o: ",cheque.dia," /",cheque.mes," /",cheque.ano)
   escreval
escreval("------------------------------------------------------------------")
Fimalgoritmo