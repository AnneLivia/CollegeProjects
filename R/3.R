options(digits=3)
N<-as.integer(readline("Digite um n�mero inteiro: "))
if(N<0){
  cat("N�o possui raiz")
}else{
  RAIZ<-sqrt(N)
}
  cat("A raiz quadrada de",N,"�",RAIZ)
    EXPO<-(N^2)
    cat("\n",N,"elevado ao quadrado �",EXPO)