#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5

int main()
{
    typedef struct{
      float x;
      float y;

    } coord;


    coord pontos[MAX];
    coord origem = {0,0};
    float distancia[MAX];
    int i;
    for(i = 0; i < MAX; i++)
    {
        printf("%d - PONTO X: ",i+1);
        scanf("%f",&pontos[i].x);
        printf("%d - PONTO Y: ",i+1);
        scanf("%f",&pontos[i].y);
        system("cls");
    }

    for(i = 0; i < MAX; i++)
    {
        distancia[i] = sqrt((pow((origem.x - pontos[i].x),2) + pow((origem.y - pontos[i].y),2)));
    }

    float MaiorD = distancia[0];
    int ponto = 0;
    for(i = 0; i < MAX; i++)
    {
       if(MaiorD < distancia[i])
       {
           MaiorD = distancia[i];
           ponto = i;
       }
    }
    printf("O ponto mais distante da origem: %.2f e %.2f com distancia %.2f.\n",pontos[ponto].x,pontos[ponto].y,MaiorD);

    return 0;
}
