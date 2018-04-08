elevadorA<-0 
elevadorB<-0
elevadorC<-0
turnoMa<-0
turnoVa<-0
turnoNa<-0
turnoMb<-0
turnoVb<-0
turnoNb<-0
turnoMc<-0
turnoVc<-0
turnoNc<-0
maisusadoM<-0
maisusadoN<-0
maisusadoV<-0
menosusadoM<-0
menosusadoV<-0
menosusadoN<-0
repeat{
  cat("\nQual elevador você ultiliza com mais frequência? \n[A] Elevador A\n[B] Elevador B\n[C] Elevador C")
  elevador<-readline("Digite aqui: ")
  switch (elevador,
   "A" = {
      elevadorA<-elevadorA+1
      cat("\nQual periodo em que utiliza o elevador? \n[M] Matutino\n[V] Vespertino\n[N] Noturno")
      turno<-readline("Digite aqui: ")
      if(isTRUE(all.equal(turno,"M"))){
        turnoMa<-turnoMa+1
      }else if(isTRUE(all.equal(turno,"V"))){
        turnoVa<-turnoVa+1
      }else if(isTRUE(all.equal(turno,"N"))){
        turnoNa<-turnoNa+1
      }
   },
   "B" = {
     elevadorB<-elevadorB+1
     cat("\nQual periodo em que utiliza o elevador? \n[M] Matutino\n[V] Vespertino\n[N] Noturno")
     turno<-readline("Digite aqui: ")
     if(isTRUE(all.equal(turno,"M"))){
       turnoMb<-turnoMb+1
     }else if(isTRUE(all.equal(turno,"V"))){
       turnoVb<-turnoVb+1
     }else if(isTRUE(all.equal(turno,"N"))){
       turnoNb<-turnoNb+1
     }
   },
   "C" = {
     elevadorC<-elevadorC+1
     cat("\nQual periodo em que utiliza o elevador? \n[M] Matutino\n[V] Vespertino\n[N] Noturno")
     turno<-readline("Digite aqui: ")
     if(isTRUE(all.equal(turno,"M"))){
       turnoMc<-turnoMc+1
     }else if(isTRUE(all.equal(turno,"V"))){
       turnoVc<-turnoVc+1
     }else if(isTRUE(all.equal(turno,"N"))){
       turnoNc<-turnoNc+1
     }
   },
   cat("\nOpção invalida")
  )
  periodom<-turnoMa+turnoMc+turnoMb
  periodov<-turnoVa+turnoVb+turnoVc
  periodon<-turnoNa+turnoNb+turnoNc
  total<-elevadorA+elevadorB+elevadorC
  
  
  cat("\nDeseja sair? (s/n)")
  sair<-readline("Digite: ")
  if(isTRUE(all.equal(sair,"s"))){
    if((elevadorA>elevadorB)&&(elevadorA>elevadorC)){
      if((turnoMa>turnoVa)&&(turnoMa>turnoNa)){
        cat("\nO elevador mais frequentado é elevador A e o turno de maior fluxo é o turno da manhã")
      }else if((turnoVa>turnoMa)&&(turnoVa>turnoNa)){
        cat("\nO elevador mais frequentado é o elevador A e o turno de maior fluxo é o turno da tarde")
      }else if((turnoNa>turnoMa)&&(turnoNa>turnoVa)){
        cat("\nO elevador mais frequentado é elevador A e o turno de maior fluxo é o turno da noite")
      }
    }else if((elevadorB>elevadorA)&&(elevadorB>elevadorC)){
      if((turnoMb>turnoVb)&&(turnoMb>turnoNb)){
        cat("\nO elevador mais frequentado é elevador B e o turno de maior fluxo é o turno da manhã")
      }else if((turnoVb>turnoMb)&&(turnoVb>turnoNb)){
        cat("\nO elevador mais frequentado é o elevador B e o turno de maior fluxo é o turno da tarde")
      }else if((turnoNb>turnoMb)&&(turnoNb>turnoVb)){
        cat("\nO elevador mais frequentado é elevador B e o turno de maior fluxo é o turno da noite")
      }
    }else if((elevadorC>elevadorA)&&(elevadorC>elevadorB)){
      if((turnoMc>turnoVc)&&(turnoMc>turnoNc)){
        cat("\nO elevador mais frequentado é elevador C e o turno de maior fluxo é o turno da manhã")
      }else if((turnoVc>turnoMc)&&(turnoVc>turnoNc)){
        cat("\nO elevador mais frequentado é o elevador C e o turno de maior fluxo é o turno da tarde")
      }else if((turnoNc>turnoMc)&&(turnoNc>turnoVc)){
        cat("\nO elevador mais frequentado é elevador C e o turno de maior fluxo é o turno da noite")
      }
    }else{
      cat("\nDados insuficientes para realizar a pesquisa")
    }
    if((periodom>periodon)&&(periodom>periodov)){
      if((turnoMa>turnoMb)&&(turnoMa>turnoMc)){
        cat("\nO período mais frequentado é o matutino e com maior fluxo no elevador A")
      }else if((turnoMb>turnoMc)&&(turnoMb>turnoMa)){
        cat("\nO período mais frequentado é o matutino e com maior fluxo no elevador B")
      }else{
        cat("\nO período mais frequentado é o matutino e com maior fluxo no elevador C")
      }
    }else if((periodov>periodom)&&(periodov>periodon)){
      if((turnoVa>turnoVb)&&(turnoVa>turnoVc)){
        cat("\nO período mais frequentado é o vespertino e com maior fluxo no elevador A")
      }else if((turnoVb>turnoVc)&&(turnoVb>turnoVa)){
        cat("\nO período mais frequentado é o vespertino e com maior fluxo no elevador B")
      }else{
        cat("\nO período mais frequentado é o vespertino e com maior fluxo no elevador C")
      }
    }else if((periodon>periodov)&&(periodon>periodom)){
      if((turnoNa>turnoNb)&&(turnoNa>turnoNc)){
        cat("\nO período mais frequentado é o Noturno e com maior fluxo no elevador A")
      }else if((turnoNb>turnoNc)&&(turnoNb>turnoNa)){
        cat("\nO período mais frequentado é o Noturno e com maior fluxo no elevador B")
      }else{
        cat("\nO período mais frequentado é o Noturno e com maior fluxo no elevador C")
      }
    }else{
      cat("\nDados insuficientes para realizar a pesquisa")
    }
    if((turnoMa>turnoMb)&&(turnoMa>turnoMc)){
      maisusadoM<-(turnoMa/periodom)*100
      if(turnoMb>turnoMc){
      menosusadoM<-(turnoMc/periodom)*100
      diferenca<-maisusadoM-menosusadoM
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
    }else{
      menosusadoM<-(turnoMb/periodom)*100
      diferenca<-maisusadoM-menosusadoM
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
    }
    }else if((turnoMb>turnoMa)&&(turnoMb>turnoMc)){
      maisusadoM<-(turnoMb/periodom)*100
      if(turnoMa>turnoMc){
      menosusadoM<-(turnoMc/periodom)*100
      diferenca<-maisusadoM-menosusadoM
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
    }else{
      menosusadoM<-(turnoMa/periodom)*100
      diferenca<-maisusadoM-menosusadoM
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
    }
    
    }else if((turnoMc>turnoMa)&&(turnoMc>turnoMb)){
      maisusadoM<-(turnoMc/periodom)*100
      if(turnoMa>turnoMb){
        menosusadoM<-(turnoMb/periodom)*100
        diferenca<-maisusadoM-menosusadoM
        cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
      }else{
        menosusadoM<-(turnoMa/periodom)*100
        diferenca<-maisusadoM-menosusadoM
        cat("\nA diferença percentual entre o mais usado e o menos pelo turno matutino é",diferenca,"%")
      
    }
    }else{
      cat("\nDados insuficientes para realizar a pesquisa")
    }
  if((turnoVa>turnoVb)&&(turnoVa>turnoVc)){
    maisusadoV<-(turnoVa/periodov)*100
    if(turnoVb>turnoVc){
      menosusadoV<-(turnoVc/periodov)*100
      diferenca<-maisusadoV-menosusadoV
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
    }else{
      menosusadoV<-(turnoMb/periodov)*100
      diferenca<-maisusadoV-menosusadoV
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
      
    }
  }else if((turnoVb>turnoVa)&&(turnoVb>turnoVc)){
    maisusadoV<-(turnoVb/periodov)*100
    if(turnoVa>turnoVc){
      menosusadoV<-(turnoVc/periodov)*100
      diferenca<-maisusadoV-menosusadoV
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
    }else{
      menosusadoV<-(turnoVa/periodov)*100
      diferenca<-maisusadoV-menosusadoV
      cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
      
    }
  
}else if((turnoVc>turnoVa)&&(turnoVc>turnoVb)){
  maisusadoV<-(turnoVc/periodov)*100
  if(turnoVa>turnoVb){
    menosusadoV<-(turnoVb/periodov)*100
    diferenca<-maisusadoV-menosusadoV
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
  }else{
    menosusadoV<-(turnoVa/periodov)*100
    diferenca<-maisusadoV-menosusadoV
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno vespertino é",diferenca,"%")
    
  }
}else{
  cat("\nDados insuficientes para realizar a pesquisa")
}
if((turnoNa>turnoNb)&&(turnoNa>turnoNc)){
  maisusadoN<-(turnoNa/periodon)*100
  if(turnoNb>turnoNc){
    menosusadoN<-(turnoNc/periodon)*100
    diferenca<-maisusadoN-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
  }else{
    menosusadoN<-(turnoNb/periodon)*100
    diferenca<-maisusadoN-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
    
  }
}else if((turnoNb>turnoNa)&&(turnoNb>turnoNc)){
  maisusadoN<-(turnoNb/periodon)*100
  if(turnoNa>turnoNc){
    menosusadoN<-(turnoNc/periodon)*100
    diferenca<-maisusadoN-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
  }else{
    menosusadoN<-(turnoNa/periodon)*100
    diferenca<-maisusadoN-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
    
  }
}else if((turnoNc>turnoNa)&&(turnoNc>turnoNb)){
    maisusadoN<-(turnoNc/periodon)*100
  if(turnoNa>turnoNb){
    menosusadoN<-(turnoNb/periodon)*100
    diferenca<-maisusadoV-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
  }else{
    menosusadoN<-(turnoNa/periodon)*100
    diferenca<-maisusadoN-menosusadoN
    cat("\nA diferença percentual entre o mais usado e o menos pelo turno noturno é",diferenca,"%")
    
  }
}else{
  cat("\nDados insuficientes para realizar a pesquisa")
}
 if((elevadorA>elevadorB)&&(elevadorA>elevadorC)){
   if(elevadorB>elevadorC){
    porcmedia<-(elevadorB/total)*100
    cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"% e ocorre no elevador B")
   }else if(elevadorB<elevadorC){
     porcmedia<-(elevadorC/total)*100
     cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"% e ocorre no elevador C ")
   }else{
     cat("\nOs dados são iguais")
   }
 }else if((elevadorB>elevadorA)&&(elevadorB>elevadorC)){
   if(elevadorA>elevadorC){
     porcmedia<-(elevadorA/total)*100
     cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"% e ocorre no elevador A")
   }else if(elevadorA<elevadorC){
     porcmedia<-(elevadorC/total)*100
     cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"% e ocorre no elevador C")
   }else{
     cat("\nOs dados são iguais")
     
   }
   
 }else if((elevadorC>elevadorA)&&(elevadorC>elevadorB)){
   if(elevadorA>elevadorB){
     porcmedia<-(elevadorA/total)*100
     cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"%e ocorre no elevador A")
   }else if(elevadorA<elevadorB){
     porcmedia<-(elevadorB/total)*100
     cat("\nA porcentagem de serviços prestado no elevador de médio uso é",porcmedia,"% e ocorre no elevador B")
   }else{
     cat("\nOs dados são iguais")
   }
 }else{
   cat("\nDados insuficientes para realizar a pesquisa")
 }
    cat("\nPrograma finalizado")
 break
  }
}