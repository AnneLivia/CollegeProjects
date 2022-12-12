#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a = 5;
    int *pA;
    pA = &a;

    printf("Valor da variavel a: %d\n",*pA);
    printf("Endereco da variavel a: %d\n",pA);
    printf("Endereco do ponteiro pA: %d\n",&pA);
    printf("Endereco de a: %d\n",&a);
    */

    int num;
    int *p;
    num = 55;
    p = &num;

    printf("Conteudo de p: %d\n",p);
    printf("Valor apontado por p: %d\n",*p);
    printf("Conteudo de p encrementado: %d\n",++p);
    printf("Conteudo de p: %d\n", p);



    return 0;
}
