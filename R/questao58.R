idade<-as.integer(readline("Digite sua idade: "))
 if((idade>=5)&&(idade<=7)){
   cat("Sua categ�ria �: Infantil A")
 }else{
   if((idade>=8)&&(idade<=10)){
     cat("Sua categoria �: Infantil B")
   }else{
     if((idade>=11)&&(idade<=13)){
       cat("Sua categoria �: Juvenil A")
     }else{
       if((idade>=14)&&(idade<=17)){
         cat("Sua categoria �: Juvenil B")
       }else{
         if(idade>=18){
           cat("Sua categoria �: S�nior")
         }
       }
     }
   }
 }