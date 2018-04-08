mercadoriaL<-0
mercadoriaA<-0
mercadoriaH<-0
somavalorL<-0
somavalorA<-0
somavalorH<-0

repeat{
  cat("OBS: para encerrar o programa basta digitar zero no valor de algum produto destas categorias abaixo.")
  cat("\nDigite a letra correspondente a categoria do produto? \n[L] Limpeza\n[A] Alimentação\n[H] Higiene")
  categ<-readline("Digite aqui: ")
  switch (categ,
          "L" = {
            cat("\nCategoria Limpeza: ")
            valor<-as.double(readline("Digite o valor do produto: "))
            somavalorL<-valor+somavalorL
            mercadoriaL<-mercadoriaL+1
          },
          "A" = {
            cat("\nCategoria Alimentação: ")
            valor<-as.double(readline("Digite o valor do produto: "))
            somavalorA<-valor+somavalorA
            mercadoriaA<-mercadoriaA+1
          },
          "H" = {
            cat("\nCategoria Higiene")
            valor<-as.double(readline("Digite o valor do produto: "))
            somavalorH<-valor+somavalorH
            mercadoriaH<-mercadoriaH+1
          },
          cat("Categoria Invalida")
)
if(isTRUE(all.equal(valor,0))){
  total<-mercadoriaA+mercadoriaH+mercadoriaL
  valortotal<-somavalorH+somavalorA+somavalorL
  cat("\nTotal de produtos vendidos em todas as categorias foi",total,"Com um valor de total de",valortotal,"R$")
  cat("\nTotal de produtos de limpeza vendidos: ",mercadoriaL,"Com lucro de",somavalorL,"R$")
  cat("\nTotal de produtos de alimentação vendidos: ",mercadoriaA,"Com lucro de",somavalorA,"R$")
  cat("\nTotal de produtos de higiene vendidos: ",mercadoriaH,"Com lucro de",somavalorH,"R$")
  cat("\nPrograma finalizado")
  break
}
  
}