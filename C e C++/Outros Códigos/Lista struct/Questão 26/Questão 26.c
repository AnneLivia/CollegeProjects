#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define QUANT 200

typedef struct{
  char nome[25];
  int ano;
  int duracao;

} movie;

typedef struct{
    char nome[50];
    int quantFilmes;
    movie filmes[QUANT];
} diretores;

int main()
{
    diretores vetor[MAX];
    int i,j;
    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite o nome do diretor: ");
        gets(vetor[i].nome);
        printf("Digite a quantidade de filmes: ");
        scanf("%d",&vetor[i].quantFilmes);
        printf("\n\n");
        for(j = 0; j < vetor[i].quantFilmes; j++)
        {
            setbuf(stdin,NULL);
            printf("Digite o nome do filme %d: ",j+1);
            gets(vetor[i].filmes[j].nome);
            printf("Digite a duracao de %s: ",vetor[i].filmes[j].nome);
            scanf("%d",&vetor[i].filmes[j].duracao);
            printf("Digite o ano de lancamento do filme: ");
            scanf("%d",&vetor[i].filmes[j].ano);
        }

         system("cls");
     }
     printf("-------------------------------------- P E S Q U I S A R ----------------------------------------\n");
     char diretor[25];
     int cont;
     setbuf(stdin,NULL);
     printf("Digite o nome do diretor(a): ");
     gets(diretor);

     while(strcmp(diretor,"") != 0)
     {
         cont = 0;
         for(i = 0; i < MAX; i++)
         {
             if(strcasecmp(diretor,vetor[i].nome) == 0)
             {
                 printf("NOME: %s\n"
                        "QUANTIDADE DE FILMES: %d\n"
                        "FILMES: \n",vetor[i].nome,vetor[i].quantFilmes);
                for(j = 0; j < vetor[i].quantFilmes; j++)
                {
                    printf("%d - %s, DURACAO: %d, ANO: %d\n",j+1,
                                                             vetor[i].filmes[j].nome,
                                                             vetor[i].filmes[j].duracao,
                                                             vetor[i].filmes[j].ano);
                }
                cont++;
             }
         }
         if(cont == 0)
         {
             printf("diretor nao encontrado\n\n");

         }
          system("pause");
          system("cls");
          printf("-------------------------------------- P E S Q U I S A R ----------------------------------------\n");
          printf("OBS: para sair do programa de enter sem digitar nada.\n");
          setbuf(stdin,NULL);
          printf("Digite o nome do diretor: ");
          gets(diretor);
     }




    return 0;
}
