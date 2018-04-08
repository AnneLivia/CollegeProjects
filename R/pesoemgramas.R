cat("============================Conversor de peso de kg para gramas============================")
peso<-as.double(readline("Digite quanto você pesa em kg: "))
grampeso<-peso*1000
cat("\nSeu peso é",peso,"kg")
cat("\nSeu peso em gramas é", grampeso,"g")
percgram<-(grampeso*5/100)
novopeso<-(percgram+grampeso)
cat("\nSeu peso se engordar mais 5% é",novopeso,"g")

