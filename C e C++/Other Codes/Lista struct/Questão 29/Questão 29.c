#include <stdio.h>
#include <stdlib.h>
#define MAX 2

// Falta Terminar

int verificarData(int d,int m, int a);

int main()
{
    struct dma{
       int dia;
       int mes;
       int ano;
    };

    struct dma dias[MAX];
    int i,valido
    ;
    printf("Data 1.\n\n");
    for(i = 0; i < MAX; i++)
    {
        valido = 0;
        if(i == MAX - 1)
        {
            printf("Data %d.\n\n",i+1);
        }

        while(valido == 0)
        {
            printf("Dia: ");
            scanf("%d",&dias[i].dia);
            printf("Mes: ");
            scanf("%d",&dias[i].mes);
            printf("Ano: ");
            scanf("%d",&dias[i].ano);
            system("cls");
            valido = verificarData(dias[i].dia,dias[i].mes,dias[i].ano);
        }
    }


    return 0;
}

int verificarData(int d,int m, int a)
{

    if(m < 1 || m > 12)
    {
        printf("Digite novamente uma data valida: \n");
        return 0;
    }

    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        if(m == 2)
        {
            if(d < 1 || d > 29)
            {
                printf("Digite novamente uma data valida: \n");
                return 0;
            }
        }
    }
    else
    {
       if(d < 1 || d > 31)
       {
           printf("Digite novamente uma data valida: \n");
           return 0;
       }
    }
    return 1;
}


