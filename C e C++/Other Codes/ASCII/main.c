#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
*    Anne Livia
*/

void TparaA(char *t);
void AparaT(int q);

int main()
{
    setlocale(LC_ALL,"portuguese");
    char frase[8000];
    int opc,quant;
    printf("Menu\n 1 - Texto/ASCII\n 2 - ASCII/Texto\nDigite aqui: ");
    scanf("%d",&opc);
    system("cls");
    switch(opc)
    {
        case 1 :  setbuf(stdin,NULL);
                  printf("Digite uma frase: ");
                  gets(frase);
                  system("cls");
                  TparaA(frase);
                  break;
        case 2 :  printf(" Digite a quantidade de caracteres: ");
                  scanf("%d",&quant);
                  AparaT(quant);
                  break;
        default : printf("Opção invalida");
    }
    return 0;
}

void TparaA(char *t)
{
    char convertida[8000];
    int i, ASCII;
    printf("\n TEXTO/ASCII:\n\n");
    for(i = 0; i < strlen(t); i++)
    {
        ASCII = t[i];
        itoa(ASCII,convertida,2);
        printf(" %s",convertida);
    }
    printf("\n\n");
}

void AparaT(int q)
{
    int i, n[q];
    printf(" Digite os valores da tabela ASCII em decimal referentes aos caracteres.\n"
           " Obs: É precisa dar enter a cada valor em decimal digitado.\n\n Digite: \n");
    for(i = 0; i < q; i++)
    {
        printf(" ");
        scanf("%d",&n[i]);
    }
    system("cls");
    printf("\n ASCII/TEXTO:\n\n ");
    for(i = 0; i < q; i++)
    {
        printf("%c",n[i]);
    }
    printf("\n\n");
}
