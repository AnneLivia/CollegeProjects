#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2];
    int menor = matriz[0][0];
    int i,j,linha;

    for(i = 0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da %d linha e %d coluna: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
        }
    }
    for(i = 0;i<2;i++){
        for(j=0;j<2;j++){
            if(matriz[i][j] == menor){
            linha = i;
        }
        }
    }
    printf("O menor valor da matriz e: %d e se localiza na linha %d",menor,linha);

    return 0;
}
