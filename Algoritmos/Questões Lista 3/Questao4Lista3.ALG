Algoritmo "servicos"
// Disciplina   :
// Professor    :
// Descri��o   : Quest�o 4 lista 3
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017
procedimento mensagemMenu()
inicio
   escreval("")
   escreval(" --------------------------- M E N U ---------------------------- ")
   escreval("")
fimprocedimento

// Fun��o utilizada para pausar a tela por um momento, at� que seja apertado alguma tecla
procedimento pause()
inicio
   escreval("")
   escreva(" Tecle enter para continuar... ")
   leia(enter)
fimprocedimento
// Fun��o utilizada para verificar se na hora de adicionar um novo servi�o, o c�digo digitado j� existe
funcao codigoExistente(num1,num2 : inteiro) : logico
inicio
   se(num1 = num2) entao
      retorne verdadeiro
   senao
      retorne falso
   fimse
fimfuncao

tipo
   Servico = registro
      codigo : inteiro
      codigoCliente : inteiro
      numeroServico : inteiro
      valorServico : real
      descricao : caractere
      quantidadeServicos : inteiro
   fimregistro
Var
   // Se��o de Declara��es das vari�veis
   servicos : vetor[1..100] de Servico // Existem 4 servi�os, por�m pode ser que a empresa queira acrescentar mais, sendo assim, o vetor � de 100 posi��es
   servExecutados : vetor[1..30,1..3] de Servico // Vetor onde linhas representam o m�s e as colunas representam os servi�os executados
   opcao, i, j, k, contTrue, qtdServicos, qtd, resp, enter, dia, maxDia: inteiro
   flag : logico // Utilizado para verificar se j� existe servi�os executados durante o m�s

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   // Servi�os oferecidos pela empresa
   qtdServicos <- 4   // Quantidade de servi�os atuais: 4
   
//-----------------------------------------------------------------------------------------------
   maxDia <- 10 // Para informar quantos dias existem no m�s (Valor certo: 30), evita alterar em todos os "para"...
