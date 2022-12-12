#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Q, i, j, contNotas = 0;
    float mediaAritm, SomaMedia = 0;

    printf("Quantos alunos contem: ");
    scanf("%d",&Q);

    float matriz[Q][1];

    for(i = 0; i < Q; i++)
    {
        for(j = 0; j < 1; j++)
        {
            printf("Digite a nota do aluno %d: ", i+1);
            scanf("%f",&matriz[i][j]);
            SomaMedia = matriz[i][j] + SomaMedia;
        }

    }

    mediaAritm = SomaMedia/Q;

    printf("\nA media aritmetica das notas e: %.2f\n",mediaAritm);
    for(i = 0; i < Q; i++)
    {
        for(j = 0; j < 1; j++)
        {
            if(matriz[i][j] > 5.0)
            {
               contNotas +=1;
            }
        }
    }

    if(contNotas == 0)
    {
        printf("Nenhum aluno tirou nota acima de 5.0\n");
    }
    else if(contNotas == 1)
    {
        printf("Somente um aluno tirou nota acima de 5.0\n");
    }
    else
    {
        printf("%d alunos tirou nota acima de 5.0\n",contNotas);
    }

    return 0;
}
