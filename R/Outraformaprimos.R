n<-as.integer(readline("Digite um n�mero: "))
j<-2
while((j<n)&&(n%%j!=0)){
  j<-j+1
}
if(isTRUE(all.equal(n,j))){
  cat("\nSim")
}else{
  cat("\nN�o")
}