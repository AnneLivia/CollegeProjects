#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *p1, *p2;

    p1 = fopen("minusculo.txt","r");
    p2 = fopen("maiusculo.txt","w");

    if(p1 == NULL || p2 == NULL)
    {
        printf("ERRO\n");
        exit(1);
    }

    int i;
    char c = fgetc(p1);
    while(c != EOF)
    {
        printf("%c",c);
        fputc(toupper(c),p2);
        c = fgetc(p1);
    }

    fclose(p1);
    fclose(p2);
    return 0;
}
