#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int hora;
    int minuto;
    int segundo;

} horario;

typedef struct{
   int dia;
   int mes;
   int ano;
} data;

typedef struct{
    horario informacao1;
    data informacao2;
    char texto[200];
} compromisso;
enum meses {jan,fev,mar,abril,maio,jun,jul,ago,set,out,nov,dez};
int main()
{
    compromisso agenda;
    printf("Digite a hora, minuto e segundo respectivamente: \n");
    scanf("%d %d %d",&agenda.informacao1.hora,&agenda.informacao1.minuto,&agenda.informacao1.segundo);
    printf("Digite o dia, mes e ano respectivamente: \n");
    scanf("%d %d %d",&agenda.informacao2.dia,&agenda.informacao2.mes,&agenda.informacao2.ano);
    setbuf(stdin,NULL);
    printf("Digite o texto do compromisso: ");
    gets(agenda.texto);

    system("cls");
    printf("--------------------- C O M P R O M I S S O  M A R C A D O ---------------------\n\n");
    agenda.informacao2.mes -=1;
    switch(agenda.informacao2.mes)
    {
        case jan   : printf("%d de Janeiro de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case fev   : printf("%d de Fevereio de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case mar   : printf("%d de Marco de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case abril : printf("%d de Abril de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case maio  : printf("%d de Maio de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case jun   : printf("%d de Junho de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case jul   : printf("%d de Julho de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case ago  : printf("%d de Agosto de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case set  : printf("%d de Setembro de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case out : printf("%d de Outubro de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case nov : printf("%d de Novembro de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;
        case dez : printf("%d de Dezembro de %d\n",agenda.informacao2.dia,agenda.informacao2.ano);
                   break;

    }

    printf("%dh:%dm:%ds\n",agenda.informacao1.hora,agenda.informacao1.minuto,agenda.informacao1.segundo);
    printf("------ %s",agenda.texto);
    return 0;
}
