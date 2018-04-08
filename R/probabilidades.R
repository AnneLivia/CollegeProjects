
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

part1<- function(a,b,c,d){
  resposta <- (a/(b*d*c))
  return(resposta)
}

part2<-function(com,x,y,z){
  res<-(com*(pfestado^x)*(danificado^y)*(perdido^z))
  return (res)
}


pacotes <- 10
x1<-as.double(readline("Defina X1: "))
x2<-as.double(readline("Defina X2: "))
x3<-as.double(readline("Defina X3: "))
fatpacote<-fatorial(pacotes)
fatx1 <- fatorial(x1)
fatx2 <- fatorial(x2)
fatx3 <- fatorial(x3)
fats <- part1(fatpacote,fatx1,fatx2,fatx3)

resultado <- part2(fats,x1,x2,x3)

cat("\nO resultado é",resultado)

