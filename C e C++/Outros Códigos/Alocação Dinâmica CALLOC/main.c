#include <stdio.h>
#include <stdlib.h>

/*
*  Alocar memória dinamicamente com CALLOC
*  ele é a mesma coisa que o malloc a diferença é que o
*  malloc somente aloca a memoria já o calloc ele além de alocar, ele atribui
*  varios zeros a cada bit.
   prototipo:
   void* calloc(unsigned int num, unsigned int tamanho de byte);
*/
int main()
{

    int *p,i;
    p = (int *) calloc(5,sizeof(4));

    if(p == NULL)
    {
        printf("ERRO: nao tem memoria\n");
        exit(1);
    }

    printf("Tem varios zero. \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\nTem varios numeros. \n");
    for(i = 0; i < 5; i++)
    {
        p[i] = i;
        printf("%d ", p[i]);
    }


    free(p);

    return 0;
}
