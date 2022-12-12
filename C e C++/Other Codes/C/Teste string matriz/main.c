#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[4][50];
    int i,j;

    for(i = 0; i < 4; i++){
            setbuf(stdin,NULL);
            printf("Digite seu nome: ");
            gets(nomes);

    }
    printf("nomes: %s",nomes[1][50]);



    return 0;
}
