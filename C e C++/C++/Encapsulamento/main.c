#include <stdio.h>
#include <stdlib.h>
#include "encapsulamento.h"

int main()
{
    float d;
    ponto *p, *q;

    p = pto_cria(10,21);
    q = pto_cria(7,25);

    d = pto_distancia(p,q);
    printf("Distancia entre dois: %.2f",d);
    pto_libera(p);
    pto_libera(q);
    return 0;
}
