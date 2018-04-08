pessoas1<-0
pessoas2<-0
pessoas3<-0
mediaidade<-0
for(cont in 1:5){
  cat ("\n====================== C L A S S I F I C A Ç Ã O  D O  C I N E M A ======================")
  nome<-readline("Qual o seu nome? ")
  cat("\n > Olá",nome,", qual é a sua idade? ")
  idade<-as.integer(readline("Digite aqui: "))
  cat("\nQual classificação você gostaria de dar ao filme: ")
  cat("\nClassificação:  [1] Regular\n\t\t[2] Bom\n\t\t[3] Ótimo")
  classif<-as.integer(readline("Digite o número correspondente aqui: "))
  if(isTRUE(all.equal(classif,3))){
    mediaidade<-mediaidade+idade
    pessoas3<-pessoas3+1
  }else if(isTRUE(all.equal(classif,1))){
    pessoas1<-pessoas1+1
  }else{
    pessoas2<-pessoas2+1
  }
  
  
}
 mediaotimo<-mediaidade/pessoas3
 quantidade<-pessoas1+pessoas2+pessoas3
 porcentagem<-(pessoas2/quantidade)*100
  cat("\nAnalize comcluida: ")
  if(isTRUE(all.equal(pessoas3,0))){
    cat("\nNínguém classificou o filme como ótimo")
  }else if(isTRUE(all.equal(pessoas3,1))){
    cat("\nSomente uma pessoa classificou o filme como ótimo")
  }else{
    cat("\nA média de pessoas que classificaram o filme como ótimo é",mediaotimo)
  }
  cat("\nA quantidade de pessoas que clasificaram o filme como regular foram: ",pessoas1)
  cat("\nA porcentagem de pessoas que classificaram o filme como bom foram: ",porcentagem,"%")