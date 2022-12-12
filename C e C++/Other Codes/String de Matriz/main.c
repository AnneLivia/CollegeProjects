#include <stdio.h>
#include <stdlib.h>
#define QUANT 3
#define LIM 50
int main()
{
    int i;
    int nomes[QUANT][LIM];

    for(i = 0; i < QUANT; i++)
    {
        printf("Digite o nome: ");
        gets(nomes[i]);
    }

    for(i = 0; i < QUANT; i++)
    {
        printf("Nome %d: %s\n",i+1,nomes[i]);

    }
    return 0;
}
