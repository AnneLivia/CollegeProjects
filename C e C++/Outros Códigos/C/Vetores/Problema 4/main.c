#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int L,C,i,j;
    printf("Quantas linhas possui a matriz ? ");
    scanf("%d",&L);
    printf("Quantas colunas possui a matriz ? ");
    scanf("%d",&C);
    system("cls");
    while(L >= 20 || C >= 20 || L != C)
    {
       printf("\nVocê não digitou valores correspondentes a uma matriz QUADRADA ou ultrapassou o LIMITE que é de 20 DIMENSÕES.\n\n");
       printf("Digite novamente a quantidade de linhas da matriz quadrada respeitando o limite: ");
       scanf("%d",&L);
       printf("Agora digite novamente a quantidade de colunas da matriz quadrada respeitando o limite: ");
       scanf("%d",&C);
       system("cls");
    }

    int matriz[L][C];

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++)
        {
            if(i==j)
            {
                matriz[i][j] = 0;
            }
            else
            {
                matriz[i][j] = 1;
            }
        }
    }

    system("cls");
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
         printf("%4d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
