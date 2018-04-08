n1<-as.double(readline("Digite um número: "))
n2<-as.double(readline("Digite outro numero: "))
if(n1<n2){
  cat(n1,"é o menor número")
}else{
  if(n2<n1){
    cat(n2,"é o menor número")
  }else{
    cat("Os dois números são iguais")
  }
}