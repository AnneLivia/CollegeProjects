#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra1[20],palavra2[20];


    gets(palavra1);
    gets(palavra2);
    printf("Comprimento palavra 1: %d\nComprimento palavra 2: %d\n",strlen(palavra1),strlen(palavra2));
    if(!strcmpi(palavra1,palavra2))
    {
        printf("Palavras sao iguais.\n");
    }
    strcat(palavra1," ");
    strcat(palavra1,palavra2);
    printf("%s\n",palavra1);
    if(strchr("ola",'o')) // verifica se determinado caractere está no lugar especifico
    {
        printf("A letra 'o' esta na palavra \"ola\"\n");
    }
    if(strstr("aqui ola","ola")) // verifica se determinada string está em local especifico
    {
        printf("A palavra 'ola' esta na frase \"aqui ola\".");
    }
    return 0;
}
