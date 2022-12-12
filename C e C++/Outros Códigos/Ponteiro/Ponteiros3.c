#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somar(int x)
{
    x++;
    printf("Valor de X dentro da função = %i\n",x);
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


    printf("Valor da variável número antes de ser alterada: %i\n",numero);
    somar(numero);
    printf("Valor da variável número depois de chamar a função somar: %i\n",numero);
    somarPonteiro(ponteiro);
    printf("Valor da variável depois de chamar a função somarPonteiro passando o endereço como argumento: %i\n",numero);
    return 0;
}
*/
