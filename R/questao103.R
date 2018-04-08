quantf<-0
quantm<-0
maioridade<-0
quantf2<-0
repeat{
  cat("\nPara encerrar o sistema, digitar -1 na pergunta referente a idade.")
  cat("\nQual seu genero: \n[F] Feminino\n[M] Masculino")
  genero<-readline("Digite aqui: ")
  cat("\nQual a cor dos seus olhos: \n[A] Azuis\n[V] verdes\n[C] Castanhos")
  cordosolhos<-readline("Digite aqui: ")
  cat("\nQual a cor dos seus cabelos: \n[L] loiro\n[C] castanho\n[P] preto")
  cordoscabelos<-readline("Digite aqui: ")
  idade<-as.integer(readline("Digite sua idade: "))
  if(isTRUE(all.equal(genero,"F"))){
    quantf<-quantf+1
    if(idade>maioridade){
      maioridade<-idade
    }
    if((idade>=18)&&(idade<=25)){
      if(isTRUE(all.equal(cordosolhos,"V"))){
        if(isTRUE(all.equal(cordoscabelos,"L"))){
          quantf2<-quantf2+1
        }
      }
    }
    
  }else{
    quantm<-quantm+1
    if(idade>maioridade){
      maioridade<-idade
    }
  }
  if(isTRUE(all.equal(idade,(-1)))){
    cat("\nA maior idade dos habitantes é",maioridade)
    porc<-(quantf2/quantf)*100
    cat("\nA porcentagem de pessoas do genero feminino com olhos verdes,cabelos loiros é",porc)
    break
  }
  
  
  
  
}