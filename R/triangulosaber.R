repeat{
x<-as.double(readline("Digite um número: "))
y<-as.double(readline("Digite outro  número: "))
z<-as.double(readline("Digite outro número: "))
cat("O 1º valor é",x,"\nO 2º valor é",y,"\no 3º valor é",z)
  if((z<(x+y))&&(y<(z+x))&&(x<(z+y))){
    cat("\nIsso é um triangulo")
     if((x==y)&&(x==z)){
       cat("\ne é um triângulo equilátero")
     }else{
       if((x!=z)&&(x!=y)&&(y!=z)){
         cat("\ne é um triângulo escaleno ")
       }else{
         if((x=z)&&(x!=y)|(x=y)&&(x!=z)|(y==z)&&(y!=x)){
           cat("\ne é um triângulo isoceles")
         }
       }
     }
  }else{
    cat("\nesses dados não equivalem a um triângulo")
  }
   tecla<-readline("Deseja sair? digite: (s/n): ")
   if(tecla=="s"){
     cat("Você saiu do programa")
     break
   }
}