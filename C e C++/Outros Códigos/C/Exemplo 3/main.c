#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    float raio, altura,area;
    int lata,cadalata;
    lata = 5;
    cadalata = 0;
    int quantLata = 0;

    printf("Digite o tamanho do raio: ");
    scanf("%f",&raio);
    printf("Digite o tamanho da altura: ");
    scanf("%f",&altura);

    area = (PI * pow(raio,2)+(2*PI*raio*altura));
    printf("%.2f\n",area);

    while(cadalata<area){
        cadalata = cadalata + lata * 3;
        quantLata = quantLata + 1;
    }

    printf("A quantidade de lata: %d\n",quantLata);
    printf("O preco equivale a %.2f",quantLata * 20.00);


    return 0;
}
