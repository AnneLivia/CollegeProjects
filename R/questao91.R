idademaior50<-0
soma10e20<-0
quant10e20<-0
pessoas40<-0
for(cont in 1:15){
  cat("\nPesquisa com pessoa nº: ",cont)
  idade<-as.integer(readline("Qual a sua idade? "))
  altura<-as.double(readline("Qual a sua altura? "))
  peso<-as.double(readline("Qual o seu peso? "))
  if(idade>50){
    idademaior50<-idademaior50+1
  }else{
    if((idade>=10)&&(idade<=20)){
      soma10e20<-altura+soma10e20
      quant10e20<-quant10e20+1
    }
  }
  if(peso<40){
    pessoas40<-pessoas40+1
  }
}
 mediaaltura<-soma10e20/quant10e20
 porcpeso<-(pessoas40/15)*100
 cat("\nQuantidade de pessoas com idade superior a 50 anos: ",idademaior50)
 cat("\nMédia das alturas das pessoas entre 10 e 20 anos de idade: ",mediaaltura)
 cat("\nPorcentagem de pessoas com peso inferior que 40 quilos: ",porcpeso,"%")