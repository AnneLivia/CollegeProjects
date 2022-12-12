#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5] = {1,0,1,1,1};
    int quant = 5;
    int palavra0[7];
    int gerador[3] = {1,1,1};
    int resto[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        resto[i] = numero[i] ^ gerador[i];
    }
    for(i = 0; i < quant; i++)
    {
        printf("%d ",numero[i]);
    }
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d ",gerador[i]);
    }
    printf("\n");
    for(i = 0; i < quant; i++)
    {
        palavra0[i] = numero[i];
    }
    for(i = 0; i < 2; i++)
    {
        palavra0[quant + i] = 0;
    }
    printf("\n\n");
    for(i = 0; i < quant+2; i++)
    {
        printf("%d ",palavra0[i]);
    }
    return 0;
}
