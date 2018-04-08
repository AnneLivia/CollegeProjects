repeat{
b<-as.double(readline("Digite o valor da base: "))
h<-as.double(readline("Digite a altura do triângulo: "))
if((b<=0)|(h<=0)){
  cat("valores fornecidos para altura e base do triângulo são invalidos")
  next
}else{
  area<-((b*h)/2)
  cat("\nA area do triângulo é ",area)
}
cat("\npara sair do programa digite sair, caso contrário aperte enter")
tecla<-readline()
if(isTRUE(all.equal(tecla, "sair"))){
  cat("Você saiu do programa")
  break
}
 

}