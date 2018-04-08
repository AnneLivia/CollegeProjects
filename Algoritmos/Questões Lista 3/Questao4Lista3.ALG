Algoritmo "servicos"
// Disciplina   :
// Professor    :
// Descrição   : Questão 4 lista 3
// Autor(a)    : Anne Livia da Fonseca Macedo
// Data atual  : --/11/2017
procedimento mensagemMenu()
inicio
   escreval("")
   escreval(" --------------------------- M E N U ---------------------------- ")
   escreval("")
fimprocedimento

// Função utilizada para pausar a tela por um momento, até que seja apertado alguma tecla
procedimento pause()
inicio
   escreval("")
   escreva(" Tecle enter para continuar... ")
   leia(enter)
fimprocedimento
// Função utilizada para verificar se na hora de adicionar um novo serviço, o código digitado já existe
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
   // Seção de Declarações das variáveis
   servicos : vetor[1..100] de Servico // Existem 4 serviços, porém pode ser que a empresa queira acrescentar mais, sendo assim, o vetor é de 100 posições
   servExecutados : vetor[1..30,1..3] de Servico // Vetor onde linhas representam o mês e as colunas representam os serviços executados
   opcao, i, j, k, contTrue, qtdServicos, qtd, resp, enter, dia, maxDia: inteiro
   flag : logico // Utilizado para verificar se já existe serviços executados durante o mês

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   // Serviços oferecidos pela empresa
   qtdServicos <- 4   // Quantidade de serviços atuais: 4
   
//-----------------------------------------------------------------------------------------------
   maxDia <- 10 // Para informar quantos dias existem no mês (Valor certo: 30), evita alterar em todos os "para"...
