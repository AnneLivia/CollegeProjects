n1<-as.integer(readline("Digite o inicio: "))
n2<-as.integer(readline("Digite o fim: "))
for(cont in n1:n2){
  p<-0
  for(cont2 in 1:cont){
    primos<-cont%%cont2
    if(isTRUE(all.equal(primos,0))){
      p<-p+1
    }
  }
  if(isTRUE(all.equal(p,2))){
    cat("\nNúmero primo: ",cont)
  }else{
    cat("\nNúmero não primo: ",cont)
  }
}

