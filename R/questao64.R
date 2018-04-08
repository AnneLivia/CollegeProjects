repeat{
idade<-as.integer(readline("Digite sua idade: "))
if(idade>=71){
  cat("Idade fornecida invalida\nobs: Só é permitido idade entre 18 e 70 anos")
  next
}else{
  if(idade<=17){
    cat("Idade fornecida invalida\nobs: Só é permitido idade entre 18 e 70 anos")
    next
  }else{
cat("Qual é o seu grupo de risco:\n[1]Baixo\n[2]Médio\n[3]Alto ")
risco<-as.integer(readline("Digite: "))
}
if((idade>=18)&&(idade<=24)){
  if(isTRUE(all.equal(risco,1))){
    cat("O Código do seguro é: 7")
  }else{
    if(isTRUE(all.equal(risco,2))){
      cat("O Código do seguro é: 8")
    }else{
      cat("O código do seguro é: 9")
    }
  }
}else{
  if((idade>=25)&&(idade<=40)){
    if(isTRUE(all.equal(risco,1))){
      cat("O Código do seguro é: 4")
    }else{
      if(isTRUE(all.equal(risco,2))){
        cat("O Código do seguro é: 5")
      }else{
        cat("O código do seguro é: 6")
      }
  }
  }else{
    if((idade>=41)&&(idade<=70)){
      if(isTRUE(all.equal(risco,1))){
        cat("O Código do seguro é: 1")
      }else{
        if(isTRUE(all.equal(risco,2))){
          cat("O Código do seguro é: 2")
        }else{
          cat("O código do seguro é: 3")
        }
      }
    }
  }
  }
}
cat("\nDeseja sair do programa ? (s|n)")
tecla<-readline()
if(isTRUE(all.equal(tecla,"s"))){
  cat("\nOperação Finalizada")
  break
}
}


  