produto<-as.double(readline("Qual o valor do produto: "))
codigo<-readline("Digite o codigo do produto: \n[1]..[3]..[4]..[8] ")
switch(codigo,
       "1" = {
           preco<-produto+(produto*15/100)
           cat("O novo preço do produto é",preco)
         },
       "3" = {
         preco<-produto+(produto*20/100)
         cat("O novo preço do produto é",preco)
        },
       "4" = {
         preco<-produto+(produto*35/100)
         cat("O novo preço do produto é",preco)
        },
       "8" = {
         preco<-produto+(produto*40/100)
         cat("O novo preço do produto é",preco)
        },
       print("Codigo invalido, digite outra vez")
)