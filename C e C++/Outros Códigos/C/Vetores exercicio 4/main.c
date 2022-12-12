#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][2],n[2][2],mult[2][2];
    int i,j;

    for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("Valor lado %d %d da matriz 1: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
     for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("Valor lado %d %d da matriz 2: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            mult[i][j] = m[i][j] * n[j][i];
        }
    }

    system("cls");
    printf("\nMatriz 1: \n");
     for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2: \n");
    for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("%4d",n[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("%d",mult[i][j]);
        }
        printf("\n");
    }


    return 0;
}
