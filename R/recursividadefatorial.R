fat<-function(x){
  if(isTRUE(all.equal(x,0))){
    return(1)
  }else{
    return(x*fat(x-1))
  }
}
n<-as.integer(readline("Digite o valor: "))
fatorial<-fat(n)
cat("O fatorial de",n,"é",fatorial)