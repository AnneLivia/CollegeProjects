options(digits=3)
salarioM<-as.double(readline("Digite o preço do salário mínimo: "))
gastowatts<-as.double(readline("Digite o valor de quilowatts gasto por sua residência: "))
quilo100<-salarioM/7
cadawatts<-quilo100/100
cat("\nO valor de cada quilowatts equivale a ",cadawatts,"R$")
valorapagar<-cadawatts*gastowatts
cat("\nO valor em reais a ser pago por sua residência é ",valorapagar,"R$")
comdesconto<-(valorapagar-(valorapagar*10/100))
cat("\nO valor a ser pago com um desconto de 10% é de ",comdesconto,"R$")

       
       
       
       
       
       
       
       
       
       