homens<-0
mulheres<-0
somapeso<-0
somaidade<-0
for(cont in 1:5){
  cat("\nPessoa nº:",cont)
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
cat("\nA Quantidade de homens é",homens)
cat("\nA Quantidade de mulheres é",mulheres)
cat("\nA média das idades dos homens é",mediaidade)
cat("\nA média dos pesos das mulheres é",mediapeso)