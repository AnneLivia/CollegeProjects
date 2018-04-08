cat("--------------------------------Verificador de peso ideal------------------------------------")
cat("\nGenero: [1] Homem\n\t[2] Mulher")
genero<-as.integer(readline("Precione: "))
if(isTRUE(all.equal(genero,1))){
  altura<-as.double(readline("Digite sua altura: "))
  peso<-(72.7*altura)-58
  cat("\nSeu peso ideal é de",peso,"kg")
}else{
  altura<-as.double(readline("Digite sua altura: "))
  peso<-(62.1*altura)-44.7
  cat("\nSeu peso ideal é de",peso,"kg")
}