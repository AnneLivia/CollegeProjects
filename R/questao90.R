quantcanal4<-0
quantcanal5<-0
quantcanal7<-0
quantcanal12<-0
repeat{
  cat("\n----------------------------P E S Q U I S A  D E  A U D I � N C I A----------------------------")
  cat("\nSelecione o n�mero do canal e digite o n�mero de domicilios conectados ao respectivo canal")
  cat("\nA cada atualiza��o, o n�mero de telespectadores anteriores soma-se com o n�mero atual")
  cat("\nCanais de TV: \n[4] Canal 4\n[5] Canal 5\n[7] Canal 7\n[12] Canal 12\n[0] Para finalizar pesquisa")
  canal<-readline("Digite o n�mero do canal: ")
  switch(canal,
         
        "4" = {
          cat("\nCanal 4:")
          canal4<-as.integer(readline("Quantas pessoas est�o assistindo ao canal 4? "))
          quantcanal4<-canal4+quantcanal4
        },
        "5" = {
          cat("\nCanal 5:")
          canal5<-as.integer(readline("Quantas pessoas est�o assistindo ao canal 5? "))
          quantcanal5<-canal5+quantcanal5
        },
        "7" = {
          cat("\nCanal 7:")
          canal7<-as.integer(readline("Quantas pessoas est�o assistindo ao canal 7? "))
          quantcanal7<-canal7+quantcanal7
        },
        "12"= {
          cat("\nCanal 12:")
          canal12<-as.integer(readline("Quantas pessoas est�o assistindo ao canal 12? "))
          quantcanal12<-canal12+quantcanal12
        },
        "0" = {
          audienciatotal<-quantcanal4+quantcanal5+quantcanal7+quantcanal12
          cat("\nA quantidade de casas conectadas a televis�o � de: ",audienciatotal)
          porc4<-(quantcanal4/audienciatotal)*100
          porc5<-(quantcanal5/audienciatotal)*100
          porc7<-(quantcanal7/audienciatotal)*100
          porc12<-(quantcanal12/audienciatotal)*100
          cat("\nA porcentagem de audi�ncia no canal 4 � de aproximadamente ",porc4,"%")
          cat("\nA porcentagem de audi�ncia no canal 5 � de aproximadamente ",porc5,"%")
          cat("\nA porcentagem de audi�ncia no canal 7 � de aproximadamente ",porc7,"%")
          cat("\nA porcentagem de audi�ncia no canal 12 � de aproximadamente ",porc12,"%")
          cat("\nSistemas Finalizado")
          break
          
        },
         
         cat("\nCanal digitado n�o existe")
        )
  }