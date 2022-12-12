#include <stdlib.h>
#include <math.h>
#include "encapsulamento.h"

//Definição dos tipos de dados
struct ponto{
    float x;
    float y;
};

ponto* pto_cria(float x, float y)
{
    ponto *p = (ponto*) malloc(sizeof(ponto));
    if(p != NULL)
    {
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(ponto *p)
{
    free(p);
}
// Abaixo, não da para devolver mais de 1 valor com o return, então é necessario que os argumentos sejam
// passados por referencia(ponteiro).
void  pto_acessa(ponto *p, float *x, float *y)
{
    *x = p->x;
    *y = p->y;
}

void pto_atribui(ponto *p, float x, float y)
{
    p->x = x;
    p->y = y;
}

float pto_distancia(ponto *p1, ponto *p2)
{
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
