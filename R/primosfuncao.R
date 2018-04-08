somamaisum<-function(x){
  x<-as.integer(x)
  x<-x+1
  return(x)
}
resto<-function(v1,v2){
  v1<-as.integer(v1)
  v2<-as.integer(v2)
  r<-v1%%v2
  return(r)
}
n<-as.integer(readline("Que número você deseja saber se é primo? "))
for(cont in 1:n){
  p<-0
  for(cont2 in 1:cont){
    conta<-resto(cont,cont2)
    if(isTRUE(all.equal(conta,0))){
      p<-somamaisum(p)
    }
  }
}
if(isTRUE(all.equal(p,2))){
  cat("Primo: ",cont)
  }else{
    cat("Não primo: ",cont)
  }