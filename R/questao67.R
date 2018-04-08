maiorh<-0
menorh<-1000
contH<-0
contM<-0
media<-0
p<-0
for(cont in 1:5){
  cat("Digite o genero: \n[1] Mulher\n[2] Homem")
  genero<-as.integer(readline("Opção: "))
  n<-as.double(readline("Digite a altura: "))
  if(isTRUE(all.equal(genero,2))){
    contH<-contH+1
  }else{
    p<-p+n
    contM<-contM+1
    
  }
  if(n>maiorh){
    maiorh<-n
  }
  if(n<menorh){
    menorh<-n
  }
  
}
cat("\nO número de homens é ",contH)
cat("\nA maior altura é ",maiorh)
cat("\nA menor altura é ",menorh)
media<-p/contM
cat("\nA média de altura das mulheres é ",media)