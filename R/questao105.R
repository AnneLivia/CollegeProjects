m<-0
mascmortos<-0
quant<-0
nasci<-as.integer(readline("Quantas crian�as nasceram nesse periodo ? "))
repeat{
  cat("\nQual o sexo da crian�a morta: \n[M] masculino\n[F] feminino")
  genero<-readline("Digite aqui: ")
  m<-m+1
  if(isTRUE(all.equal(genero,"M"))){
    mascmortos<-mascmortos+1
  }else{
    if(isTRUE(all.equal(genero,"x"))){
      porc<-(m/nasci)*100
      porcm<-(mascmortos/m)*100
      cat("\nA porcentagem de crian�as mortas no periodo �: ",porc,"%")
      cat("\nA porcentagem de crian�as masculinas mortas no periodo �: ",porcm,"%")
      cat("\nA quantidade de crian�as que viveram dois anos ou menos �: ",quant,"%")
      break
    }
  }
  tempodevida<-as.integer(readline("Quanto tempo essa crian�a viveu? "))
  if(tempodevida<=2){
    quant<-quant+1
  }

  }
  
