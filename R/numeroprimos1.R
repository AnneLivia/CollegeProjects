repeat{
n<-as.integer(readline("digite um número inteiro: "))

for(cont1 in 1:n){
  p<-0
  for(cont2 in 1:cont1){
    if((cont1%%cont2==0)){
      p<-p+1
    }
    }
    
  }
  if(p==2){
    cat("\n",n,"é um número primo")
  }else{
    cat("\n",n,"não é um número primo")
  }
   cat("\nPara sair do loop digite 0, caso contrário aperte enter")
   tecla<-readline()
      if(tecla==0){
      cat("Você saiu do programa")
      break
 } 
}