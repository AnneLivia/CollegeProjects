#include <stdio.h>
#include <stdlib.h>
int main(){
int LIM, COL;
printf("Digite o tamanho de linhas da matriz: ");
scanf("%d",&LIM);
printf("Digite o tamanho de colunas da matriz: ");
scanf("%d",&COL);
if(LIM > 50 || COL > 50){
        printf("\nNao pode exceder 50 linhas nem 50 colunas.\n");
}else{
int matriz[LIM][COL], trasp[COL][LIM];
int l, c;
for(l = 0 ; l < LIM ; l++){
     for(c = 0 ; c < COL ; c++)
         {
           printf("[%d][%d]: ",l,c);
           scanf("%d", &matriz[l][c]);
         }
}
printf("MATRIZ FORNECIDA: \n");
for(l = 0 ; l < LIM ; l++){
     for(c = 0 ; c < COL ; c++)
         {
           printf("%4d",matriz[l][c]);
         }
     printf("\n");
}
printf("\nTRANSPOSTA: \n");
for(l = 0;l < COL; l++){
    for(c = 0; c < LIM; c++){
        trasp[l][c] = matriz[c][l];
        printf("%4d",trasp[l][c]);
    }
    printf("\n");
}

}
return 0;
}
