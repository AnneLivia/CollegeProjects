equa2g<-function(a,b,c){
  a<-as.integer(a)
  b<-as.integer(b)
  c<-as.integer(c)
  a<-2
  b<-4
  c<-7
  baskara<-(b^2)-4*(a*c)
  cat("Valor de Delta: ",baskara)
  if((isTRUE(all.equal(baskara,0)))||(baskara<0)){
    cat("\nA equação não possui raizes reais")
  }else{
  raiz1<-(-(b)+sqrt(baskara))/(2*a)
  raiz2<-(-(b)-sqrt(baskara))/(2*a)
  cat("\nRaiz 1:",raiz1)
  cat("\nRaiz 2:",raiz2)
  return(equa2g)
  }
}
resp<-equa2g(2,4,-5)
cat(resp)

