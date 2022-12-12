#include <stdio.h>


int main()
{
  int y, *p, x;
    y = 0;  // Está sendo atribuido 0 a variável y.
    p = &y; // Agora o ponteiro p está apontando para o endereço de y
    x = *p; // A variavel x está armazenando o valor que está no endereço que p está apontando
    x = 4;  // está sendo atribuido 4 a variavel x
    ++(*p); // está incrementando um ao valor que está no endereço que o ponteiro está apontando
    x--;  // está diminuido 1 ao valor da variável x
    (*p) += x++; /* O valor do endereço que o p está apontando está recebendo o valor que está
                    Armazenado no endereço, mais o valor de x anterior, só depois da atribuição que o valor
                    de x é incrementado
                */
    printf ("y = %d\n", y); // Está sendo impresso o valor de y que será 4

    return 0;
  }
