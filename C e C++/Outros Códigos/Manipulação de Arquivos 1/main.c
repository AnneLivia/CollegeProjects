#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pFile;
    char string[100];
    int n1,n2;

    pFile = fopen("Arquivo.txt","w");

    if(pFile == NULL)
    {
        printf("Erro");
        exit(1);
    }

    printf("Digite alguma frase para armazenar no arquivo de texto: ");
    scanf(" %99[^\n]",string);
    printf("Digite alguma numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);

    fputs(string,pFile);
    fputc('\n',pFile);
    fputc('\n',pFile);
    fprintf(pFile,"%d x %d = %d",n1,n2,n1*n2);

    if(ferror(pFile)) // Poderia ser usado também a função perror();
    {
        printf("Erro ao gravar e abrir o arquivo!");
        fclose(pFile);
        exit(1);
    }

    printf("Arquivo gravado com sucesso!\n");
    fclose(pFile);
    return 0;
}
