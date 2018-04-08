cat("=================================Calculo da nota final========================================\nobs:\nO peso do trabalho de laboratório é 2\nO peso da avaliação semestral é 3\nO peso do exame final é 5")
trabalholab<-as.double(readline("Digite a nota do trabalho de laboratório: "))
avaliacao<-as.double(readline("Digite a nota de avaliação semestral: "))
exame<-as.double(readline("Digite a nota do exame final: "))
media<-(((trabalholab*2)+(avaliacao*3)+(exame*5))/10)
cat("\nSua média é:",media)
if(media<5){
  cat("\nConceito: E")
}else{
  if((media>=5)&&(media<6)){
    cat("\nConceito: D")
  }else{
    if((media>=6)&&(media<7)){
      cat("\nConceito: C")      
    }else{
      if((media>=7)&&(media<8)){
        cat("\nConceito: B")
      }else{
        if((media>=8)&&(media<=10)){
          cat("\nConceito: A")
        }
      }
    }
  }
}