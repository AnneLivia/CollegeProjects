repeat{
x<-as.double(readline("Digite um n�mero: "))
y<-as.double(readline("Digite outro  n�mero: "))
z<-as.double(readline("Digite outro n�mero: "))
cat("O 1� valor �",x,"\nO 2� valor �",y,"\no 3� valor �",z)
  if((z<(x+y))&&(y<(z+x))&&(x<(z+y))){
    cat("\nIsso � um triangulo")
     if((x==y)&&(x==z)){
       cat("\ne � um tri�ngulo equil�tero")
     }else{
       if((x!=z)&&(x!=y)&&(y!=z)){
         cat("\ne � um tri�ngulo escaleno ")
       }else{
         if((x=z)&&(x!=y)|(x=y)&&(x!=z)|(y==z)&&(y!=x)){
           cat("\ne � um tri�ngulo isoceles")
         }
       }
     }
  }else{
    cat("\nesses dados n�o equivalem a um tri�ngulo")
  }
   tecla<-readline("Deseja sair? digite: (s/n): ")
   if(tecla=="s"){
     cat("Voc� saiu do programa")
     break
   }
}