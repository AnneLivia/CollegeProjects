n1<-as.double(readline("Digite um n�mero: "))
n2<-as.double(readline("Digite outro numero: "))
if(n1<n2){
  cat(n1,"� o menor n�mero")
}else{
  if(n2<n1){
    cat(n2,"� o menor n�mero")
  }else{
    cat("Os dois n�meros s�o iguais")
  }
}