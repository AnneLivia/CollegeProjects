n1<-as.integer(readline("Digite um n�mero "))
for(p in 1:n1){
  l<-0
  for(s in 1:p){
    divi<-p%%s
    if(divi==0){
      l<-l+1
    }
  }
}
  if(l==2){
    cat("\nesse � um n�mero primo",n1)
  }else{
    cat("\nesse n�o � um n�mero primo",n1)
  }
 

