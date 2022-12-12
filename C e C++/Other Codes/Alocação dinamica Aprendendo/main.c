#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"portuguese");

    int i, j, linha,coluna;
    int **v;

    printf("Digite até onde você quer que a tabúada vá: ");
    scanf("%d",&i); // 5
    printf("de 1 até quantos números você quer que a tabuada seja multiplicada: ");
    scanf("%d",&j); // 9

    v = (int**) calloc(i,sizeof(int *));
    if(v == NULL)
    {
        printf("Não há memória suficiente!");
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
