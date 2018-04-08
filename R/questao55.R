salafunc<-as.double(readline("Digite seu salário: "))
if(salafunc<=1200){
  novosalario<-salafunc+(salafunc*50/100)
  cat("Seu salário atualizado com reajuste de 50% é de",novosalario,"R$")
}else{
  novosalario<-salafunc+(salafunc*30/100)
   cat("Seu salário atualizado com reajuste de 30% é de",novosalario,"R$")
}