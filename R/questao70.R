idade15<-0
idade16e30<-0
idade31e45<-0
idade46e60<-0
maior61<-0
t<-0
for(cont in 1:10){
idade<-as.integer(readline("Digite sua idade: "))
t<-t+1
if(isTRUE(all.equal(idade,15))){
  idade15<-idade15+1
}else{
  if((idade>=16)&&(idade<=30)){
    idade16e30<-idade16e30+1
  }else{
    if((idade>=31)&&(idade<=45)){
      idade31e45<-idade31e45+1
    }else{
      if((idade>=46)&&(idade<=60)){
        idade46e60<-idade46e60+1
      }else{
        if(idade>=61){
          maior61<-maior61+1
        }
      }
    }
  }
}
  
}
perc15<-((idade15/t)*100)
cat("\nA porcentagem de pessoas com 15 anos é ",perc15,"%")
perc16e30<-((idade16e30/t)*100)
cat("\nA porcentagem de pessoas entre 16 e 30 anos é ",perc16e30,"%")
perc31e45<-((idade31e45/t)*100)
cat("\nA porcentagem de pessoas entre 31 e 45 anos é ",perc31e45,"%")
perc46e60<-((idade46e60/t)*100)
cat("\nA porcentagem de pessoas entre 46 e 60 anos é ",perc46e60,"%")
perc61<-((maior61/t)*100)
cat("\nA porcentagem de pessoas com mais de 61 anos é ",perc61,"%")




