#include <stdio.h>


int main()
{
  int y, *p, x;
    y = 0;  // Est� sendo atribuido 0 a vari�vel y.
    p = &y; // Agora o ponteiro p est� apontando para o endere�o de y
    x = *p; // A variavel x est� armazenando o valor que est� no endere�o que p est� apontando
    x = 4;  // est� sendo atribuido 4 a variavel x
    ++(*p); // est� incrementando um ao valor que est� no endere�o que o ponteiro est� apontando
    x--;  // est� diminuido 1 ao valor da vari�vel x
    (*p) += x++; /* O valor do endere�o que o p est� apontando est� recebendo o valor que est�
                    Armazenado no endere�o, mais o valor de x anterior, s� depois da atribui��o que o valor
                    de x � incrementado
                */
    printf ("y = %d\n", y); // Est� sendo impresso o valor de y que ser� 4

    return 0;
  }
