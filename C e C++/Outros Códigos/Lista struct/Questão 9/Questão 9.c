#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 5

typedef struct{
  char nome[50];
  char endereco[100];
  char telefone[15];

}nomes;
int main()
{
    nomes pessoas[MAX];
    int i;

    for(i = 0; i < MAX; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite seu nome: ");
        gets(pessoas[i].nome);
        setbuf(stdin,NULL);
        printf("Digite seu endereco: ");
        gets(pessoas[i].endereco);
        setbuf(stdin,NULL);
        printf("Digite seu numero de telefone: ");
        scanf(" %s",&pessoas[i].telefone);
        system("cls");
    }
    int j;
    nomes aux;

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            if(strcasecmp(pessoas[i].nome,pessoas[j].nome) < 0)
            {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] =  aux;
            }
        }
    }
    printf("-------------------------------------- L I S T A  D E  N O M E S --------------------------------------\n");
    for(i = 0; i < MAX; i++)
    {
        printf("NOME: %s\nENDERECO: %s\nTELEFONE: %s\n\n",pessoas[i].nome,pessoas[i].endereco,pessoas[i].telefone);

    }

    return 0;
}
