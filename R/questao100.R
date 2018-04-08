parc<-0
parc2<-0
imparc<-0
imparc2<-0
for(cont1 in 1:10){
  conta<-cont1%%2
  if(isTRUE(all.equal(conta,0))){
    parc<-parc-cont1
  }else{
    imparc<-imparc+cont1
  }
}
contacima<-parc+imparc
for(cont2 in 1:10){
  mult<-cont2*cont2
  resto2<-mult%%2
  if(isTRUE(all.equal(resto2,0))){
    parc2<-parc2-mult
  }else{
    imparc2<-imparc2+mult
    
  }
}
contabaixo<-parc2+imparc2
s<-contacima/contabaixo
cat("Valor de S:",s)