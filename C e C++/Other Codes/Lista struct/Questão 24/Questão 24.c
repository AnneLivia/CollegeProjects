#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
  int codigo;
  int quantVC, quantVS;

} aeroporto;



typedef struct{
  aeroporto origem, destino;
}voo ;

void verificar(int *n);

int main()
{
    voo aviao1[MAX];
    aeroporto aviao2[MAX];
    int i,j;
    for(i = 0; i < MAX; i++)
    {
        printf("Digite o codigo do aeroponto %d: ",i+1);
        scanf("%d",&aviao2[i].codigo);
        verificar(&aviao2[i].codigo);
        aviao2[i].quantVC = 0;
        aviao2[i].quantVS = 0;
    }
    system("cls");
    for(i = 0; i < MAX; i++)
    {
        printf("Digite o codigo do aeroponto de origem do voo %d: ",i+1);
        scanf("%d",&aviao1[i].origem.codigo);
        verificar(&aviao1[i].origem.codigo);
        printf("Digite o codigo do aeroporto de destino do voo %d: ",i+1);
        scanf("%d",&aviao1[i].destino.codigo);
        verificar(&aviao1[i].destino.codigo);
        system("cls");
    }

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
           if(aviao1[i].origem.codigo == aviao2[j].codigo)
           {
               aviao2[j].quantVS +=1;
           }

           if(aviao1[i].destino.codigo == aviao2[j].codigo)
           {
               aviao2[j].quantVC +=1;
           }
        }

    }
    for(i = 0; i < MAX; i++)
    {
        printf("CODIGO AEROPORTOS: %d\n"
               "Quantidade de voos de chegada: %d\n"
               "Quantidade de voos de saida: %d\n",aviao2[i].codigo,
                                                   aviao2[i].quantVC,
                                                   aviao2[i].quantVS);
        printf("\n\n");
    }
    return 0;
}

void verificar(int *n)
{
     while( *n < 0 || *n > (MAX - 1))
    {
           printf("Digite o codigo do aeroponto novamente: ");
           scanf("%d",n);
    }
}
