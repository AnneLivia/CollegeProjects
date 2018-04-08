n1<-as.integer(readline("numero: "))
po<-as.integer(readline("Numero potencia: "))
pse<-function(x,p){
  if(isTRUE(all.equal(p,0))){
    return(1)
  }else{
    return(x*pse(x,(p-1)))
  }
}

re<-pse(n,po)
cat(re)