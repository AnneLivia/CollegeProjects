pfestado<-0.7
danificado<-0.2
perdido<-0.1

fatorial <- function(x){
  if(isTRUE(all.equal(x,0))){
    return(1);
  }else{
    return(x*fatorial(x-1))
  }
}
pot <- function(x,y){
  if(isTRUE(all.equal(y,0))){
    return(1)
  }else{
    return(x*pot(x,y-1))
  }
}

part1<- function(a,b,c,d){
  resposta <- (a/(b*d*c))
  return(resposta)
}

part2<-function(com,x,y,z){
  res<-(com*x*y*z)
  return (res)
}


pacotes <- as.integer(readline("Digite a quantidade total de pacotes: "))
x1<-as.integer(readline("Digite a quantidade de email que chegarão corretamente: "))
x2<-as.integer(readline("Quantidade de emails que chegaram danificados: "))
x3<-as.integer(readline("Quantidade de email que se perderam: "))
soma <- x1+x2+x3
if(isTRUE(all.equal(soma,pacotes))){
fatpacote<-fatorial(pacotes)
fatx1 <- fatorial(x1)
fatx2 <- fatorial(x2)
fatx3 <- fatorial(x3)

fats <- part1(fatpacote,fatx1,fatx2,fatx3)

pot1 <- pot(pfestado,x1)
pot2 <- pot(danificado,x2)
pot3 <- pot(perdido,x3)

resultado <- part2(fats,pot1,pot2,pot3)

cat("\nO resultado é",resultado)

}else{
  cat("Calculo invalido")
}