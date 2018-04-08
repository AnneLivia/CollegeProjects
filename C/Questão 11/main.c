#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][4];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           printf("Digite um valor: ");
           scanf("%f",&matriz[i][j]);
        }
    }
    system("cls");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
        printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
