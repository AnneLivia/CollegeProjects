repeat{
n<-as.integer(readline("digite um n�mero inteiro: "))

for(cont1 in 1:n){
  p<-0
  for(cont2 in 1:cont1){
    if((cont1%%cont2==0)){
      p<-p+1
    }
    }
    
  }
  if(p==2){
    cat("\n",n,"� um n�mero primo")
  }else{
    cat("\n",n,"n�o � um n�mero primo")
  }
   cat("\nPara sair do loop digite 0, caso contr�rio aperte enter")
   tecla<-readline()
      if(tecla==0){
      cat("Voc� saiu do programa")
      break
 } 
}