//-----------------------------------------------------------------------------------------------

   servicos[1].codigo <- 1
   servicos[1].descricao <- "Pintura";

   servicos[2].codigo <- 2
   servicos[2].descricao <- "Jardinagem";

   servicos[3].codigo <- 3
   servicos[3].descricao <- "Faxina";

   servicos[4].codigo <- 4
   servicos[4].descricao <- "Reforma em Geral";

   flag <- falso // Por enquanto falso, para marcar que não foi executado nenhum serviço durante o mês ainda.
   repita
      mensagemMenu()
      escreval(" 1  -  Cadastrar tipos de serviços ")
      escreval(" 2  -  Cadastrar serviços executados ")
      escreval(" 3  -  Mostrar os serviços executados (Determinado dia)")
      escreval(" 4  -  Mostrar os serviços executados (Intervalor de dias)")
      escreval(" 5  -  Mostrar um relatório geral")
      escreval(" 6  -  Sair")
      escreva(" Digite aqui: ")
      leia(opcao)

      limpatela
      escolha (opcao)
      caso 1
         k <- 0
         mensagemMenu()
         escreval(" Deseja ver os tipos de serviços já cadastrados ? ")
         escreval(" 1 - Sim")
         escreval(" 2 - Não")
         escreva(" Digite aqui: ")
         leia(resp)
         limpatela
         mensagemMenu()
         se(resp = 1) entao // Se resp for igual a 1, será mostrado os serviços já cadastrados
            para i de 1 ate qtdServicos faca
               escreval(" Código: ",servicos[i].codigo,"  <-->":8,"Descrição: ",servicos[i].descricao)
            fimpara
         fimse
         escreval("")
         escreval(" Você tem certeza que deseja acrescentar novos serviços ?")
         escreval(" 1 - Sim")
         escreval(" 2 - Não")
         escreva(" Digite aqui: ")
         leia(resp)
         limpatela
         se(resp = 1) entao
            mensagemMenu()
            escreva(" Quantos serviços serão adicionados: ")
            leia(qtd)  // Verificando quantos novos serviços serão cadastrados
            limpatela
            // Percorrendo o vetor de quantidade de serviços atuais + 1 para que possa por os serviços na posição correta sem que sobreescreva nenhum dado
            para i de (qtdServicos + 1) ate qtdServicos + qtd faca
               repita
                  escreval(" ------------ C A D A S T R O  D E  S E R V I Ç O S -------------")
                  escreval("")
                  contTrue <- 0 // Variável utilizada para verificar se há código igual ao que foi digitado
                  escreva(" Digite o código do serviço: ")
                  leia(servicos[i].codigo)

                  para j de 1 ate qtdServicos + k faca
                     se(codigoExistente(servicos[i].codigo,servicos[j].codigo)) entao  // Chama função que verifica se valores são iguais
                        contTrue <- contTrue + 1 // Caso seja igual, a variável contTrue será incrementada
                     fimse
                  fimpara
                  se (contTrue <> 0) entao // Terminando diferente de zero, significa que há valores iguais, ou seja, o código não pode ser aceito.
                     escreval(" Erro: Código já existente.")
                     escreval("")
                     escreval(" Deseja verificar os serviços já cadastrados ?")
                     escreval(" 1 - Sim")
                     escreval(" 2 - Não")
                     escreva(" Digite aqui: ")
                     leia(resp)
                     escreval("")
                     escreval("")
                     se(resp = 1) entao
                        para j de 1 ate qtdServicos + k faca
                           escreval(" Código: ",servicos[j].codigo,"  <-->":8,"Descrição: ",servicos[j].descricao)
                        fimpara
                     fimse
                  senao
                     escreval("")
                     escreval(" Código",servicos[i].codigo," inserido com sucesso.")
                     k <- k + 1 // guarda quantos serviços já foram inseridos até então
                  fimse
                  pause()
                  limpatela
               ate contTrue = 0   // Se contTrue for igual a 0, significa que não há código igual ao que foi digitado.
               escreval(" ------------ C A D A S T R O  D E  S E R V I Ç O S -------------")
               escreval("")
               escreval(" Informe a descrição do serviço que acabou de ser adicionado.")
               escreva(" Digite aqui: ")
               leia(servicos[i].descricao)
               limpatela
            fimpara
            qtdServicos <- qtdServicos + qtd
         fimse
      caso 2
         se (nao flag) entao
            flag <- verdadeiro  // Ao digitar a opção 2, será atribuido verdadeiro a variável flag para marcar que já possui serviços executados no mês
            para dia de 1 ate maxDia faca
               repita
                  escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite quantos serviços foram executados no dia",dia,": ")
                  leia(qtd)
                  limpatela
                  se qtd > 3 entao
                     escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                     escreval("")
                     escreval(" Erro: Só pode ser executado no máximo 3 serviços por dia.")
                     pause()
                     limpatela
                  fimse

               ate (qtd <= 3)
               para i de 1 ate qtd faca
                  servExecutados[dia,i].quantidadeServicos <- qtd
                  escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite o número do",i,"º serviço do dia",dia,": ")
                  leia(servExecutados[dia,i].numeroServico)
                  escreva(" Digite o valor do",i,"º serviço do dia",dia,": ")
                  leia(servExecutados[dia,i].valorServico)
                  escreva(" Digite o código do cliente: ")
                  leia(servExecutados[dia,i].codigoCliente)
                  limpatela
                  repita
                     escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                     escreval("")
                     contTrue <- 0
                     escreva(" --> Digite o código deste serviço: ")
                     leia(servExecutados[dia,i].codigo)
                     para j de 1 ate qtdServicos faca
                        se(codigoExistente(servExecutados[dia,i].codigo,servicos[j].codigo)) entao
                           contTrue <- contTrue + 1
                        fimse
                     fimpara
                     se(contTrue = 0) entao
                        escreval(" Erro: Código Inválido.")
                        escreval("")
                        escreval(" Deseja verificar os serviços já cadastrados ?")
                        escreval(" 1 - Sim")
                        escreval(" 2 - Não")
                        escreva(" Digite aqui: ")
                        leia(resp)
                        escreval("")
                        escreval("")
                        se(resp = 1) entao
                           para k de 1 ate qtdServicos faca
                              escreval(" Código: ",servicos[k].codigo,"  <-->":8,"Descrição: ",servicos[k].descricao)
                           fimpara
                        fimse
                     senao
                        escreval("")
                        escreval(" Código",servExecutados[dia,i].codigo," inserido com sucesso.")
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
            escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
            escreval("")
            escreval(" Serviços executados já foram inseridos")
            escreval(" Deseja sobreescrever algum serviço: ")
            escreval(" 1 - Sim")
            escreval(" 2 - Não")
            escreva(" Digite aqui: ")
            leia(resp)
            limpatela
            se(resp = 1) entao
               repita
                  escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreval(" Digite o dia no qual você deseja realizar a alteração")
                  escreva(" Digite aqui: ")
                  leia(dia)
                  limpatela
               ate ((dia > 0) E (dia <= 30))

               repita
                  escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite quantos serviços foram executados no dia",dia,": ")
                  leia(qtd)
                  limpatela
               ate (qtd <= 3)
               para i de 1 ate qtd faca
                  servExecutados[dia,i].quantidadeServicos <- qtd
                  escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                  escreval("")
                  escreva(" Digite o número do",i,"º serviço do dia",dia,": ")
                  leia(servExecutados[dia,i].numeroServico)
                  escreva(" Digite o valor do",i,"º serviço do dia",dia,": ")
                  leia(servExecutados[dia,i].valorServico)
                  escreva(" Digite o código do cliente: ")
                  leia(servExecutados[dia,i].codigoCliente)
                  limpatela
                  repita
                     escreval(" ------------ S E R V I Ç O S  E X E C U T A D O S -------------")
                     escreval("")
                     contTrue <- 0
                     escreva(" ---> Digite o código deste serviço: ")
                     leia(servExecutados[dia,i].codigo)
                     para j de 1 ate qtdServicos faca
                        se(codigoExistente(servExecutados[dia,i].codigo,servicos[j].codigo)) entao
                           contTrue <- contTrue + 1
                        fimse
                     fimpara
                     se(contTrue = 0) entao
                        escreval(" Erro: Código Inválido.")
                        escreval("")
                        escreval(" Deseja verificar os serviços já cadastrados ?")
                        escreval(" 1 - Sim")
                        escreval(" 2 - Não")
                        escreva(" Digite aqui: ")
                        leia(resp)
                        escreval("")
                        escreval("")
                        se(resp = 1) entao
                           para k de 1 ate qtdServicos faca
                              escreval(" Código: ",servicos[k].codigo,"  <-->":8,"Descrição: ",servicos[k].descricao)
                           fimpara
                        fimse
                     senao
                        escreval("")
                        escreval(" Código",servExecutados[dia,i].codigo," inserido com sucesso.")
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
               escreval(" ------------ V I S U A L I Z A R  S E R V I Ç O S -------------")
               escreval("")
               escreva(" Digite o dia em que você deseja visualizar os serviços: ")
               leia(dia)
               limpatela
            ate ((dia > 0) E (dia <= 30))
            se (servExecutados[dia,1].quantidadeServicos <> 0) entao
               escreval("")
               escreval("Dia",dia,":")
               escreval("")
               para j de 1 ate servExecutados[dia,1].quantidadeServicos faca
                  escreval("Nº. Serviço":14," Valor":8," Cód. Serviço":15,"Descrição":14,"Cód. Cliente")
                  escreval(servExecutados[dia,j].numeroServico:6,servExecutados[dia,j].valorServico:12,servExecutados[dia,j].codigo:11," ":8,servExecutados[dia,j].descricao:19,servExecutados[dia,j].codigoCliente)
                  escreval("---------------------------------------------------------------")
               fimpara
               pause()
               LIMPATELA
            senao
               escreval(" Sem serviços executados no dia",dia,".")
               escreval("---------------------------------------------------------------")
               pause()
               limpatela
            fimse
         senao
            mensagemMenu()
            escreval(" Erro: Ainda não foi executado nenhum serviço.")
            pause()
            limpatela
         fimse
      caso 4
         se (flag) entao
            repita
               escreval(" ------------ V I S U A L I Z A R  S E R V I Ç O S -------------")
               escreval("")
               escreval(" Digite um intervalo de dias.")
               escreva(" Dia inicial: ")
               leia(k)
               limpatela
            ate ((k > 0) E (k <= 30))
            repita
               escreval(" ------------ V I S U A L I Z A R  S E R V I Ç O S -------------")
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
                     escreval("Nº. Serviço":14," Valor":8," Cód. Serviço":15,"Descrição":14,"Cód. Cliente")
                     escreval(servExecutados[i,j].numeroServico:6,servExecutados[i,j].valorServico:12,servExecutados[i,j].codigo:11," ":8,servExecutados[i,j].descricao:19,servExecutados[i,j].codigoCliente)
                     escreval("---------------------------------------------------------------")
                  fimpara
               senao
                   escreval("Sem serviços executados no dia",i,".")
                   escreval("---------------------------------------------------------------")
               fimse
            fimpara
            pause()
            LIMPATELA
         senao
            mensagemMenu()
            escreval(" Erro: Ainda não foi executado nenhum serviço.")
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
                     escreval("Nº. Serviço":14," Valor":8," Cód. Serviço":15,"Descrição":14,"Cód. Cliente")
                     escreval(servExecutados[i,j].numeroServico:6,servExecutados[i,j].valorServico:12,servExecutados[i,j].codigo:11," ":8,servExecutados[i,j].descricao:19,servExecutados[i,j].codigoCliente)
                     escreval("---------------------------------------------------------------")
                  fimpara
               senao
                   escreval("Sem serviços executados no dia",i,".")
                   escreval("---------------------------------------------------------------")
               fimse
            fimpara
            pause()
            LIMPATELA
         senao
            mensagemMenu()
            escreval(" Erro: Ainda não foi executado nenhum serviço.")
            pause()
            limpatela
         fimse
      caso 6
         escreval(" Programa Finalizado...")
      outrocaso
         mensagemMenu()
         escreval(" Erro: Opção Inválida.")
         pause()
         limpatela
      fimescolha
   ate opcao = 6

Fimalgoritmo