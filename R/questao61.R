repeat{
  cat("\nESCOLHA ENTRE AS OP��ES ABAIXO:\n[1] SOMA\n[2] RAIZ\n[3] FINALIZAR")
  opt<-readline("Digite a op��o que deseja: ")
  switch (opt,
    "1" = {
      cat("===============================SOMA=====================================")
      n1<-as.integer(readline("Digite o primeiro n�mero: "))
      n2<-as.integer(readline("Digite o segundo n�mero: "))
      soma<-n1+n2
      cat("\n\nA soma de",n1,"+",n2,"=",soma)
    },
    
    "2" = {
       cat("============================RAIZ QUADRADA==============================")
       n1<-as.integer(readline("Digite o n�mero: "))
       raiz<-sqrt(n1)
       cat("\nA raiz quadrada de",n1," � ",raiz)
    },
    "3" = {
      cat("Finalizando programa...\n")
      cat("\n")
      cat("Programa finalizado, tchau!")
       break
    }
  )
 
  
  
  
  
  
  
  
}