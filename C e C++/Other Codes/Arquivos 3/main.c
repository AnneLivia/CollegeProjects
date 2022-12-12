#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivo.txt","w");
    if(arquivo == NULL)
    {
        printf("Erro");
        exit(0);
    }
    fprintf(arquivo,"ola");
    fclose(arquivo);

    arquivo = fopen("arquivo.txt","r");

    if(arquivo == NULL)
    {
        printf("Erro");
        exit(0);
    }
    char vetor[4];
    fscanf(arquivo,"%s", vetor);
    printf("%s",vetor);
    fclose(arquivo);
    return 0;
}
