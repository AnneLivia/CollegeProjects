quantfe<-0
quantma<-0
somaidade<-0
quantexpH<-0
quantH45<-0
quant35<-0
menoridade<-800
repeat{
  cat("\nObs: Para encerrar o programa digite 0 na idade")
  cat("\nSexo: [M] Masculino\n      [F] Feminino")
  cat("\nObs: letra maiuscula.")
  sexo<-readline("Digite a opção: ")
  experiencia<-readline("Você tem experiência no serviço? (S/N) ")
  idade<-as.integer(readline("Digite sua idade: "))
  if(isTRUE(all.equal(sexo,"F"))){
    quantfe<-quantfe+1
    if(isTRUE(all.equal(experiencia,"S"))){
      if(idade<menoridade){
        menoridade<-idade
      }
      if(idade<35){
        quant35<-quant35+1
      }
    }
  }else{
    quantma<-quantma+1
    if(isTRUE(all.equal(experiencia,"S"))){
      somaidade<-somaidade+idade
      quantexpH<-quantexpH+1
    }
    if(idade>45){
      quantH45<-quantH45+1
    }
  }
  if(isTRUE(all.equal(idade,0))){
    cat("\nNúmero de candidatos do sexo Feminino: ",quantfe)
    cat("\nNúmero de candidatos do sexo Masculino: ",quantma)
    idademedia<-somaidade/quantexpH
    cat("\nIdade média dos homens com experiência: ",idademedia)
    porchomens<-(quantH45/quantma)*100
    cat("\nPorcentagem de homens com mais de 45 anos: ",porchomens )
    cat("\nNúmero de mulheres com idade inferior a 35 anos e com experiência: ",quant35)
    cat("\nMenor idade entre as mulheres com experiência no serviço: ",menoridade)
    cat("\nO sistemas encerrou...")
    break
  }
}