s<-0
for(p in 1:10){
  cat("Digite a",p,"idade: ")
  idade<-as.integer(readline())
  if(idade>=18){
    s<-s+1
  }
}
if(s==1){
  cat("Existe somente",s,"maior de idade")
  
}else{ 
  if(s==0){
    cat("Não existem pessoas maiores de idade dentre esses 10")
  
  }else{
    cat("Existem",s," pessoas maiores de idades")
  }
}