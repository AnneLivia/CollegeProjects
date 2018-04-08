sequenciaprimos<-function(n1,n2){
for(cont1 in n1:n2){
  p<-0
  for(cont2 in 1:cont1){
    resto<-cont1%%cont2
    if(isTRUE(all.equal(resto,0))){
    p<-p+1
    }
  }
  if(isTRUE(all.equal(p,2))){
    cat("\né primo: ",cont1)
  }else{
    cat("\nNão é primo: ",cont1)
  }
}
}
a<-as.integer(readline("Digite o inicio da sequência: "))
b<-as.integer(readline("Digite o final da sequência: "))
cat(sequenciaprimos(a,b))

