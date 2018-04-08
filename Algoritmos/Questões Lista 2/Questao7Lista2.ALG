Algoritmo "Questao 7 lista 2"
// Disciplina   : [Algoritmos]
// Professor    : YOMARA	PINHEIRO	PIRES
// Descrição   : Função que informa a categória do nadador
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  :

procedimento categoria(idade: inteiro)
inicio
      se ((idade >= 5) e (idade <= 7)) entao
         escreval("Infantil A")
      senao
         se ((idade >= 8) e (idade <= 10)) entao
            escreval("Infantil B")
         senao
            se ((idade >= 11) e (idade <= 13)) entao
                escreval("Juvenil A")
            senao
                se((idade >= 14) e (idade <= 17)) entao
                   escreval("Juvenil B")
                senao
                   se (idade >= 18) entao
                      escreval("Adulto")
                   senao
                      escreval("Idade informada fora dos paramêtros das categória")
                   fimse
                fimse
            fimse
         fimse
      fimse
fimprocedimento
Var
// Seção de Declarações das variáveis 
idade : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a idade do nadador(a): ")
leia(idade)
categoria(idade)

Fimalgoritmo