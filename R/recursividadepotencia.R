n1<-as.integer(readline("Digite a base: "))
n2<-as.integer(readline("Digite a pot�ncia: "))
pot<-function(b,p){
  if(isTRUE(all.equal(p,0))){
    return(1)
  }else{
    return(b * pot(b,(p-1)))
  }
}
potencia<-pot(n1,n2)
cat("\nO n�mero",n1,"elevado �",n2,"� igual a,",potencia)