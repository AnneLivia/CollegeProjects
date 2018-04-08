quantcanal4<-0
quantcanal5<-0
quantcanal7<-0
quantcanal12<-0
repeat{
  cat("\n----------------------------P E S Q U I S A  D E  A U D I Ê N C I A----------------------------")
  cat("\nSelecione o número do canal e digite o número de domicilios conectados ao respectivo canal")
  cat("\nA cada atualização, o número de telespectadores anteriores soma-se com o número atual")
  cat("\nCanais de TV: \n[4] Canal 4\n[5] Canal 5\n[7] Canal 7\n[12] Canal 12\n[0] Para finalizar pesquisa")
  canal<-readline("Digite o número do canal: ")
  switch(canal,
         
        "4" = {
          cat("\nCanal 4:")
          canal4<-as.integer(readline("Quantas pessoas estão assistindo ao canal 4? "))
          quantcanal4<-canal4+quantcanal4
        },
        "5" = {
          cat("\nCanal 5:")
          canal5<-as.integer(readline("Quantas pessoas estão assistindo ao canal 5? "))
          quantcanal5<-canal5+quantcanal5
        },
        "7" = {
          cat("\nCanal 7:")
          canal7<-as.integer(readline("Quantas pessoas estão assistindo ao canal 7? "))
          quantcanal7<-canal7+quantcanal7
        },
        "12"= {
          cat("\nCanal 12:")
          canal12<-as.integer(readline("Quantas pessoas estão assistindo ao canal 12? "))
          quantcanal12<-canal12+quantcanal12
        },
        "0" = {
          audienciatotal<-quantcanal4+quantcanal5+quantcanal7+quantcanal12
          cat("\nA quantidade de casas conectadas a televisão é de: ",audienciatotal)
          porc4<-(quantcanal4/audienciatotal)*100
          porc5<-(quantcanal5/audienciatotal)*100
          porc7<-(quantcanal7/audienciatotal)*100
          porc12<-(quantcanal12/audienciatotal)*100
          cat("\nA porcentagem de audiência no canal 4 é de aproximadamente ",porc4,"%")
          cat("\nA porcentagem de audiência no canal 5 é de aproximadamente ",porc5,"%")
          cat("\nA porcentagem de audiência no canal 7 é de aproximadamente ",porc7,"%")
          cat("\nA porcentagem de audiência no canal 12 é de aproximadamente ",porc12,"%")
          cat("\nSistemas Finalizado")
          break
          
        },
         
         cat("\nCanal digitado não existe")
        )
  }