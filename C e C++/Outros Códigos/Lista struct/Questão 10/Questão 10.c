#include <stdio.h>
int main() {

struct ponto{
    int x;
    int y;
};

struct ponto p,v1,v2;

printf("Digite x do ponto p: ");
scanf("%d",&p.x);
printf("Digite y do ponto p: ");
scanf("%d",&p.y);

printf("Digite x do vertice inferior esquerdo do retangulo: ");
scanf("%d",&v1.x);
printf("Digite y do vertice inferior esquerdo do retangulo: ");
scanf("%d",&v1.y);

printf("Digite x do vertice superior esquerdo do retangulo: ");
scanf("%d",&v2.x);
printf("Digite y do vertice superior esquerdo do retangulo: ");
scanf("%d",&v2.y);

int i;

if((p.x >= v1.x && p.x <= v2.x) && (p.y >= v1.y && p.y <= v2.y))
{
    printf("O ponto (%d,%d) esta dentro do retangulo.\n",p.x,p.y);
}
else
{
    printf("O ponto (%d,%d) esta fora do retangulo.\n",p.x,p.y);
}
return 0;
}
