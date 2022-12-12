#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num = 10;
    void *pGenerico;

    pGenerico = &num;

    printf("_______________________________Ponteiros genericos_______________________________\n");
    printf("Valor de num atravez do pGenerico: %d\n",*(int*)pGenerico);
    printf("Valor de num atravez da variavel num: %d\n",num);
    printf("Endereço de num atravez do ponteiro pGenerico: %p\n",pGenerico);
    printf("Endereço de num utilizado o 'e' comercial: %p\n",&num);

    printf("____________________________Mudando o valor do endereço____________________________\n");

    *(int*)pGenerico = 55;
    printf("_______________________________Valores atualizados_______________________________\n");
    printf("Valor de num atravez do pGenerico: %d\n",*(int*)pGenerico);
    printf("Valor de num atravez da variavel num: %d\n",num);
    printf("Endereço de num atravez do ponteiro pGenerico: %p\n",pGenerico);
    printf("Endereço de num utilizado o 'e' comercial: %p\n",&num);

     printf("____________________________Incrementando o endereço____________________________\n");
     int vetor[5] = {6,4,3,5,2};
     pGenerico = NULL;
     pGenerico = &vetor[0];
     printf("Endereço apontado pelo pGenerico: %d\n",pGenerico);
     printf("Valor que está no endereço apontado por pGenerico: %d\n",*(int*)pGenerico);
     pGenerico = pGenerico + 3 * sizeof(int);
     printf("Endereço apontado pelo pGenerico incrementado mais 3 posições: %d\n",pGenerico);
     printf("Valor que está no endereço apontado por pGenerico: %d\n",*(int*)pGenerico);


    return 0;
}
