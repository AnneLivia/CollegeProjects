salaMin<-as.double(readline("Forneça quanto é o salário minimo: "))
qwatts<-as.double(readline("Qual quantidade de Quilowatts é gasto em sua residência? "))
valorwatts<-(salaMin*2/100)
cat("\nO valor de cada quilowatts é de",valorwatts,"R$")
pagarwatts<-valorwatts*qwatts
cat("\nO valor a ser pago por essa residência é de",pagarwatts,"R$")
descwatts<-(pagarwatts-(pagarwatts*15/100))
cat("\nCom um desconto de 15% o valor a ser pago é de",descwatts,"R$")