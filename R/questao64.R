repeat{
idade<-as.integer(readline("Digite sua idade: "))
if(idade>=71){
  cat("Idade fornecida invalida\nobs: S� � permitido idade entre 18 e 70 anos")
  next
}else{
  if(idade<=17){
    cat("Idade fornecida invalida\nobs: S� � permitido idade entre 18 e 70 anos")
    next
  }else{
cat("Qual � o seu grupo de risco:\n[1]Baixo\n[2]M�dio\n[3]Alto ")
risco<-as.integer(readline("Digite: "))
}
if((idade>=18)&&(idade<=24)){
  if(isTRUE(all.equal(risco,1))){
    cat("O C�digo do seguro �: 7")
  }else{
    if(isTRUE(all.equal(risco,2))){
      cat("O C�digo do seguro �: 8")
    }else{
      cat("O c�digo do seguro �: 9")
    }
  }
}else{
  if((idade>=25)&&(idade<=40)){
    if(isTRUE(all.equal(risco,1))){
      cat("O C�digo do seguro �: 4")
    }else{
      if(isTRUE(all.equal(risco,2))){
        cat("O C�digo do seguro �: 5")
      }else{
        cat("O c�digo do seguro �: 6")
      }
  }
  }else{
    if((idade>=41)&&(idade<=70)){
      if(isTRUE(all.equal(risco,1))){
        cat("O C�digo do seguro �: 1")
      }else{
        if(isTRUE(all.equal(risco,2))){
          cat("O C�digo do seguro �: 2")
        }else{
          cat("O c�digo do seguro �: 3")
        }
      }
    }
  }
  }
}
cat("\nDeseja sair do programa ? (s|n)")
tecla<-readline()
if(isTRUE(all.equal(tecla,"s"))){
  cat("\nOpera��o Finalizada")
  break
}
}


  