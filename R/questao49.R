cat("=========================================SENHA==============================================")
cat("\nLembre-se de ativar o capslock")
senha<-readline("Digite a senha padrão: ")
if(isTRUE(all.equal(senha,"ASDFG"))){
  cat("Acesso liberado")
}else{
  cat("Acesso negado")
}