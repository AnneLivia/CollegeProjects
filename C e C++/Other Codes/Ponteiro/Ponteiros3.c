#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somar(int x)
{
    x++;
    printf("Valor de X dentro da fun��o = %i\n",x);
}

void somarPonteiro( int *pX)
{
    ++*pX;
}

/*int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero = 1;
    int *ponteiro = &numero;


    printf("Valor da vari�vel n�mero antes de ser alterada: %i\n",numero);
    somar(numero);
    printf("Valor da vari�vel n�mero depois de chamar a fun��o somar: %i\n",numero);
    somarPonteiro(ponteiro);
    printf("Valor da vari�vel depois de chamar a fun��o somarPonteiro passando o endere�o como argumento: %i\n",numero);
    return 0;
}
*/
