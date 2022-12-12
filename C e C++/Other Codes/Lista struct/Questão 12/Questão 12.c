#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    struct{
       char nome[50];
       int numeroMat;
       char curso[50];
    } alunos[MAX];
    int i;
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite seu nome: ");
        gets(alunos[i].nome);
        printf("Numero de matricula: ");
        scanf("%d",&alunos[i].numeroMat);
        setbuf(stdin,NULL);
        printf("Nome do curso: ");
        gets(alunos[i].curso);
        system("cls");
    }

    printf("-------------------- L I S T A  D E  A L U N O S -----------------------\n\n");
    for(i = 0; i < MAX; i++)
    {
        printf("--------------------------------------------------------------------\n");

        printf("NOME: %s\nCURSO: %s\nNUMERO DE MATRICULA: %d\n",alunos[i].nome,alunos[i].curso,alunos[i].numeroMat);
    }

    return 0;
}
