c<-0
for(cont in 1:5){
n<-as.integer(readline("Digite um n�mero: "))
if(n<0){
  c<-c+1
}
}
if(isTRUE(all.equal(c,0))){
  cat("N�o existe nenhum n�mero negativo")
}else{
  if(isTRUE(all.equal(c,1))){
    cat("Existe somente 1 n�mero negativo")
  }else{
  cat("Existem",c,"n�meros negativos")
  }
}