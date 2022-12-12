#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
  char nome[15];
  float potencia;
  float horaAtivo;
  int t;
  float consumo;
}eletro;

int main()
{
    eletro quant[MAX];
    int i;
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("NOME: ");
        gets(quant[i].nome);
        printf("POTENCIA: ");
        scanf("%f",&quant[i].potencia);
        printf("TEMPO ATIVO EM HORAS: ");
        scanf("%f",&quant[i].horaAtivo);
        printf("TEMPO ATIVO EM DIAS: ");
        scanf("%d",&quant[i].t);
        system("cls");
    }

    float consumoTotal = 0, consumoRelativo[MAX];

    for(i = 0; i < MAX; i++)
    {
        quant[i].consumo = (quant[i].t * quant[i].horaAtivo * quant[i].potencia);
        printf("Consumo da  %s: %.2f\n",quant[i].nome,quant[i].consumo);
        consumoTotal += quant[i].consumo;
    }
    printf("O consumo total na casa e %.2f KW\n",consumoTotal);
    for(i = 0; i < MAX; i++)
    {
         consumoRelativo[i] = (quant[i].consumo/consumoTotal) * 100;
         printf("Consumo relativo do eletrodomestico %s: %.2f%%\n",quant[i].nome,consumoRelativo[i]);
    }

    return 0;
}
