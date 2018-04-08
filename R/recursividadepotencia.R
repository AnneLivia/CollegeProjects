n1<-as.integer(readline("Digite a base: "))
n2<-as.integer(readline("Digite a potência: "))
pot<-function(b,p){
  if(isTRUE(all.equal(p,0))){
    return(1)
  }else{
    return(b * pot(b,(p-1)))
  }
}
potencia<-pot(n1,n2)
cat("\nO número",n1,"elevado á",n2,"é igual a,",potencia)