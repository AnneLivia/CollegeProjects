for(cont in 1:10){
  cat("\nTabuada de multiplicação do nº:",cont,"\n")
  for(cont2 in 1:10){
    mult<-cont*cont2
    cat("\n",cont,"X",cont2,"=",mult)
    cat("\n")
  }
}
for(cont in 1:10){
  cat("\nTabuada de Divisão do nº:",cont,"\n")
  for(cont2 in 1:10){
    divi<-cont/cont2
    cat("\n",cont,"/",cont2,"=",divi)
    cat("\n")
  }
}
for(cont in 1:10){
  cat("\nTabuada de subtração do nº:",cont,"\n")
  for(cont2 in 1:10){
    if(isTRUE(all.equal(cont,10))){
      subt<-cont-cont2
      cat("\n",cont,"-",cont2,"=",subt)
      cat("\n")
    }else{
      if((isTRUE(all.equal(cont,9)))&&(cont2<9)){
        subt<-cont-cont2
        cat("\n",cont,"-",cont2,"=",subt)
        cat("\n")
      }else{
        if((isTRUE(all.equal(cont,8)))&&(cont2<8)){
          subt<-cont-cont2
          cat("\n",cont,"-",cont2,"=",subt)
          cat("\n")
        }else{
          if((isTRUE(all.equal(cont,7)))&&(cont2<7)){
            subt<-cont-cont2
            cat("\n",cont,"-",cont2,"=",subt)
            cat("\n")
          }else{
            if((isTRUE(all.equal(cont,6)))&&(cont2<6)){
              subt<-cont-cont2
              cat("\n",cont,"-",cont2,"=",subt)
              cat("\n")
            }else{
              if((isTRUE(all.equal(cont,5)))&&(cont2<5)){
                subt<-cont-cont2
                cat("\n",cont,"-",cont2,"=",subt)
                cat("\n")
              }else{
                if((isTRUE(all.equal(cont,4)))&&(cont2<4)){
                  subt<-cont-cont2
                  cat("\n",cont,"-",cont2,"=",subt)
                  cat("\n")
                }else{
                  if((isTRUE(all.equal(cont,3)))&&(cont2<3)){
                    subt<-cont-cont2
                    cat("\n",cont,"-",cont2,"=",subt)
                    cat("\n")
                  }else{
                    if((isTRUE(all.equal(cont,2)))&&(cont2<2)){
                      subt<-cont-cont2
                      cat("\n",cont,"-",cont2,"=",subt)
                      cat("\n")
                    }else{
                      if((isTRUE(all.equal(cont,1)))&&(isTRUE(all.equal(cont2,1)))){
                        subt<-cont-cont2
                        cat("\n",cont,"-",cont2,"=",subt)
                        cat("\n")
                     }
                   }
                 }
               }
             }
           }
         }
       }
     }
    }
  }
}

for(cont in 1:10){
  cat("\nTabuada de soma do nº:",cont,"\n")
  for(cont2 in 1:10){
    soma<-cont+cont2
    cat("\n",cont,"+",cont2,"=",soma)
    cat("\n")
  }
}

