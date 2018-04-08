options(digits=3)
N<-as.integer(readline("Digite um número inteiro: "))
if(N<0){
  cat("Não possui raiz")
}else{
  RAIZ<-sqrt(N)
}
  cat("A raiz quadrada de",N,"é",RAIZ)
    EXPO<-(N^2)
    cat("\n",N,"elevado ao quadrado é",EXPO)