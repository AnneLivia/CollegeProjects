#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define QUANT 100

typedef struct{
  char nome[25];
  int quantidade;

} ingredientes;

typedef struct{
    char nome[25];
    int quantIng;
    ingredientes informacao[QUANT];
} receita;

int main()
{
    receita vetor[MAX];
    int i,j;
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o nome da receita: ");
        gets(vetor[i].nome);
        printf("Digite a quantidade de ingredientes: ");
        scanf("%d",&vetor[i].quantIng);
        printf("\n\n");
        for(j = 0; j < vetor[i].quantIng; j++)
        {
            setbuf(stdin,NULL);
            printf("Digite o nome do ingrediente %d: ",j+1);
            gets(vetor[i].informacao[j].nome);
            printf("Digite a quantidade de %s: ",vetor[i].informacao[j].nome);
            scanf("%d",&vetor[i].informacao[j].quantidade);
        }

         system("cls");
     }
     printf("-------------------------------------- P E S Q U I S A R  R E C E I T A ----------------------------------------\n");
     char nomeReceita[25];
     int cont = 0;
     setbuf(stdin,NULL);
     printf("Digite o nome da receita: ");
     gets(nomeReceita);

     while(strcmp(nomeReceita,"") != 0)
     {
         for(i = 0; i < MAX; i++)
         {
             if(strcasecmp(nomeReceita,vetor[i].nome) == 0)
             {
                 printf("NOME: %s\n"
                        "QUANTIDADE DE INGREDIENTES: %d\n"
                        "INGREDIENTES: \n",vetor[i].nome,vetor[i].quantIng);
                for(j = 0; j < vetor[i].quantIng; j++)
                {
                    printf("%d - %s, QUANTIDADE: %d\n",j+1,
                                                     vetor[i].informacao[j].nome,
                                                     vetor[i].informacao[j].quantidade);
                }
                cont = 1;
             }
         }
         if(cont == 0)
         {
             printf("Receita nao encontrada\n\n");

         }
         cont = 0;
          system("pause");
          system("cls");
          printf("-------------------------------------- P E S Q U I S A R  R E C E I T A ----------------------------------------\n");
          printf("OBS: para sair do programa de enter sem digitar nada.\n");
          setbuf(stdin,NULL);
          printf("Digite o nome da receita: ");
          gets(nomeReceita);
     }




    return 0;
}
