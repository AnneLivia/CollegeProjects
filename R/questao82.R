aprovados<-0
reprovados<-0
mediatotal<-0
for(cont in 1:6){
  cat("\nPara o aluno(a) n�",cont,": ")
  n1<-as.double(readline("Digite a nota 1: "))
  n2<-as.double(readline("Digite a nota 2: "))
  media<-(n1+n2)/2
  mediatotal<-mediatotal+media
  if(media<5){
    cat("\n")
    cat("\nAluno n�",cont,": Reprovado")
    cat("\nA m�dia � ",media)
    cat("\n")
    reprovados<-reprovados+1
  }else if((media>=5)&&(media<7)){
    cat("\n")
    cat("\nAluno n�",cont,": Exame Final")
    cat("\nA m�dia � ",media)
    cat("\n")
  }else if((media>=7)&&(media<=10)){
    cat("\n")
    cat("\nAluno n�",cont,": Aprovado")
    cat("\nA m�dia � ",media)
    cat("\n")
    aprovados<-aprovados+1
  }
}
cat("\n-----------------------------------SITUA��O GERAL DA CLASSE---------------------------------")
mediageral<-mediatotal/6
cat("\nQuantidade de alunos aprovados: ",aprovados)
cat("\nQuantidade de alunos reprovados: ",reprovados)
cat("\nA m�dia entre as m�dias � ",mediageral)