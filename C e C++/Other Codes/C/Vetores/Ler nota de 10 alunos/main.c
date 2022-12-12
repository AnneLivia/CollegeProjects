#include <stdio.h>
#include <stdlib.h>
#define M 10

typedef struct notas{
   float n1,n2;
}nota;

int main()
{
    int leituraNotas(nota vet[],int n);

    nota alunos[M];
    int i,quantAlunosN1 = 0,quantAlunosN2 = 0;
    float mediaN1,mediaN2,somaN1,somaN2;

    somaN1 = somaN2 = 0;


   leituraNotas(alunos,M);

   for(i = 0; i < M; i++)
    {
       somaN1 = alunos[i].n1 + somaN1;
       somaN2 = alunos[i].n2 + somaN2;
    }


    printf("Soma 1 %.2f\nsoma 2 %.2f\n\n",somaN1,somaN2);

    mediaN1 = somaN1/M;
    mediaN2 = somaN2/M;

    for(i = 0; i < M; i++)
    {
       if(alunos[i].n1>mediaN1){
        quantAlunosN1 +=1;
       }
    }
    for(i = 0; i < M; i++)
    {
       if(alunos[i].n2>mediaN2){
        quantAlunosN2 +=1;
       }
    }


    printf("\nA media da primeira prova foi: %.2f\n\n\n",mediaN1);
    printf("A media da segunda prova foi: %.2f\n\n\n",mediaN2);
    printf("%d alunos tiraram nota acima da media da prova 1.\n\n",quantAlunosN1);
    printf("%d alunos tiraram nota maior a media da prova 2.\n\n",quantAlunosN2);

    return 0;
}

int leituraNotas(nota vet[],int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Digite a nota 1 do aluno %d: ",i+1);
        scanf("%f",&vet[i].n1);
        printf("Digite a nota 2 do aluno %d: ",i+1);
        scanf("%f",&vet[i].n2);
        system("cls");
    }
}
