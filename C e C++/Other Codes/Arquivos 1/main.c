#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;

    f = fopen("C:\\Users\\annel\\Desktop\\respostas use of english.txt","w");

    if(f == NULL)
    {
        printf("Erro nao existe arquivo.");
        exit(1);
    }
    int i;
    char texto[] = "Esse e meu primeiro texte em arquivo em c";
    for(i = 0; i < strlen(texto); i++)
    {
        fputc(texto[i],f);
        fputc('-',f);
    }
    fclose(f);

    return 0;
}
