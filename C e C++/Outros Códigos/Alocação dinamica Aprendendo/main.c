#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int i, j, linha,coluna;
    int **v;

    printf("Digite at� onde voc� quer que a tab�ada v�: ");
    scanf("%d",&i); // 5
    printf("de 1 at� quantos n�meros voc� quer que a tabuada seja multiplicada: ");
    scanf("%d",&j); // 9

    v = (int**) calloc(i,sizeof(int *));
    if(v == NULL)
    {
        printf("N�o h� mem�ria suficiente!");
        exit(1);
    }

    for(linha = 0; linha < i; linha++)
    {
        v[linha] = (int *)calloc(j,sizeof(int));
    }

    for(linha = 0; linha < i; linha++)
    {
        for(coluna = 0; coluna < j; coluna++)
        {
            v[linha][coluna] = (linha + 1) * (coluna + 1);
        }
    }

    for(linha = 0; linha < i; linha++)
    {
        for(coluna = 0; coluna < j; coluna++)
        {
            printf("%d x %d = %d\n",linha + 1,coluna + 1,v[linha][coluna]);
        }

    }

    for(linha = 0; linha < i; linha++)
    {
        free(v[linha]);
    }

    free(v);
    return 0;
}
