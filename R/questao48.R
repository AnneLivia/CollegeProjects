soma<-0
quantnumeros<-0
repeat{
  n<-as.integer(readline("Digite um n�mero: "))
  
  soma<-soma+n
  quantnumeros<-quantnumeros+1
  
tecla<-readline("Deseja continuar? (s/n): ")
if(isTRUE(all.equal(tecla,"n"))){
  cat("\nVoc� saiu do programa")
  media<-soma/quantnumeros
  cat("\nA m�dia dos n�meros fornecidos �: ",media)
  break
}
  
  
}