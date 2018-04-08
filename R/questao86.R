quantprimos<-0
quantpar<-0
for(cont in 1:10){
  p<-0
  cat("\nDigite o",cont,"º número: ")
  num<-as.integer(readline())
  for(cont2 in 1:num){
  primo<-num%%cont2
  if(isTRUE(all.equal(primo,0))){
    p<-p+1
  }
  }
  if(isTRUE(all.equal(p,2))){
    quantprimos<-quantprimos+num
  }
  par<-num%%2
  if(isTRUE(all.equal(par,0))){
    quantpar<-quantpar+num
  }
}
cat("\nA soma dos par é",quantpar)
cat("\nA soma dos número primos é",quantprimos)