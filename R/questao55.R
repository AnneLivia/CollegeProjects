salafunc<-as.double(readline("Digite seu sal�rio: "))
if(salafunc<=1200){
  novosalario<-salafunc+(salafunc*50/100)
  cat("Seu sal�rio atualizado com reajuste de 50% � de",novosalario,"R$")
}else{
  novosalario<-salafunc+(salafunc*30/100)
   cat("Seu sal�rio atualizado com reajuste de 30% � de",novosalario,"R$")
}