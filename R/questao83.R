pessoas50<-0
mediah<-0
repeat{
  cat("\nPara encerrar o programa basta digitar idade e altura < ou = 0")
  idade<-as.integer(readline("Digite sua idade: "))
  altura<-as.double(readline("Digite sua altura: "))
  if(idade>50){
    pessoas50<-pessoas50+1
    mediah<-mediah+altura
  }else if(idade<=0){
    if(isTRUE(all.equal(pessoas50,1))){
      cat("Existe somente 1 pessoa com mais de 50 anos de idade")
      cat("A altura dessa pessoa � ",mediah)
    }else{
      if(isTRUE(all.equal(pessoas50,0))){
        cat("\nN�o existe n�nguem com mais de 50 anos de idade")
      }else{
      mediah2<-mediah/pessoas50
      cat("\nA quantidade de pessoas com mais de 50 anos �",pessoas50)
    cat("\nA m�dia de altura das pessoas com mais de 50 anos �",mediah2)
    }
    cat("\nPROGRAMA ENCERRADO")
    break
    }
  }
}