casados<-0
solteiros<-0
somaidad<-0
quantViuvo<-0
quantseparados<-0
for(cont in 1:20){
  cat("Estado Cívil: \n[C] Casado\n[S] Solteiro\n[V] Viúvo\n[D] Desquitado ou separado")
  opt<-readline("Digite a opção: ")
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
cat("\nA quantidade de pessoas casadas dentre as 20 é ",casados)
cat("\nA quantidade de pessoas solteiras dentre as 20 é ",solteiros)
cat("\nA média das idades das pessoas viúvas é ",media)
cat("\nA porcetagem de separados ou desquitados em relação a todos os pesquisados é",porcentsep,"%")
