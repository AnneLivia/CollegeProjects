ano1<-as.integer(readline("Em que ano voc� nasceu: "))
ano2<-as.integer(readline("Em que ano voc� est�: "))
idade<-ano2-ano1
cat("Sua idade � ",idade)
meses<-idade*12
cat("\nSua idade em meses �:",meses)
dias<-idade*365
cat("\nVoc� tem ",dias," dias de idade")
horas<-dias*24
cat("\nVoc� tem ",horas,"horas")
minu<-horas*60
cat("\nVoc� tem ",minu,"minutos")