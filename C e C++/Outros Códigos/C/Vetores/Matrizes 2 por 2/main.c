#include <stdio.h>
#include <stdlib.h>
#define LIM 2

int lermat(int *m[][LIM],int tam){
 int linha,coluna;
 for(linha = 0; linha < tam; linha ++ ){
        for(coluna = 0; coluna < tam; coluna ++){
            printf("Valor [%d] [%d]: \n",linha,coluna);
            scanf("%d",&m[linha][coluna]);
        }
    }
}

void exibirMat(int *m[][LIM],int tam){
  int linha,coluna;
  for(linha = 0; linha < tam; linha ++ ){
        for(coluna = 0; coluna < tam; coluna ++){
            printf("%4d",m[linha][coluna]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[LIM][LIM],mat2[LIM][LIM],soma[LIM][LIM],linha,coluna;

    printf("Leitura de dados matriz 1: \n");
    lermat(mat1,LIM);

    printf("Leitura de dados matriz 2: \n");
    lermat(mat2,LIM);

    system("cls");

    // exibição matriz 1
    printf("Matriz 1: \n");
    exibirMat(mat1,LIM);

    // exibição matriz 2
    printf("Matriz 2: \n");
    exibirMat(mat2,LIM);

    // calculo da soma das matrizes
    for(linha = 0; linha < LIM; linha ++ ){
        for(coluna = 0; coluna < LIM; coluna ++){
            soma[linha][coluna] = mat1[linha][coluna] + mat2[linha][coluna];
        }
    }
    // exibição da soma das matrizes 2x2 1 e 2
    printf("SOMA: \n");
    exibirMat(soma,LIM);
    return 0;
}
