#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    typedef struct{
      char nome[30];
      int numMat;
      float nap1, nap2;
    } sala;

    sala aluno[MAX];
    int i, alunoNap1,alunoMaior, alunoMenor;
    float media[MAX];
    for(i = 0; i < MAX; i++)
    {
         setbuf(stdin,NULL);
         printf("Digite o nome: ");
         gets(aluno[i].nome);
         printf("Digite o numero de matricula: ");
         scanf("%d",&aluno[i].numMat);
         printf("Digite o nap 1: ");
         scanf("%f",&aluno[i].nap1);
         printf("Digite o nap 2: ");
         scanf("%f",&aluno[i].nap2);
         media[i] = (aluno[i].nap1 + aluno[i].nap2)/2;
         system("cls");
    }

    float maiorNap1 = aluno[0].nap1;
    float maiorMedia, menorMedia;
    maiorMedia = media[0];
    menorMedia = media[0];
    alunoNap1 = alunoMenor = alunoMaior = 0;

    for(i = 0; i < MAX; i++)
    {
        if(maiorNap1 < aluno[i].nap1)
        {
            maiorNap1 = aluno[i].nap1;
            alunoNap1 = i;
        }
        if(maiorMedia < media[i])
        {
            maiorMedia = media[i];
            alunoMaior = i;
        }
        if(menorMedia > media[i])
        {
            menorMedia = media[i];
            alunoMenor = i;
        }
        if(media[i] >= 6.0)
        {
            printf("Aluno %s esta aprovado com media %.2f\n",aluno[i].nome,media[i]);
        }
        else
        {
            printf("Aluno %s esta reprovado com media %.2f\n",aluno[i].nome,media[i]);
        }
    }
    printf("\n\n");
    printf("Melhor nota do Nap 1: %.2f foi do(a) %s\n",maiorNap1,aluno[alunoNap1].nome);
    printf("Maior media: %.2f foi do(a) %s\n",maiorMedia,aluno[alunoMaior].nome);
    printf("Menor media: %.2f foi do(a) %s\n",menorMedia,aluno[alunoMenor].nome);
    return 0;
}
