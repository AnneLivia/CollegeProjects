n1<-as.integer(readline("Digite um n�mero "))
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
   cat("\nesse � um n�mero primo",p)
 }else{
   cat("\nesse n�o � um n�mero primo",p)
 }
 }
 