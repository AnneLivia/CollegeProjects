salaMin<-as.double(readline("Forne�a quanto � o sal�rio minimo: "))
qwatts<-as.double(readline("Qual quantidade de Quilowatts � gasto em sua resid�ncia? "))
valorwatts<-(salaMin*2/100)
cat("\nO valor de cada quilowatts � de",valorwatts,"R$")
pagarwatts<-valorwatts*qwatts
cat("\nO valor a ser pago por essa resid�ncia � de",pagarwatts,"R$")
descwatts<-(pagarwatts-(pagarwatts*15/100))
cat("\nCom um desconto de 15% o valor a ser pago � de",descwatts,"R$")