anacleto<-1.50
felisberto<-1.10
cont<-0
while(anacleto>felisberto){
  anacleto<-anacleto+0.02
  felisberto<-felisberto+0.03
  cont<-cont+1
}
cat("\nSerão necessario",cont,"anos para o Felisberto ultrapassar a altura do Anacleto")