//-----------------------------------------------------------------------------------------------

   servicos[1].codigo <- 1
   servicos[1].descricao <- "Pintura";

   servicos[2].codigo <- 2
   servicos[2].descricao <- "Jardinagem";

   servicos[3].codigo <- 3
   servicos[3].descricao <- "Faxina";

   servicos[4].codigo <- 4
   servicos[4].descricao <- "Reforma em Geral";

   flag <- falso // Por enquanto falso, para marcar que n�o foi executado nenhum servi�o durante o m�s ainda.
   repita
      mensagemMenu()
      escreval(" 1  -  Cadastrar tipos de servi�os ")
      escreval(" 2  -  Cadastrar servi�os executados ")
      escreval(" 3  -  Mostrar os servi�os executados (Determinado dia)")
      escreval(" 4  -  Mostrar os servi�os executados (Intervalor de dias)")
      escreval(" 5  -  Mostrar um relat�rio geral")
      escreval(" 6  -  Sair")
      escreva(" Digite aqui: ")
      leia(opcao)

      limpatela
      escolha (opcao)
      caso 1
         k <- 0
         mensagemMenu()
         escreval(" Deseja ver os tipos de servi�os j� cadastrados ? ")
         escreval(" 1 - Sim")
         escreval(" 2 - N�o")
         escreva(" Digite aqui: ")
         leia(resp)
         limpatela
         mensagemMenu()
         se(resp = 1) entao // Se resp for igual a 1, ser� mostrado os servi�os j� cadastrados
            para i de 1 ate qtdServicos faca
               escreval(" C�digo: ",servicos[i].codigo,"  <-->":8,"Descri��o: ",servicos[i].descricao)
            fimpara
         fimse
         escreval("")
         escreval(" Voc� tem certeza que deseja acrescentar novos servi�os ?")
         escreval(" 1 - Sim")
         escreval(" 2 - N�o")
         escreva(" Digite aqui: ")
         leia(resp)
         limpatela
         se(resp = 1) entao
            mensagemMenu()
            escreva(" Quantos servi�os ser�o adicionados: ")
            leia(qtd)  // Verificando quantos novos servi�os ser�o cadastrados
            limpatela
            // Percorrendo o vetor de quantidade de servi�os atuais + 1 para que possa por os servi�os na posi��o correta sem que sobreescreva nenhum dado
            para i de (qtdServicos + 1) ate qtdServicos + qtd faca
               repita
                  escreval(" ------------ C A D A S T R O  D E  S E R V I � O S -------------")
                  escreval("")
                  contTrue <- 0 // Vari�vel utilizada para verificar se h� c�digo igual ao que foi digitado
                  escreva(" Digite o c�digo do servi�o: ")
                  leia(servicos[i].codigo)

                  para j de 1 ate qtdServicos + k faca
                     se(codigoExistente(servicos[i].codigo,servicos[j].codigo)) entao  // Chama fun��o que verifica se valores s�o iguais
                        contTrue <- contTrue + 1 // Caso seja igual, a vari�vel contTrue ser� incrementada
                     fimse
                  fimpara
                  se (contTrue <> 0) entao // Terminando diferente de zero, significa que h� valores iguais, ou seja, o c�digo n�o pode ser aceito.
                     escreval(" Erro: C�digo j� existente.")
                     escreval("")
                     escreval(" Deseja verificar os servi�os j� cadastrados ?")
                     escreval(" 1 - Sim")
                     escreval(" 2 - N�o")
                     escreva(" Digite aqui: ")
                     leia(resp)
                     escreval("")
                     escreval("")
                     se(resp = 1) entao
                        para j de 1 ate qtdServicos + k faca
                           escreval(" C�digo: ",servicos[j].codigo,"  <-->":8,"Descri��o: ",servicos[j].descricao)
                        fimpara
                     fimse
                  senao
                     escreval("")
                     escreval(" C�digo",servicos[i].codigo," inserido com sucesso.")
                     k <- k + 1 // guarda quantos servi�os j� foram inseridos at� ent�o
                  fimse
                  pause()
                  limpatela
               ate contTrue = 0   // Se contTrue for igual a 0, significa que n�o h� c�digo igual ao que foi digitado.
               escreval(" ------------ C A D A S T R O  D E  S E R V I � O S -------------")
               escreval("")
               escreval(" Informe a descri��o do servi�o que acabou de ser adicionado.")
               escreva(" Digite aqui: ")
               leia(servicos[i].descricao)
               limpatela
            fimpara
            qtdServicos <- qtdServicos + qtd
         fimse
      caso 2
         se (nao flag) entao
            flag <- verdadeiro  // Ao digitar a op��o 2, ser� atribuido verdadeiro a vari�vel flag para marcar que j� possui servi�os executados no m�s
            para dia de 1 ate maxDia faca
               repita
                  escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite quantos servi�os foram executados no dia",dia,": ")
                  leia(qtd)
                  limpatela
                  se qtd > 3 entao
                     escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                     escreval("")
                     escreval(" Erro: S� pode ser executado no m�ximo 3 servi�os por dia.")
                     pause()
                     limpatela
                  fimse

               ate (qtd <= 3)
               para i de 1 ate qtd faca
                  servExecutados[dia,i].quantidadeServicos <- qtd
                  escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite o n�mero do",i,"� servi�o do dia",dia,": ")
                  leia(servExecutados[dia,i].numeroServico)
                  escreva(" Digite o valor do",i,"� servi�o do dia",dia,": ")
                  leia(servExecutados[dia,i].valorServico)
                  escreva(" Digite o c�digo do cliente: ")
                  leia(servExecutados[dia,i].codigoCliente)
                  limpatela
                  repita
                     escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                     escreval("")
                     contTrue <- 0
                     escreva(" --> Digite o c�digo deste servi�o: ")
                     leia(servExecutados[dia,i].codigo)
                     para j de 1 ate qtdServicos faca
                        se(codigoExistente(servExecutados[dia,i].codigo,servicos[j].codigo)) entao
                           contTrue <- contTrue + 1
                        fimse
                     fimpara
                     se(contTrue = 0) entao
                        escreval(" Erro: C�digo Inv�lido.")
                        escreval("")
                        escreval(" Deseja verificar os servi�os j� cadastrados ?")
                        escreval(" 1 - Sim")
                        escreval(" 2 - N�o")
                        escreva(" Digite aqui: ")
                        leia(resp)
                        escreval("")
                        escreval("")
                        se(resp = 1) entao
                           para k de 1 ate qtdServicos faca
                              escreval(" C�digo: ",servicos[k].codigo,"  <-->":8,"Descri��o: ",servicos[k].descricao)
                           fimpara
                        fimse
                     senao
                        escreval("")
                        escreval(" C�digo",servExecutados[dia,i].codigo," inserido com sucesso.")
                     fimse
                     pause()
                     limpatela
                  ate contTrue <> 0
                  para j de 1 ate qtd faca
                     para k de 1 ate qtdServicos faca
                        se(servExecutados[dia,j].codigo = servicos[k].codigo) entao
                           servExecutados[dia,j].descricao <- servicos[k].descricao
                        fimse
                     fimpara
                  fimpara
               fimpara
            fimpara
         senao
            escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
            escreval("")
            escreval(" Servi�os executados j� foram inseridos")
            escreval(" Deseja sobreescrever algum servi�o: ")
            escreval(" 1 - Sim")
            escreval(" 2 - N�o")
            escreva(" Digite aqui: ")
            leia(resp)
            limpatela
            se(resp = 1) entao
               repita
                  escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreval(" Digite o dia no qual voc� deseja realizar a altera��o")
                  escreva(" Digite aqui: ")
                  leia(dia)
                  limpatela
               ate ((dia > 0) E (dia <= 30))

               repita
                  escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite quantos servi�os foram executados no dia",dia,": ")
                  leia(qtd)
                  limpatela
               ate (qtd <= 3)
               para i de 1 ate qtd faca
                  servExecutados[dia,i].quantidadeServicos <- qtd
                  escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite o n�mero do",i,"� servi�o do dia",dia,": ")
                  leia(servExecutados[dia,i].numeroServico)
                  escreva(" Digite o valor do",i,"� servi�o do dia",dia,": ")
                  leia(servExecutados[dia,i].valorServico)
                  escreva(" Digite o c�digo do cliente: ")
                  leia(servExecutados[dia,i].codigoCliente)
                  limpatela
                  repita
                     escreval(" ------------ S E R V I � O S  E X E C U T A D O S -------------")
                     escreval("")
                     contTrue <- 0
                     escreva(" ---> Digite o c�digo deste servi�o: ")
                     leia(servExecutados[dia,i].codigo)
                     para j de 1 ate qtdServicos faca
                        se(codigoExistente(servExecutados[dia,i].codigo,servicos[j].codigo)) entao
                           contTrue <- contTrue + 1
                        fimse
                     fimpara
                     se(contTrue = 0) entao
                        escreval(" Erro: C�digo Inv�lido.")
                        escreval("")
                        escreval(" Deseja verificar os servi�os j� cadastrados ?")
                        escreval(" 1 - Sim")
                        escreval(" 2 - N�o")
                        escreva(" Digite aqui: ")
                        leia(resp)
                        escreval("")
                        escreval("")
                        se(resp = 1) entao
                           para k de 1 ate qtdServicos faca
                              escreval(" C�digo: ",servicos[k].codigo,"  <-->":8,"Descri��o: ",servicos[k].descricao)
                           fimpara
                        fimse
                     senao
                        escreval("")
                        escreval(" C�digo",servExecutados[dia,i].codigo," inserido com sucesso.")
                     fimse
                     pause()
                     limpatela
                  ate contTrue <> 0
                  para j de 1 ate qtd faca
                     para k de 1 ate qtdServicos faca
                        se(servExecutados[dia,j].codigo = servicos[k].codigo) entao
                           servExecutados[dia,j].descricao <- servicos[k].descricao
                        fimse
                     fimpara
                  fimpara
               fimpara
            fimse
         fimse
      caso 3
         se (flag) entao
            repita
               escreval(" ------------ V I S U A L I Z A R  S E R V I � O S -------------")
               escreval("")
               escreva(" Digite o dia em que voc� deseja visualizar os servi�os: ")
               leia(dia)
               limpatela
            ate ((dia > 0) E (dia <= 30))
            se (servExecutados[dia,1].quantidadeServicos <> 0) entao
               escreval("")
               escreval("Dia",dia,":")
               escreval("")
               para j de 1 ate servExecutados[dia,1].quantidadeServicos faca
                  escreval("N�. Servi�o":14," Valor":8," C�d. Servi�o":15,"Descri��o":14,"C�d. Cliente")
                  escreval(servExecutados[dia,j].numeroServico:6,servExecutados[dia,j].valorServico:12,servExecutados[dia,j].codigo:11," ":8,servExecutados[dia,j].descricao:19,servExecutados[dia,j].codigoCliente)
                  escreval("---------------------------------------------------------------")
               fimpara
               pause()
               LIMPATELA
            senao
               escreval(" Sem servi�os executados no dia",dia,".")
               escreval("---------------------------------------------------------------")
               pause()
               limpatela
            fimse
         senao
            mensagemMenu()
            escreval(" Erro: Ainda n�o foi executado nenhum servi�o.")
            pause()
            limpatela
         fimse
      caso 4
         se (flag) entao
            repita
               escreval(" ------------ V I S U A L I Z A R  S E R V I � O S -------------")
               escreval("")
               escreval(" Digite um intervalo de dias.")
               escreva(" Dia inicial: ")
               leia(k)
               limpatela
            ate ((k > 0) E (k <= 30))
            repita
               escreval(" ------------ V I S U A L I Z A R  S E R V I � O S -------------")
               escreval("")
               escreval(" Digite um intervalo de dias")
               escreval(" Dia Inicial:",k)
               escreva(" Dia final: ")
               leia(qtd)
               limpatela
            ate ((qtd > 0) E (qtd <= 30))
            para i de k ate qtd faca
               se (servExecutados[i,1].quantidadeServicos <> 0) entao
                  escreval("")
                  escreval("Dia",i,":")
                  escreval("")
                  para j de 1 ate servExecutados[i,1].quantidadeServicos faca
                     escreval("N�. Servi�o":14," Valor":8," C�d. Servi�o":15,"Descri��o":14,"C�d. Cliente")
                     escreval(servExecutados[i,j].numeroServico:6,servExecutados[i,j].valorServico:12,servExecutados[i,j].codigo:11," ":8,servExecutados[i,j].descricao:19,servExecutados[i,j].codigoCliente)
                     escreval("---------------------------------------------------------------")
                  fimpara
               senao
                   escreval("Sem servi�os executados no dia",i,".")
                   escreval("---------------------------------------------------------------")
               fimse
            fimpara
            pause()
            LIMPATELA
         senao
            mensagemMenu()
            escreval(" Erro: Ainda n�o foi executado nenhum servi�o.")
            pause()
            limpatela
         fimse
      caso 5
         se (flag) entao
            para i de 1 ate maxDia faca
               se (servExecutados[i,1].quantidadeServicos <> 0) entao
                  escreval("")
                  escreval("Dia",i,":")
                  escreval("")
                  para j de 1 ate servExecutados[i,1].quantidadeServicos faca
                     escreval("N�. Servi�o":14," Valor":8," C�d. Servi�o":15,"Descri��o":14,"C�d. Cliente")
                     escreval(servExecutados[i,j].numeroServico:6,servExecutados[i,j].valorServico:12,servExecutados[i,j].codigo:11," ":8,servExecutados[i,j].descricao:19,servExecutados[i,j].codigoCliente)
                     escreval("---------------------------------------------------------------")
                  fimpara
               senao
                   escreval("Sem servi�os executados no dia",i,".")
                   escreval("---------------------------------------------------------------")
               fimse
            fimpara
            pause()
            LIMPATELA
         senao
            mensagemMenu()
            escreval(" Erro: Ainda n�o foi executado nenhum servi�o.")
            pause()
            limpatela
         fimse
      caso 6
         escreval(" Programa Finalizado...")
      outrocaso
         mensagemMenu()
         escreval(" Erro: Op��o Inv�lida.")
         pause()
         limpatela
      fimescolha
   ate opcao = 6

Fimalgoritmo