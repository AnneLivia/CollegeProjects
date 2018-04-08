p<-0
for(cont in 1000:10000){
  resto5<-cont %% 5
  resto7<-cont %% 7
if((!isTRUE(all.equal(resto5,0)))&&(!isTRUE(all.equal(resto7,0)))){
   p<-p+1
}

}
cat("Quantidade",p)
