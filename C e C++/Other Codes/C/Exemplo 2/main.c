#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x[2],y[2];
    int i,j;
    double distancia;

    for(i = 0; i<2;i++){
        printf("Digite o valor para x%d: ",i+1);
        scanf("%d",&x[i]);
    }
    for(j = 0; j<2;j++){
        printf("Digite o valor de y%d: ",j+1);
        scanf("%d",&y[j]);
    }

    distancia = sqrt((pow((x[1] - x[0]),2) + pow((y[1] - y[0]),2)));
    printf("Distancia: %.2f",distancia);
    return 0;
}
