#include <stdio.h>
#include <stdlib.h>



float SomaValores(float a,float b)
{
    float ValorAbsoluto(float); // O prototipo da função foi criado aqui, ele pode ser criado em cima também, o que acontece é que eu tenho que declarar ele antes de usar ele

    if(a < 0)
    {
        a = ValorAbsoluto(a);
    }
    if(b < 0)
    {
        b = ValorAbsoluto(b);
    }

    return a + b;
}

float ValorAbsoluto(float a)
{
    return a * -1;
}

int main()
{
    float n1,n2,soma;
    printf("Digite o valor 1: ");
    scanf("%f",&n1);
    printf("Digite o valor 2: ");
    scanf("%f",&n2);

    soma = SomaValores(n1,n2);
    printf("%.2f",soma);
    return 0;
}
