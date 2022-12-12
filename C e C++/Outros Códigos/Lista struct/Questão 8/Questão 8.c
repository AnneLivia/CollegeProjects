#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 5

typedef struct{
  char nome[25];
  char estilo[25];
  int quantP;
  int posicao;
} banda;

int posicao();

int main()
{
    banda grupos[MAX];
    int i;


    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o nome da banda: ");
        gets(grupos[i].nome);
        setbuf(stdin,NULL);
        printf("Digite o estilo musica da banda: ");
        gets(grupos[i].estilo);
        printf("Digite a quantidade de integrantes da banda: ");
        scanf("%d",&grupos[i].quantP);
        system("cls");
    }
    char resp;
    int cont = 0,j, verificar;
    for(i = 0; i < MAX; i++)
    {
        do{
        printf("Digite a posicao da banda %s no ranking das 5 bandas favoritas: ",grupos[i].nome);
        scanf("%d",&grupos[i].posicao);
        system("cls");
        }while(grupos[i].posicao <= 0 || grupos[i].posicao > 5);
    }
    int pos = posicao();
    int achou = 0;

    for(i = 0; i < MAX; i++)
    {
        if(pos == grupos[i].posicao)
        {
            printf("Banda: %s\n"
                   "Estilo musical: %s\n"
                   "Quantidade de membros: %d\n"
                   "Posicao no ranking: %d\n\n\n", grupos[i].nome,
                                                   grupos[i].estilo,
                                                   grupos[i].quantP,
                                                   grupos[i].posicao);
            achou = 1;
        }

    }
    if(achou == 0)
    {
        printf("Voce digitou um numero invalido.\n");
    }

    return 0;
}

int posicao(){
  int n;
  printf("Digite a posicao da banda: ");
  scanf("%d",&n);
  return n;
}

