aprovados<-0
reprovados<-0
mediatotal<-0
for(cont in 1:6){
  cat("\nPara o aluno(a) nº",cont,": ")
  n1<-as.double(readline("Digite a nota 1: "))
  n2<-as.double(readline("Digite a nota 2: "))
  media<-(n1+n2)/2
  mediatotal<-mediatotal+media
  if(media<5){
    cat("\n")
    cat("\nAluno nº",cont,": Reprovado")
    cat("\nA média é ",media)
    cat("\n")
    reprovados<-reprovados+1
  }else if((media>=5)&&(media<7)){
    cat("\n")
    cat("\nAluno nº",cont,": Exame Final")
    cat("\nA média é ",media)
    cat("\n")
  }else if((media>=7)&&(media<=10)){
    cat("\n")
    cat("\nAluno nº",cont,": Aprovado")
    cat("\nA média é ",media)
    cat("\n")
    aprovados<-aprovados+1
  }
}
cat("\n-----------------------------------SITUAÇÃO GERAL DA CLASSE---------------------------------")
mediageral<-mediatotal/6
cat("\nQuantidade de alunos aprovados: ",aprovados)
cat("\nQuantidade de alunos reprovados: ",reprovados)
cat("\nA média entre as médias é ",mediageral)