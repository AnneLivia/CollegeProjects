#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct horario
{
    int hora;
    int minuto;
    int segundo;
    int soma;

}tempo;

int main()
{
    tempo horario(tempo *t);
    void quantsegundos(tempo *pSeg);
    void quantTempo(tempo *pSegundos);
    void VerificacaoDeTurno(char *p, int n, tempo *pT);

    tempo tempo1, tempo2, tempo3, *pT1, *pT2, *pT3;
    int opt1,opt2,cont;

    char dia1[TAM],dia2[TAM],dia3[TAM];

    pT1 = &tempo1;
    pT2 = &tempo2;
    pT3 = &tempo3;

    printf("\nEntrada com os dados do horario 1.\n\n");
    horario(pT1);
    printf("\nEntrada com os dados do horario 2.\n\n");
    horario(pT2);
    system("cls");

    VerificacaoDeTurno(dia1,TAM,pT1);
    VerificacaoDeTurno(dia2,TAM,pT2);

    printf("------------------------------------- Q U A N T I D A D E  D E  S E G U N D O S -------------------------------------\n");
    printf("Em qual horario voce deseja ver a quantidade de segundos: \n"
           "[1] - Horario 1: %dh:%dm:%ds %s\n"
           "[2] - Horario 2: %dh:%dm:%ds %s\n"
           "Digite aqui: ",tempo1.hora,pT1->minuto,pT1->segundo,dia1, pT2->hora,pT2->minuto,pT2->segundo,dia2);

    scanf("%d",&opt1);

    while(opt1 != 1 && opt1 != 2)
    {
            system("cls");
            printf("------------------------------------- Q U A N T I D A D E  D E  S E G U N D O S -------------------------------------\n");
            printf("\n\aOpcao invalida, digite novamente.\n");
            printf("Em qual horario voce deseja ver a quantidade de segundos: \n"
                   "[1] - Horario 1: %dh:%dm:%ds %s\n"
                   "[2] - Horario 2: %dh:%dm:%ds %s"
                   "\nDigite aqui: ",pT1->hora,pT1->minuto,pT1->segundo,dia1, pT2->hora,pT2->minuto,pT2->segundo,dia2);


            scanf("%d",&opt1);
    }

    quantsegundos(pT1);
    quantsegundos(pT2);

    switch(opt1)
    {
        case 1 : printf("\nQuantidade de segundos do horario 1: %d\n", pT1->soma);
                 break;

        case 2 : printf("\nQuantidade de segundos do horario 2: %d\n", pT1->soma);
                 break;
    }

     printf("\n----------------------- Q U A N T I D A D E S  D E  H O R A S / M I N U T O S / S E G U N D O S -----------------------\n");
     printf("Deseja obter o resultado da quantidade de horas/minutos/segundos com: \n"
            "[1] Quantidade de segundos do horario 1\n"
            "[2] Quantidade de segundos do horario 2\n"
            "[3] Nova quantidade de segundos\nDigite aqui: ");

     scanf("%d",&opt2);

     while(opt2 < 1 || opt2 > 3)
     {
        system("cls");
        printf("\n----------------------- Q U A N T I D A D E S  D E  H O R A S / M I N U T O S / S E G U N D O S -----------------------\n");
        printf("\aDeseja obter o resultado da quantidade de horas/minutos/segundos com: \n"
            "[1] Quantidade de segundos do horario 1\n"
            "[2] Quantidade de segundos do horario 2\n"
            "[3] Nova quantidade de segundos\nDigite aqui: ");

        scanf("%d",&opt2);
     }

     system("cls");
     printf("\n----------------------- Q U A N T I D A D E S  D E  H O R A S / M I N U T O S / S E G U N D O S -----------------------\n");


     switch(opt2)
     {
         case 1 : printf("\n\nOpcao escolhida: 1\n\n");
                  printf("Transformacao da quantidade de segundos do horario 1 para Horas/Minutos/Segundos\n\n");
                  printf("\n-----------------------------------------------------------------------------------\n");
                  quantTempo(pT1);
                  printf("\n-----------------------------------------------------------------------------------\n\n");
                  VerificacaoDeTurno(dia1,TAM,pT1);
                  printf("%dh:%dm:%ds %s\n",pT1->hora,pT1->minuto,pT1->segundo,dia1);
                  break;

         case 2 : printf("\n\nOpcao escolhida: 2\n");
                  printf("Transformacao da quantidade de segundos do horario 2 para Horas/Minutos/Segundos\n\n");
                  printf("\n-----------------------------------------------------------------------------------\n");
                  quantTempo(pT2);
                  printf("\n-----------------------------------------------------------------------------------\n\n");
                  VerificacaoDeTurno(dia2,TAM,pT2);
                  printf("%dh:%dm:%ds %s\n",pT2->hora,pT2->minuto,pT2->segundo,dia2);
                  break;

         case 3 : printf("\n\nOpcao escolhida: 3\n");
                  printf("Digite a quantidade de segundos: ");
                  scanf("%d",&pT3->soma);
                  printf("\n-----------------------------------------------------------------------------------\n");
                  quantTempo(pT3);
                  printf("\n-----------------------------------------------------------------------------------\n\n");
                  VerificacaoDeTurno(dia3,TAM,pT3);
                  printf("%dh:%dm:%ds %s\n",pT3->hora,pT3->minuto,pT3->segundo,dia3);
                  break;
     }

    return 0;
}
tempo horario(tempo *pT)
{

    printf("Horas: ");
    scanf("%d",&pT->hora);
    while(pT->hora >= 24 || pT->hora < 0)
    {
       printf("Digite a hora novamente em um tempo valido entre 23 horas: ");
       scanf("%d",&pT->hora);
    }


    printf("Minutos: ");
    scanf("%d",&pT->minuto);
    while(pT->minuto >= 60 || pT->minuto < 0)
    {
       printf("Digite o minuto novamente em um tempo valido entre 59 minutos: ");
       scanf("%d",&pT->minuto);
    }


    printf("Segundos: ");
    scanf("%d",&pT->segundo);
    while(pT->segundo >= 60 || pT->segundo < 00)
    {
       printf("Digite o segundo novamente em um tempo valido entre 59 segundos: ");
       scanf("%d",&pT->segundo);
    }

}
void quantsegundos(tempo *pSeg)
{
    pSeg->minuto = pSeg->minuto * 60;
    pSeg->hora = pSeg->hora * 3600;
    pSeg->soma = pSeg->minuto + pSeg->hora + pSeg->segundo;
}

void VerificacaoDeTurno(char p[],int n, tempo *pT)
{
    int cont;
    char AM[] = {"AM"};
    char PM[] = {"PM"};

    if(pT->hora >= 0 && pT->hora <=11)
    {
       for(cont = 0; cont < n; cont++)
       {
           p[cont] = AM[cont];
       }
    }
    else
    {
        for(cont = 0; cont < n; cont++)
        {
           p[cont] = PM[cont];
        }

    }
}
void quantTempo(tempo *pSegundos)
{
    int segundos;
    segundos = pSegundos->soma;

    printf("Quantidade de Segundos fornecido: %d",segundos);

    pSegundos->hora = (segundos/3600);
    pSegundos->minuto = (segundos - (pSegundos->hora*3600))/60;
    pSegundos->segundo =  (segundos - (3600*pSegundos->hora) - (pSegundos->minuto*60));
}

