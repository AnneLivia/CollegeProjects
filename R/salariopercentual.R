salario<-as.double(readline("Qual o seu salário mensal? "))
  if(salario<850){
    perce<-(salario*30/100)
    novosalario<-(salario+perce)
      cat("Você recebeu um reajuste de 30%, seu salário ficou de",novosalario,"reais")
  }else{
    cat("Você não tem direito ao aumento, pois seu salário é de",salario,"reais, e é superior a 850 Reais")
  }