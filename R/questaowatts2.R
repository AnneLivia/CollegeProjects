options(digits=3)
salarioM<-as.double(readline("Digite o pre�o do sal�rio m�nimo: "))
gastowatts<-as.double(readline("Digite o valor de quilowatts gasto por sua resid�ncia: "))
quilo100<-salarioM/7
cadawatts<-quilo100/100
cat("\nO valor de cada quilowatts equivale a ",cadawatts,"R$")
valorapagar<-cadawatts*gastowatts
cat("\nO valor em reais a ser pago por sua resid�ncia � ",valorapagar,"R$")
comdesconto<-(valorapagar-(valorapagar*10/100))
cat("\nO valor a ser pago com um desconto de 10% � de ",comdesconto,"R$")

       
       
       
       
       
       
       
       
       
       