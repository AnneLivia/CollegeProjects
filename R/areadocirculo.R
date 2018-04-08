total<-0
for(i in 1000:10000){
  divi5<-i%%5
  divi7<-i%%7
    if((!isTRUE(all.equal(divi5,0)))&&(!isTRUE(all.equal(divi7,0)))){
      total<-total+1
    }
}
cat("A quantidade de números que não são divisiveis nem por 5 e por 7 é",total)