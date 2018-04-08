ano1<-as.integer(readline("Em que ano você nasceu: "))
ano2<-as.integer(readline("Em que ano você está: "))
idade<-ano2-ano1
cat("Sua idade é ",idade)
meses<-idade*12
cat("\nSua idade em meses é:",meses)
dias<-idade*365
cat("\nVocê tem ",dias," dias de idade")
horas<-dias*24
cat("\nVocê tem ",horas,"horas")
minu<-horas*60
cat("\nVocê tem ",minu,"minutos")