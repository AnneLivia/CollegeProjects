fatorial <- function(x){       #Calculo do fatorial
  if(isTRUE(all.equal(x,0))){
    return(1)
  }else{
    return(x * fatorial(x-1))
  }
}

pot <- function(x,y){               #Calculo da potencia
  if(isTRUE(all.equal(y,0))){
    return(1)
  }else{
    return(x*pot(x,y-1))
  }
}

combinacao<-function(c,b,d){       #Função para calcular combinação
  resp<-c/(b*d)
  return(resp)
}

n<-as.integer(readline("Digite o valor de N: ")) #valor de N = 10
a<-as.integer(readline("Digite o valor de a: ")) #Letra a) 1 peça defeituosa 
b<-as.integer(readline("Digite o valor de b: ")) #Letra b) 0 peça defeituosa 
c<-as.integer(readline("Digite o valor de c: "))  #Letra c) 2 peça defeituosa 
sucesso<-as.double(readline("Digite o valor do sucesso: ")) #Sucesso = 0.1

fracasso <- 1 - sucesso

#Calculo para letra a)

nMenosa <- n - a
fatn <- fatorial(n)
fata <- fatorial(a)
fatna <- fatorial(nMenosa)

combna <- combinacao(fatn,fata,fatna)

potsa <- pot(sucesso,a)
potfa <- pot(fracasso,nMenosa)

resultna <- combna*potsa*potfa
cat("Resultado letra a: ",resultna)

#Calculo para letra b

nMenosb <- n - b
fatb <- fatorial(b)
fatnb <- fatorial(nMenosb)

combnb <- combinacao(fatn,fatb,fatnb)
potsb <- pot(sucesso,b)
potfb <- pot(fracasso,nMenosb)

resultnb <- combnb*potsb*potfb
cat("\nResultado letra b: ",resultnb)

#calculo para letra C

nMenosc <- n - c
fatc <- fatorial(c)
fatnc <- fatorial(nMenosc)

combnc <- combinacao(fatn,fatc,fatnc)
potsc <- pot(sucesso,c)
potfc <- pot(fracasso,nMenosc)

resultnc <- combnc*potsc*potfc
cat("\nResultado letra c: ",resultnc)