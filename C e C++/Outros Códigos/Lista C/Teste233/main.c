#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,mult,soma=0;

    for(i = 1; i <=9999; i++)
    {
        mult = 4*i;
        if(mult <=9999)
        {
            printf("%d ",mult);
            soma = soma+1;
        }
    }
    printf("\nQuantidade: %d",soma);
    return 0;
}
