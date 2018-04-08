options(digits = 16)
cont<-1
cont2<-1
soma1<-0
soma2<-0
while(cont<=99){
  soma1<-soma1+cont
  cont<-cont+2
}
while(cont2<=50){
  soma2<-soma2+cont2
  cont2<-cont2+1
}
h<-soma1/soma2
cat("valor de H:",h)