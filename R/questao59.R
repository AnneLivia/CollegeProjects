cat("=================================Calculo da nota final========================================\nobs:\nO peso do trabalho de laborat�rio � 2\nO peso da avalia��o semestral � 3\nO peso do exame final � 5")
trabalholab<-as.double(readline("Digite a nota do trabalho de laborat�rio: "))
avaliacao<-as.double(readline("Digite a nota de avalia��o semestral: "))
exame<-as.double(readline("Digite a nota do exame final: "))
media<-(((trabalholab*2)+(avaliacao*3)+(exame*5))/10)
cat("\nSua m�dia �:",media)
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