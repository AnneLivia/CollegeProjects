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
    printf("Endere�o de num atravez do ponteiro pGenerico: %p\n",pGenerico);
    printf("Endere�o de num utilizado o 'e' comercial: %p\n",&num);

    printf("____________________________Mudando o valor do endere�o____________________________\n");

    *(int*)pGenerico = 55;
    printf("_______________________________Valores atualizados_______________________________\n");
    printf("Valor de num atravez do pGenerico: %d\n",*(int*)pGenerico);
    printf("Valor de num atravez da variavel num: %d\n",num);
    printf("Endere�o de num atravez do ponteiro pGenerico: %p\n",pGenerico);
    printf("Endere�o de num utilizado o 'e' comercial: %p\n",&num);

     printf("____________________________Incrementando o endere�o____________________________\n");
     int vetor[5] = {6,4,3,5,2};
     pGenerico = NULL;
     pGenerico = &vetor[0];
     printf("Endere�o apontado pelo pGenerico: %d\n",pGenerico);
     printf("Valor que est� no endere�o apontado por pGenerico: %d\n",*(int*)pGenerico);
     pGenerico = pGenerico + 3 * sizeof(int);
     printf("Endere�o apontado pelo pGenerico incrementado mais 3 posi��es: %d\n",pGenerico);
     printf("Valor que est� no endere�o apontado por pGenerico: %d\n",*(int*)pGenerico);


    return 0;
}
