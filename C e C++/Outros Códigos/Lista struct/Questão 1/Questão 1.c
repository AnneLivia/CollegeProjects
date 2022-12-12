#include <stdio.h>
#include <stdlib.h>


int main()
{
    typedef struct{
       char nome[50];
       int numeroMat;
       float nota[2];
       float media;
    } classe;

    int quantAlunos, i;
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&quantAlunos);

    classe aluno[quantAlunos];
    system("cls");
    for(i = 0; i < quantAlunos; i++)
    {
        printf("------------------------------------- E N T R A D A  D E  D A D O S -----------------------------------------\n");
        setbuf(stdin,NULL);
        printf("Digite o nome: ");
        gets(aluno[i].nome);

        printf("Digite o numero de matricula: ");
        scanf("%d",&aluno[i].numeroMat);
        printf("Digite a nota 1: ");
        scanf("%f",&aluno[i].nota[0]);
        printf("Digite a nota 2: ");
        scanf("%f",&aluno[i].nota[1]);
        aluno[i].media = (aluno[i].nota[0] + aluno[i].nota[1])/2.0;
        system("cls");
    }

    printf("-------------------------------------   R E L A C A O  D E  N O T A S   -----------------------------------------\n\n");
    for(i = 0; i < quantAlunos; i++)
    {
        printf("Numero de Matricula: %d,   Nome: %s,    Media: %.2f    \n\n",aluno[i].numeroMat,aluno[i].nome,aluno[i].media);
    }


    return 0;
}
