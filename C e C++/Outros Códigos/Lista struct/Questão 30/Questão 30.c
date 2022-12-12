#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
  int mes;
  int ano;
} data;

typedef struct{
  int codigo;
  float litros;
  float quantAlimento;
  data nascimento;

} gado;
int main()
{
    gado cabecas[MAX];
    int i;
    float quantTL, quantTA;
    quantTA = quantTL = 0;
    for( i = 0; i < MAX; i++)
    {
        printf("Digite o codigo da cabeca de gado:");
        scanf("%d",&cabecas[i].codigo);
        printf("Digite o numero de litros de leite produzido por semana: ");
        scanf("%f",&cabecas[i].litros);
        printf("Digite a quantidade de alimentos consumidos por semana em quilo: ");
        scanf("%f",&cabecas[i].quantAlimento);
        printf("Digite o mes de nascimento: ");
        scanf("%d",&cabecas[i].nascimento.mes);
        printf("Digite o ano de nascimento: ");
        scanf("%d",&cabecas[i].nascimento.ano);
        system("cls");
        quantTA += cabecas[i].quantAlimento;
        quantTL += cabecas[i].litros;
    }

    printf("Quantidade total de leite produzidos por semana: %.2f litros\n",quantTL);
    printf("Quantidade total de alimentos consumidos por semana: %.2f quilos\n",quantTA);



    return 0;
}
