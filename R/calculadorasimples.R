repeat{
n<-as.integer(readline("Digite um número inteiro: "))
cat("------------------------------------Calculadora simples------------------------------------\n
\t\t\t\t escolha dentre as opções\n
[1] soma\n[2] subtração\n[3] divisão\n[4] multiplicação\n[5] sair")
opt<-readline()
switch(opt,
       
       "1" = {
              cat("Soma do número",n)
              for(c in 1:10){
                res<-n+c
                cat("\n",n,"+",c,"=",res)
              }
         
       },
       
       "2" = {
              cat("Subtração do número",n)
             for(c in 1:10){
               res<-n-c
               cat("\n",n,"-",c,"=",res)
             }
                 
       },
       
       
       "3"={
          cat("Divisão do número",n)
            for(c in 1:10){
              res<-n/c
            cat("\n",n,"/",c,"=",res)
            }
        },
       "4" = {
            cat("Multiplicação do número",n)
           for(c in 1:10){
           res<-n*c
           cat("\n",n,"*",c,"=",res)
         
           }
         },
       "5"={
         cat("Você saiu da calculadora")
           break
       },
       
         print("Opção invalida")
       )
    
}