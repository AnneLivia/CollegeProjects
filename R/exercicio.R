repeat{
  opcao<-readline("Digite sua op��o: \n1-soma\n2-raiz\n3fim")
  switch(opcao,
         
         "1"={
           num1<-as.integer(readline("Digite X1: "))
           num2<-as.integer(readline("Digite x2: "))
           soma<-num1+num2
           cat(num1,"+",num2,"=",soma)
         },
         "2"={
           raiz<-sqrt(as.integer(readline("Valor para tirar a raiz quadrada")))
           cat("A raiz quadrada �",raiz)
         },
         "3"={
           break
         },
         print("erro - op��o invalida")
         
         
         
         
         
         )
  
  
  
}