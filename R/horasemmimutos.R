horas<-as.double(readline("Digite uma determinada hora nesse formato (h.m): "))
horas0<-as.integer(horas)*60
minutos<-(horas-as.integer(horas))*100
resultado<-horas0+minutos
cat("As horas em minutos é",resultado)