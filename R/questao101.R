contador<-0
total<-0
cont5<-(-5)
conta2<-(2)
c1<-0
c2<-0
for(cont in seq(500,0,-50)){
  contador<-contador+1
  resto<-contador%%2
  if(isTRUE(all.equal(resto,0))){
   c1<-c1-cont 
  }else{
    c2<-c2+cont
  }
}
contaabaixo<-c1+c2
limite<-contador/2
for(cont2 in 1:limite){
  total<-total+cont5+conta2
}
serie<-total/contaabaixo
cat("\nO valor da serie é",serie)