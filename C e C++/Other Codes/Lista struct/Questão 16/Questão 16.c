#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct{
   char nome[50];
   float mediaFinal;
   int numeroMat;
} classe;

int main()
{
    classe alunos[MAX];
    int i, cont1,cont2;
    cont1 = cont2 = 0;

    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite seu nome: ");
        gets(alunos[i].nome);
        setbuf(stdin,NULL);
        printf("Digite seu numero de matricula: ");
        scanf("%d",&alunos[i].numeroMat);
        printf("Digite sua media final: ");
        scanf("%f",&alunos[i].mediaFinal);
        system("cls");
    }

    classe aprovados[MAX];
    classe reprovados[MAX];

    for(i = 0; i < MAX; i++)
    {
        if(alunos[i].mediaFinal >= 5.0)
        {
            aprovados[cont1] = alunos[i];
            cont1++;
        }
        else
        {
            reprovados[cont2] = alunos[i];
            cont2++;
        }
    }



    printf("______________________________________________________________________\n");
    printf("\nAPROVADOS: \n\n");

    for(i = 0; i < cont1; i++)
    {
        printf("-------------------------------------------------------------------\n");
        printf("NOME: %s\n"
               "NUMERO DE MATRICULA: %d\n"
               "MEDIA FINAL: %.2f\n\n",aprovados[i].nome,
                                     aprovados[i].numeroMat,
                                     aprovados[i].mediaFinal);
    }
    printf("______________________________________________________________________\n");
    printf("\nREPROVADOS: \n\n");

    for(i = 0; i < cont2; i++)
    {
        printf("-------------------------------------------------------------------\n");
        printf("NOME: %s\n"
               "NUMERO DE MATRICULA: %d\n"
               "MEDIA FINAL: %.2f\n\n",reprovados[i].nome,
                                     reprovados[i].numeroMat,
                                     reprovados[i].mediaFinal);

    }
    return 0;
}
