#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct{
      char nome[15];
      float notas[3];
      float mediaFinal;
      int nivel;
    } classe;

int main()
{
    classe alunos[N];
    int i,j;
    float mediadaSala, somaMedia = 0;
    for(i = 0; i < N; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o nome: ");
        gets(alunos[i].nome);
        for(j = 0; j < 3; j++)
        {
            printf("Digite nota %d: ",j+1);
            scanf("%f",&alunos[i].notas[j]);
        }
        alunos[i].mediaFinal = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3.0;
        system("cls");
    }
    for(i = 0; i < N; i++)
    {
         somaMedia = alunos[i].mediaFinal + somaMedia;
    }

    mediadaSala = somaMedia/N;
    for(i = 0; i < N; i++)
    {
        alunos[i].nivel = (5*alunos[i].mediaFinal/mediadaSala);
    }

    for(i = 0; i < N; i++)
    {
        printf("NOME: %s\nNIVEL: %d\n\n",alunos[i].nome,alunos[i].nivel);
    }


    return 0;
}
