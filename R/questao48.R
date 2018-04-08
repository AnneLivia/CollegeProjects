soma<-0
quantnumeros<-0
repeat{
  n<-as.integer(readline("Digite um número: "))
  
  soma<-soma+n
  quantnumeros<-quantnumeros+1
  
tecla<-readline("Deseja continuar? (s/n): ")
if(isTRUE(all.equal(tecla,"n"))){
  cat("\nVocê saiu do programa")
  media<-soma/quantnumeros
  cat("\nA média dos números fornecidos é: ",media)
  break
}
  
  
}