#include <stdio.h>
#include <stdlib.h>

/*
   REALLOC serve para alocação ou realocação de memoria
   prototipo:
   void* realloc(int *ponteiro, tamanho bytes);
*/
int main()
{
    int *p,i;

    p = (int *) malloc(5 * sizeof(int));

    if(p == NULL)
    {
        printf("erro\n");
        exit(1);
    }

    for(i = 0; i < 5; i++)
    {
        p[i] = i;
        printf("%d ",p[i]);
    }
    printf("\n");
    int *p1;

    p1 = (int *) realloc(p,10 * sizeof(int));




    printf("\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ",p[i]);
    }

    free(p);
    //p = (int*) realloc(p,0);

    return 0;
}
