n1<-as.integer(readline("Digite um número "))
n2<-as.integer(readline("Digite um numero "))
for(p in n1:n2){
 l<-0
 for(s in 1:p){
   divi<-p%%s
   if(divi==0){
     l<-l+1
   }
 }
 if(l==2){
   cat("\nesse é um número primo",p)
 }else{
   cat("\nesse não é um número primo",p)
 }
 }
 