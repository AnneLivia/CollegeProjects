salario<-as.double(readline("Digite seu salário: "))
if(salario<850){
  reajuste<-salario+(salario*30/100)
  cat("Você tem direito ao reajuste de 30%\n seu salário atualizado é de",reajuste,"R$")
}else{
  cat("Você não tem direito ao reajuste salárial\nSeu salário continua sendo",salario,"R$")
}
