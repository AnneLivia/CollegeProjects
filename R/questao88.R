repeat{
num1<-as.integer(readline("Digite o primeiro número: "))
num2<-as.integer(readline("Digite o segundo número: "))
cat("Menu de operações: \n[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Sair do sistema")
opt<-(readline("Digite aqui: "))
switch(opt,
       "1" = {
             cat("\n------------S O M A---------------")
             soma<-num1+num2
             cat("\n",num1,"+",num2,"=",soma)
       },
       "2" = {
         cat("\n------------S U B T R A Ç Ã O---------------")
         soma<-num1-num2
         cat("\n",num1,"-",num2,"=",soma)
       },
       "3" = {
         cat("\n------------M U L T I P L I C A Ç Ã O---------------")
         soma<-num1*num2
         cat("\n",num1,"x",num2,"=",soma)
       },
       "4" = {
         cat("\n------------D I V I S Ã O---------------")
         soma<-num1/num2
         cat("\n",num1,"/",num2,"=",soma)
       },
       "5" = {
          cat("\n-----------F I N A L I Z A N D O  S I S T E M A-------------")
          cat("\n")
          cat("Sistemas finalizado!")
          break
       },
       cat("Opção invalida")
       
       
       
       
       )
}