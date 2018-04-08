deposito<-as.double(readline("Digite o valor do deposito: "))
taxa<-as.double(readline("Digite o valor da taxa de juros em porcentagem: "))
rendimento<-deposito*(taxa/100)
cat("\nO rendimento é: ",rendimento)
total<-deposito+rendimento
cat("\nO total do rendimento é: ",total)
