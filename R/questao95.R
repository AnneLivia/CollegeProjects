homens<-0
mulheres<-0
somapeso<-0
somaidade<-0
for(cont in 1:5){
  cat("\nPessoa n�:",cont)
  idade<-as.integer(readline("Digite sua idade: "))
  peso<-as.double(readline("Digite seu peso: "))
  sexo<-readline("Digite seu sexo, (m/f): ")
  if(isTRUE(all.equal(sexo,"m"))){
    homens<-homens+1
    somaidade<-somaidade+idade
  }else{
    mulheres<-mulheres+1
    somapeso<-somapeso+peso
  }
}
mediaidade<-somaidade/homens
mediapeso<-somapeso/mulheres
cat("\nA Quantidade de homens �",homens)
cat("\nA Quantidade de mulheres �",mulheres)
cat("\nA m�dia das idades dos homens �",mediaidade)
cat("\nA m�dia dos pesos das mulheres �",mediapeso)