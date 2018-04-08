m<-0
mascmortos<-0
quant<-0
nasci<-as.integer(readline("Quantas crianças nasceram nesse periodo ? "))
repeat{
  cat("\nQual o sexo da criança morta: \n[M] masculino\n[F] feminino")
  genero<-readline("Digite aqui: ")
  m<-m+1
  if(isTRUE(all.equal(genero,"M"))){
    mascmortos<-mascmortos+1
  }else{
    if(isTRUE(all.equal(genero,"x"))){
      porc<-(m/nasci)*100
      porcm<-(mascmortos/m)*100
      cat("\nA porcentagem de crianças mortas no periodo é: ",porc,"%")
      cat("\nA porcentagem de crianças masculinas mortas no periodo é: ",porcm,"%")
      cat("\nA quantidade de crianças que viveram dois anos ou menos é: ",quant,"%")
      break
    }
  }
  tempodevida<-as.integer(readline("Quanto tempo essa criança viveu? "))
  if(tempodevida<=2){
    quant<-quant+1
  }

  }
  
