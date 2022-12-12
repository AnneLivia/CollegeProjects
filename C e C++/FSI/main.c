#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int verificar(int t, float *m)
{
    int troca = 0, i;
    for(i = 0; i < t; i++)
    {
        if(m[i] > 20)
        {
            return troca = 1;
        }
    }
}

int main()
{
   typedef struct{
      char nome[50];
      int quantAlunos, quantProfessores;

    }school;

    setlocale(LC_ALL,"portuguese");

    int quantEscolas = 7;

    school escola[quantEscolas];

    // Escrevendo o nome das escolas
    strcpy(escola[0].nome,"Santa Cecília");
    strcpy(escola[1].nome,"Alcântara Felipe");
    strcpy(escola[2].nome,"Pio V");
    strcpy(escola[3].nome,"Laranjeiras");
    strcpy(escola[4].nome,"Caminho do Céu");
    strcpy(escola[5].nome,"Coração de Jesus");
    strcpy(escola[6].nome,"Felipe Afonso");

    // Inserindo quantidade de alunos e de professores

    escola[0].quantAlunos = 741; escola[0].quantProfessores = 43;
    escola[1].quantAlunos = 884; escola[1].quantProfessores = 38;
    escola[2].quantAlunos = 646; escola[2].quantProfessores = 37;
    escola[3].quantAlunos = 906; escola[3].quantProfessores = 39;
    escola[4].quantAlunos = 704; escola[4].quantProfessores = 40;
    escola[5].quantAlunos = 715; escola[5].quantProfessores = 41;
    escola[6].quantAlunos = 793; escola[6].quantProfessores = 40;


    char resp[6];
    int i,j;
    printf("______________________________________________________________________________________________________\n");
    printf("\n\tDeseja inserir dados novos ? Sim/Não\n\tOBS: Se não for inserido dados novos, serão utilizados os dados já"
           " Armazenados\n ");
    printf("\n______________________________________________________________________________________________________\n\n");
    printf("\tDigite: ");
    gets(resp);
    system("cls");
    printf("\n______________________________________________________________________________________________________________\n\n");
    if(strcasecmp(resp, "Sim") == 0)
    {
        printf("\tDigite a quantidade de escolas. ");
        printf("\n______________________________________________________________________________________________________________\n\n");
        printf("\tQuantas ? ");
        scanf("%d",&quantEscolas);
        escola[quantEscolas];
        system("cls");
        printf("\n________________________________________ E N T R A D A  D E  D A D O S ________________________________________\n\n");

        for(i = 0; i < quantEscolas; i++)
        {
           setbuf(stdin,NULL);
           printf("\tDigite o nome da escola: ");
           gets(escola[i].nome);
           printf("\tDigite a quantidade de alunos matriculados: ");
           scanf("%d",&escola[i].quantAlunos);
           printf("\tDigite a quantidade de professores da escola: ");
           scanf("%d",&escola[i].quantProfessores);
           system("cls");
    printf("\n________________________________________ E N T R A D A  D E  D A D O S ________________________________________\n\n");
        }
    }
    int copia[quantEscolas];
    for(i = 0; i < quantEscolas; i++)
    {
        copia[i] = escola[i].quantProfessores;
    }

    float media[quantEscolas];
    int troca = 0;

    for(i = 0; i < quantEscolas; i++)
    {
        media[i] = (float)escola[i].quantAlunos/escola[i].quantProfessores;
    }
    int m = -1, x;

    for (i = 0; i < quantEscolas; i++){
        x = strlen(escola[i].nome);
        if (x > m)
            m = x;        // Pegando quantidade de letras maiores para formatação do %s
    }
    m++;
    system("cls");
    printf("__________________________________________________________________________________________________________________\n\n");
    printf("ESCOLAS\t\t\tALUNOS\t\t\tPROFESSORES\t\tMEDIA (alunos/professores)\n\n");
    for(i = 0; i < quantEscolas; i++)
    {
        printf("-----------------------------------------------------------------------------------------------------------------\n");
        printf("%-*s\t%4d\t\t\t%6d\t\t\t\t%.2f\n",m,escola[i].nome,escola[i].quantAlunos,escola[i].quantProfessores,media[i]);
        printf("-----------------------------------------------------------------------------------------------------------------\n");
    }
    printf("\n\n_________________________________________________________________________________________________________________\n");


    troca = verificar(quantEscolas,media);

    printf("\n\n");
    if(troca == 1)
    {
        printf("\tDevido algumas escolas não terem alcançado a meta de pelo menos 1 professor para cada 20 alunos\n"
               "\tserá realizado como alternativa para alcançar a meta algumas transferências de professores de\n"
               "\tuma escola para outra.\n\n\n\t");
        system("pause");
    }
    else
    {
        printf("\tNão há necessidade de realizar mudanças, pois há pelo menos 1 professor para cada 20 alunos\n"
               "\tem cada uma das escolas analizadas\n\n\n\t");
        system("pause");
        exit(1);
    }
    j = 0;
    int maior[quantEscolas];
    int menor[quantEscolas];
    int contMaior, contMenor;

    for(i = 0; i < quantEscolas; i++)
    {
        if(media[i] > 20)
        {
            maior[j] = i;
            j++;
        }
    }

    contMaior = j;
    i = 0;
    printf("\n\tAs escolas que necessitam de mais professores são: \n\n");
    for(i = 0; i < contMaior; i++)
    {
        printf("\t%d - %s \n",i+1,escola[maior[i]].nome);
    }
    printf("\n\n\t");
    system("pause");
    for(j = 0; j < contMaior; j++)
    {
        for(i = 0; i < quantEscolas; i++)
        {
            while(media[i] < 19 && media[maior[j]] > 20)
            {
                escola[i].quantProfessores--;
                escola[maior[j]].quantProfessores++;
                media[i] = (float)escola[i].quantAlunos/escola[i].quantProfessores;
                media[maior[j]]= (float)escola[maior[j]].quantAlunos/escola[maior[j]].quantProfessores;
            }
        }
    }
    for(i = 0; i < quantEscolas; i++)
    {
        if(media[i] > 20)
        {
            printf("\n\tImpossivel realizar as transferências de professores devido a pouca quantidade dos servidores na cidade.\n\t");
            system("pause");
            system("cls");
            exit(1);
        }
    }
    printf("\n__________________________________________________________________________________________________________________\n\n");
    printf("\n________________________________________ T A B E L A  A T U A L I Z A D A ________________________________________\n\n");
    printf("ESCOLAS\t\t\tALUNOS\t\t\tPROFESSORES\t\tMEDIA (alunos/professores)\n\n");
    for(i = 0; i < quantEscolas; i++)
    {
        printf("-----------------------------------------------------------------------------------------------------------------\n");
        printf("%-*s\t%4d\t\t\t%6d\t\t\t\t%.2f\n",m,escola[i].nome,escola[i].quantAlunos,escola[i].quantProfessores,media[i]);
        printf("-----------------------------------------------------------------------------------------------------------------\n");
    }
    j = 0;
    int ok = 0;
    printf("\n\tAs escolas que tiveram transferências e transferiram professores foram: \n\n");
    for(i = 0; i < quantEscolas; i++)
    {
        if(escola[i].quantProfessores != copia[i])
        {
            printf("\t%d - %s \n",i+1,escola[i].nome);
        }
    }

    printf("\n\n___________________________________________________________________________________________________ A.L ________\n");
    return 0;
}
