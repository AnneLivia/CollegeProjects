repeat{
n<-as.integer(readline("Digite um n�mero: "))
fat<-1
for(contador in n:1){
  fat<-fat*contador
}
cat("O valor de",n,"fatorial �",fat)
cat("\nSe desejar sair do programa, digite (sair), caso contr�rio, aperte a tecla enter.")
tecla<-readline()
if(tecla == "sair"){
  break
}
  
}