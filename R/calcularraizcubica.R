pare<-function(x){
  x<-as.integer(x)
  x<-x%%2
  return(x)
}
n<-as.integer(readline("Digite o intervalo: "))
soma<-0
for(cont in 1:n){
  resto<-pare(cont)
  if(isTRUE(all.equal(resto,0))){
    soma<-cont+soma
  }
}
cat("A soma é",soma)
