#include <stdio.h>
#include <stdlib.h>
#define LIM 2
int matret(int m[][LIM],int n){
   int i,j;
   for(i = 0; i < n; i++){
        for(j = 0; j < LIM; j ++ ){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
int main()
{
    int matriz1[LIM][LIM],matriz2[LIM][LIM],mult[LIM][LIM];
    int cont1,cont2,p;

    printf("Forneca os valores da matriz 1: \n");
    matret(matriz1,LIM);
    printf("\nForneca os valores da matriz 2: \n");
    matret(matriz2,LIM);
    printf("\nMATRIZ 1: \n");
    for(cont1 = 0; cont1 < LIM; cont1++){
        for(cont2 = 0; cont2 < LIM; cont2 ++ ){
            printf("%4d",matriz1[cont1][cont2]);
        }
        printf("\n");
    }
    printf("\nMATRIZ 2: \n");
    for(cont1 = 0; cont1 < LIM; cont1++){
        for(cont2 = 0; cont2 < LIM; cont2 ++ ){
            printf("%4d",matriz2[cont1][cont2]);
        }
        printf("\n");
    }
    int aux = 0;
    for(cont1 = 0;cont1 < LIM; cont1++){ // 1
        for(cont2 = 0; cont2 < LIM; cont2++){ // 0
            for(p = 0; p < LIM; p++){
                aux = matriz1[cont1][p] * matriz2[p][cont2] + aux;
            }
            mult[cont1][cont2] = aux;
            aux = 0;
        }


    }
    printf("\nProduto das matrizes: \n");
    for(cont1 = 0; cont1 < LIM; cont1++){
        for(cont2 = 0; cont2 < LIM; cont2++){
            printf("%4d",mult[cont1][cont2]);
        }
        printf("\n");
    }
    return 0;
}
