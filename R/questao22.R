largu<-as.double(readline("Digite a largura da piscina: "))
comprimento<-as.double(readline("Digite o comprimento da piscina: "))
profund<-as.double((readline("Digite a profundidade da piscina: ")))
area<-(largu*comprimento*profund)
valor<-area*75.00
cat("O valor a ser pago em m³ é",valor,"R$")