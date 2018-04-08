cont1a10<-0
cont11a20<-0
cont21a30<-0
contmais30<-0
peso1a10<-0
peso11a20<-0
peso21a30<-0
pesomais30<-0
for(cont in 1:10){
  idade<-as.integer(readline("Digite sua idade: "))
  peso<-as.double(readline("Digite seu peso: "))
  if((idade>=1)&&(idade<=10)){
    cont1a10<-cont1a10+1
    peso1a10<-peso1a10+peso
  }else{
    if((idade>=11)&&(idade<=20)){
      cont11a20<-cont11a20+1
      peso11a20<-peso11a20+peso
    }else{
      if((idade>=21)&&(idade<=30)){
        cont21a30<-cont21a30+1
        peso21a30<-peso21a30+peso
      }else{
        if(idade>=31){
          contmais30<-contmais30+1
          pesomais30<-pesomais30+peso
        }
      }
    }
  }
}
media1a10<-peso1a10/cont1a10
media11a20<-peso11a20/cont11a20
media21a30<-peso21a30/cont21a30
mediamais30<-pesomais30/contmais30
cat("Faixas etárias: [1..10] -> ",media1a10,"\n\t\t[11..20] -> ",media11a20,"\n\t\t[21..30] -> ",media21a30,"\n\t\t[>=31] -> ",mediamais30)