repeat{
n<-as.integer(readline("Digite um n�mero inteiro: "))
cat("------------------------------------Calculadora simples------------------------------------\n
\t\t\t\t escolha dentre as op��es\n
[1] soma\n[2] subtra��o\n[3] divis�o\n[4] multiplica��o\n[5] sair")
opt<-readline()
switch(opt,
       
       "1" = {
              cat("Soma do n�mero",n)
              for(c in 1:10){
                res<-n+c
                cat("\n",n,"+",c,"=",res)
              }
         
       },
       
       "2" = {
              cat("Subtra��o do n�mero",n)
             for(c in 1:10){
               res<-n-c
               cat("\n",n,"-",c,"=",res)
             }
                 
       },
       
       
       "3"={
          cat("Divis�o do n�mero",n)
            for(c in 1:10){
              res<-n/c
            cat("\n",n,"/",c,"=",res)
            }
        },
       "4" = {
            cat("Multiplica��o do n�mero",n)
           for(c in 1:10){
           res<-n*c
           cat("\n",n,"*",c,"=",res)
         
           }
         },
       "5"={
         cat("Voc� saiu da calculadora")
           break
       },
       
         print("Op��o invalida")
       )
    
}