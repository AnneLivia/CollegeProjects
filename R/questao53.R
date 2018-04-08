c<-0
for(cont in 1:5){
n<-as.integer(readline("Digite um número: "))
if(n<0){
  c<-c+1
}
}
if(isTRUE(all.equal(c,0))){
  cat("Não existe nenhum número negativo")
}else{
  if(isTRUE(all.equal(c,1))){
    cat("Existe somente 1 número negativo")
  }else{
  cat("Existem",c,"números negativos")
  }
}