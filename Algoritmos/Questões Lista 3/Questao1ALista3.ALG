Algoritmo "chequeBancario"
// Disciplina   :
// Professor    :
// Descrição   :
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
// Seção de Declarações das variáveis 
   cheque : Cheque
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval(" ---------------- C H E Q U E  B A N C Á R I O ------------------")
   escreval
   escreva(" Digite o local de Emissão: ")
   leia(cheque.localEmissao)
   escreva(" Digite a sua assinatura: ")
   leia(cheque.assinatura)
   escreva(" Digite o nome do beneficiário: ")
   leia(cheque.nomeBeneficiario)
   escreva(" Digite o nome banco: ")
   leia(cheque.banco)
   escreva(" Digite o número da agencia: ")
   leia(cheque.agencia)
   escreva(" Digite o número da conta: ")
   leia(cheque.conta)
   escreva(" Digite o valor: ")
   leia(cheque.valor)
   escreva(" Digite o dia da emissão: ")
   leia(cheque.dia)
   escreva(" Digite o mês da emissão: ")
   leia(cheque.mes)
   escreva(" Digite o ano da emissão: ")
   leia(cheque.ano)

   
   limpatela
   
   escreval("----------------- C H E Q U E  B A N C Á R I O -------------------")
   escreval
   escreval(" Local de Emissão: ",cheque.localEmissao)
   escreval(" Assinatura: ", cheque.assinatura)
   escreval(" Beneficiário: ",cheque.nomeBeneficiario)
   escreval(" Banco: ",cheque.banco)
   escreval(" Agência: ",cheque.agencia)
   escreval(" Conta: ",cheque.conta)
   escreval(" Valor: R$ ",cheque.valor)
   escreval(" Data de emissão: ",cheque.dia," /",cheque.mes," /",cheque.ano)
   escreval
escreval("------------------------------------------------------------------")
Fimalgoritmo