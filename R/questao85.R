sim<-0
nao<-0
fsim<-0
homens<-0
mnao<-0
for(cont in 1:10){
  cat("OBS: N�o esque�a de ativar o capslock\n")
  cat("Qual seu sexo ? \n[F] Feminino\n[M] Masculino")
  genero<-readline("Digite aqui: ")
  cat("Voc� gostou do novo produto lan�ado? \n[S] Sim\n[N] N�o")
  opniao<-readline("Digite aqui: ")
  if(isTRUE(all.equal(opniao,"S"))){
    sim<-sim+1
    if(isTRUE(all.equal(genero,"F"))){
      fsim<-fsim+1
    }
  }else{
    nao<-nao+1
    if(isTRUE(all.equal(genero,"M"))){
      mnao<-mnao+1
    }
  }
  if(isTRUE(all.equal(genero,"M"))){
    homens<-homens+1
  }
}
cat("\nA quantidade de pessoas que responderam sim foram: ",sim)
cat("\nA quantidade de pessoas que responderam n�o foram: ",nao)
cat("\nA quantidade de Mulheres que responderam sim foram: ",fsim)
porc<-(mnao/homens)*100
cat("\nA porcentagem de homens que responderam n�o entre os",homens,"homens analizados foram: ",porc,"%")