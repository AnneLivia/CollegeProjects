maiorn<-0
menorn<-1000
repeat{  
n<-as.integer(readline("Digite um n�mero: "))
   if(n>maiorn){
     maiorn<-n
     cat("O maior n�mero",maiorn)
   }else{
     if((n<menorn)&&(n>0)){
       menorn<-n
       cat("O menor n�mero �",n)
     }
     
   }
  if(isTRUE(all.equal(n, 0))){#n==0
   cat("a conta parou")
     break
    
  }
}
 

   
   