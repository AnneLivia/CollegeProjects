options(digits=3)
p1<-0
p2<-0
p3<-0
p4<-0
p5<-0
p6<-0
repeat{
  cat("====================================E L E I Ç Ã O===========================================")
  cat("\n-------------------------------------------------------------------------------------------")
  cat("\nCandidatos: \n[1] Candidato 1\n[2] Candidato 2\n[3] Candidato 3\n[4] Candidato 4\n[5] Voto em Branco\n[6] Voto nulo")
opt<-as.integer(readline("Digite a opção: "))
switch(opt,
     "1" = {
       cat("\n")
       cat("\nVOCÊ VOTOU NO CANDIDATO 1")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       cat("\n")
           p1<-p1+1
     },  
     "2" = {
       cat("\n")
       cat("VOCÊ VOTOU NO CANDIDATO 2")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       cat("\n")
         p2<-p2+1
     }, 
     "3" = {
       cat("\n")
       cat("\nVOCÊ VOTOU NO CANDIDATO 3")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       p3<-p3+1
     },  
     "4" = {
       cat("\n")
       cat("\nVOCÊ VOTOU NO CANDIDATO 4")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       cat("\n")
       p4<-p4+1
     },  
     "5" = {
       cat("\n")
       cat("\nVOCÊ VOTOU EM BRANCO")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       cat("\n")
       p5<-p5+1
     },  
     "6" = {
       cat("\n")
       cat("\nVOCÊ VOTOU NULO")
       cat("\n======================================================================")
       cat("\nO B R I G A D A  P E L O  S E U  V O T O")
       cat("\n")
       p6<-p6+1
     },  
     cat("\nOpção invalida")
       
     
      
) 
     cat("\nPara encerrar o sistema aperte (0)\nCaso queira continuar aperte enter.")
    teclas<-as.integer(readline("Digite: "))
      if(isTRUE(all.equal(teclas,0))){
        cat("\n==========================================================================")
        cat("\n---------------------------VOTAÇÃO COMPUTADA------------------------------")
        cat("\nO total de votos no candidato 1",p1)
        cat("\nO total de votos no candidato 2",p2)
        cat("\nO total de votos no candidato 3",p3)
        cat("\nO total de votos no candidato 4",p4)
        cat("\nO total de votos Brancos",p5)
        cat("\nO total de votos Nulos",p6)
      totalvotos<-p1+p2+p3+p4+p5+p6
      cat("\nO total de votos foi: ",totalvotos)
      percnulos<-(p6/totalvotos)*100
      cat("\nA porcentagem de votos nulos foi ",percnulos,"%")
      percbrancos<-p5/totalvotos
      cat("\nA porcentagem de votos  em branco foi ",percbrancos,"%")
      cat("\n\nSistema Encerrado")
      break
      }
    }

       
       
       
       
       
       
       