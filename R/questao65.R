salarioMin<-as.double(readline("Digite o valor do sal�rio min�mo: "))
horastra<-as.double(readline("Digite as horas trabalhada: "))
q<-0
depend<-as.integer(readline("Digite o n�mero de dependentes: "))
for(cont in 1:depend){
  q<-q+1
}
p<-0
horasextras<-as.double(readline("Digite a quantidade de horas extras trabalhadas: "))
for(cont2 in 1:horasextras){
  p<-p+1
}  
  valorhoraT<-salarioMin/10
  salariomes<-horastra*valorhoraT
  acrescimodepen<-q*78
  perc<-p*50
  percent50<-valorhoraT+(valorhoraT*perc/100)
  salariobruto<-salariomes+acrescimodepen+percent50
  cat("===================================Sal�rio Bruto======================================")
cat("\nSeu sal�rio bruto � de ",salariobruto,"R$")
 if(salariobruto<600){
   cat("\nVoc� est� isento do imposto de renda")
 }else{
   if((salariobruto>=600)&&(salariobruto<=900)){
     imposto<-(salariobruto*10/100)
     cat("\nImposto equivalente a 10% � de",imposto,"R$")
   }else{
     if(salariobruto>900){
       imposto<-(salariobruto*20/100)
       cat("\nImposto equivalente a 20% � de",imposto,"R$")
     }
   }
 }
cat("\n==================================Sal�rio liqu�do====================================")
salarioliq<-salariobruto-imposto
cat("\nSeu sal�rio liqu�do � equivalente a ",salarioliq)
if(salarioliq<=720){
   novosalario<-salarioliq+150
  cat("\nVoc� tem direito a uma gratifica��o de 150 reais\nSeu sal�rio agora � equivalente a: ",novosalario,"R$")
}else{
  novosalario<-salarioliq+75
  cat("\nVoc� tem direito a uma gratifica��o de 75 reais\nSeu sal�rio agora � equivalente a: ",novosalario,"R$")
}

