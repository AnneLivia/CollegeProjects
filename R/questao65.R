salarioMin<-as.double(readline("Digite o valor do salário minímo: "))
horastra<-as.double(readline("Digite as horas trabalhada: "))
q<-0
depend<-as.integer(readline("Digite o número de dependentes: "))
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
  cat("===================================Salário Bruto======================================")
cat("\nSeu salário bruto é de ",salariobruto,"R$")
 if(salariobruto<600){
   cat("\nVocê está isento do imposto de renda")
 }else{
   if((salariobruto>=600)&&(salariobruto<=900)){
     imposto<-(salariobruto*10/100)
     cat("\nImposto equivalente a 10% é de",imposto,"R$")
   }else{
     if(salariobruto>900){
       imposto<-(salariobruto*20/100)
       cat("\nImposto equivalente a 20% é de",imposto,"R$")
     }
   }
 }
cat("\n==================================Salário liquído====================================")
salarioliq<-salariobruto-imposto
cat("\nSeu salário liquído é equivalente a ",salarioliq)
if(salarioliq<=720){
   novosalario<-salarioliq+150
  cat("\nVocê tem direito a uma gratificação de 150 reais\nSeu salário agora é equivalente a: ",novosalario,"R$")
}else{
  novosalario<-salarioliq+75
  cat("\nVocê tem direito a uma gratificação de 75 reais\nSeu salário agora é equivalente a: ",novosalario,"R$")
}

