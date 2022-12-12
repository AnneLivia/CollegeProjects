#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct{
 int dia;
 int mes;
 int ano;
}data;

typedef struct{
  char compromisso[50];
  data calendario;
}agenda;

int main()
{
    agenda vetor[MAX];
    int i;
    for( i = 0; i < MAX; i++)
    {
        fflush(stdin);
        printf("COMPROMISSO: \n");
        fgets(vetor[i].compromisso,50,stdin);
        printf("DIA: ");
        scanf("%d",&vetor[i].calendario.dia);
        printf("MES: ");
        scanf("%d",&vetor[i].calendario.mes);
        printf("ANO: ");
        scanf("%d",&vetor[i].calendario.ano);
        system("cls");
    }
    int m, a,cont;
    printf("Digite o mes: ");
    scanf("%d",&m);
    while(m != 0)
    {
        cont = 0;
        printf("Digite o ano: ");
        scanf("%d",&a);
        for(i = 0; i < MAX; i++)
        {
          if(vetor[i].calendario.mes == m)
          {
              if(vetor[i].calendario.ano == a)
              {
                  printf("COMPROMISSO: %s\n\n",vetor[i].compromisso);
                  cont++;
              }
          }

        }
        if(cont == 0)
        {
            printf("Nenhuma compromisso para o mes %d do ano %d\n\n",m,a);
        }
        system("pause");
        system("cls");
        printf("Digite o mes: ");
        scanf("%d",&m);
    }

    return 0;
}
