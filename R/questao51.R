salario<-as.double(readline("Digite seu sal�rio: "))
if(salario<850){
  reajuste<-salario+(salario*30/100)
  cat("Voc� tem direito ao reajuste de 30%\n seu sal�rio atualizado � de",reajuste,"R$")
}else{
  cat("Voc� n�o tem direito ao reajuste sal�rial\nSeu sal�rio continua sendo",salario,"R$")
}
