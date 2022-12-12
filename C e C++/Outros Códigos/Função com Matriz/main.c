#include <stdio.h>
#include <stdlib.h>

int gColuna;
int main()
{
    int linha;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&linha);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&gColuna);

    int matriz[linha][gColuna];

    int i;
    int j;
    // entrada de valores na matriz
    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < gColuna; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    void ImprimeMatriz(int m[][gColuna],int); // prototipo da função.

    // chamada da função que irá exibir na tela os valores da matriz
    printf("Matriz: \n");

    ImprimeMatriz(matriz,linha);

    return 0;
}

void ImprimeMatriz(int m[][gColuna], int linha)
{
    int i,j;
    for(i = 0; i < linha; i++){
        for(j = 0; j < gColuna; j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}
