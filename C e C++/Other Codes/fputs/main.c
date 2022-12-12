#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    p = fopen("arquivo.txt","w");
    if(p == NULL)
    {
        printf("erro");
        exit(1);
    }
    char texto[50] = "Esse e um texto na linguagem C";

    int retorno = fputs(texto,p);
    if(retorno == EOF)
    {
        printf("erro na gravação");
    }
    fclose(p);
    return 0;
}
