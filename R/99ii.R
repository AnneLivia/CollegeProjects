maiorn<-0
menorn<-1000
repeat{  
n<-as.integer(readline("Digite um número: "))
   if(n>maiorn){
     maiorn<-n
     cat("O maior número",maiorn)
   }else{
     if((n<menorn)&&(n>0)){
       menorn<-n
       cat("O menor número é",n)
     }
     
   }
  if(isTRUE(all.equal(n, 0))){#n==0
   cat("a conta parou")
     break
    
  }
}
 

   
   