salario<-as.double(readline("Qual o seu sal�rio mensal? "))
  if(salario<850){
    perce<-(salario*30/100)
    novosalario<-(salario+perce)
      cat("Voc� recebeu um reajuste de 30%, seu sal�rio ficou de",novosalario,"reais")
  }else{
    cat("Voc� n�o tem direito ao aumento, pois seu sal�rio � de",salario,"reais, e � superior a 850 Reais")
  }