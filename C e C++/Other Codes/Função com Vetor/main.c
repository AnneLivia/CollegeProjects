#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ordenar(int v[],int t)
{
    int c1,c2,VarAux;

    for(c1 = 0; c1 < t - 1; c1++)
    {
        for(c2 = c1 + 1; c2 < t; c2++)
        {
            if(v[c1] > v[c2])
            {
                VarAux = v[c1];
                v[c1] = v[c2];
                v[c2] = VarAux;
            }
        }
    }
}

/*int main()
{
    int Vetor[10] = {6,5,4,2,7,8,0,1,9,3};
    int i,quantN;
    quantN = 0;

    setlocale(LC_ALL,"portuguese");

    printf("Valores antes da ordenação.\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ",Vetor[i]);
        quantN = quantN + 1;
    }

    Ordenar(Vetor,quantN);

    printf("\nValores depois da ordenação.\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ",Vetor[i]);
    }

    return 0;
}

*/
