repeat{
b<-as.double(readline("Digite o valor da base: "))
h<-as.double(readline("Digite a altura do tri�ngulo: "))
if((b<=0)|(h<=0)){
  cat("valores fornecidos para altura e base do tri�ngulo s�o invalidos")
  next
}else{
  area<-((b*h)/2)
  cat("\nA area do tri�ngulo � ",area)
}
cat("\npara sair do programa digite sair, caso contr�rio aperte enter")
tecla<-readline()
if(isTRUE(all.equal(tecla, "sair"))){
  cat("Voc� saiu do programa")
  break
}
 

}