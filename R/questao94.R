casados<-0
solteiros<-0
somaidad<-0
quantViuvo<-0
quantseparados<-0
for(cont in 1:20){
  cat("Estado C�vil: \n[C] Casado\n[S] Solteiro\n[V] Vi�vo\n[D] Desquitado ou separado")
  opt<-readline("Digite a op��o: ")
  idade<-as.integer(readline("Digite sua idade: "))
  if(isTRUE(all.equal(opt,"C"))){
    casados<-casados+1
  }else{
    if(isTRUE(all.equal(opt,"S"))){
      solteiros<-solteiros+1
    }else{
      if(isTRUE(all.equal(opt,"V"))){
        somaidad<-idade+somaidad
        quantViuvo<-quantViuvo+1
      }else{
        quantseparados<-quantseparados+1
      }
    }
  }
}
media<-somaidad/quantViuvo
porcentsep<-((quantseparados/20)*100)
cat("\nA quantidade de pessoas casadas dentre as 20 � ",casados)
cat("\nA quantidade de pessoas solteiras dentre as 20 � ",solteiros)
cat("\nA m�dia das idades das pessoas vi�vas � ",media)
cat("\nA porcetagem de separados ou desquitados em rela��o a todos os pesquisados �",porcentsep,"%")
