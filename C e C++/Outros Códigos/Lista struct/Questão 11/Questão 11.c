#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int main()
{
    struct vetor{
       float x;
       float y;
       float z;
    };

    struct vetor v[TAM], soma;
    int i;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o numero x do vetor %d: ",i+1);
        scanf("%f",&v[i].x);
        printf("Digite o numero y do vetor %d: ",i+1);
        scanf("%f",&v[i].y);
        printf("Digite o numero z do vetor %d: ",i+1);
        scanf("%f",&v[i].z);
        system("cls");
    }
    for(i = 0; i < TAM - 1; i++)
    {
        soma.x = v[i].x + v[i+1].x;
        soma.y = v[i].y + v[i+1].y;
        soma.z = v[i].z + v[i+1].z;
    }

    for(i = 0; i < TAM; i++)
    {
       printf("Vetor %d: \n",i+1);
       printf("\nX = %.2f\nY = %.2f\nZ = %.2f\n\n",v[i].x,v[i].y,v[i].z);
       if(i  == TAM - 1)
       {
           printf("Soma dos vetores: \n");
           printf("\nX = %.2f\nY = %.2f\nZ = %.2f\n\n",soma.x,soma.y,soma.z);
       }

    }




    return 0;
}
