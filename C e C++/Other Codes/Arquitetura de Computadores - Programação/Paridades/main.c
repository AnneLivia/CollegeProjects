#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, cont = 0;
    char palavra[200];
    printf("Digite a palavra: ");
    gets(palavra);
    int tampalavra = strlen(palavra);
    system("cls");
    printf("-------------------------- T E S T E  D E  P A R I D A D E --------------------------\n\n");
    for(i = 0; i < tampalavra; i++)
    {
        printf("%2c",palavra[i]);
    }
    printf("    <- Palavra digitada");
    printf("\n\n");
    for(i = 0; i < tampalavra;i++)
    {
        if(palavra[i] == '1')
        {
            cont++;
        }
    }
    if(cont % 2 == 0)
    {
        palavra[tampalavra] = '0';
    }
    else
    {
        palavra[tampalavra] = '1';
    }
    palavra[tampalavra+1] = '\0';

    for(i = 0; i < tampalavra + 1; i++)
    {
            printf("%2c",palavra[i]);
    }
    printf("  <- Palavra com o digito de paridade gerado");
   printf("\n\n");


    return 0;
}
