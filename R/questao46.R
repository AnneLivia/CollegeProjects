p<-0
for(cont in 98:0){
  div<-cont%%5
  if(isTRUE(all.equal(div,0))){
    p<-p+1
  }
}
cat("A quantidade é: ",p)
