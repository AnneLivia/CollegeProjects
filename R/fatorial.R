repeat{
n<-as.integer(readline("Digite um número: "))
fat<-1
for(contador in n:1){
  fat<-fat*contador
}
cat("O valor de",n,"fatorial é",fat)
cat("\nSe desejar sair do programa, digite (sair), caso contrário, aperte a tecla enter.")
tecla<-readline()
if(tecla == "sair"){
  break
}
  
}