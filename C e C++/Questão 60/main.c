#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    int codigo;
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);
    switch(codigo){
        case 1 : printf("Sul"); break;
        case 2 : printf("Norte"); break;
        case 3 : printf("Leste"); break;
        case 4 : printf("Oeste"); break;
        case 5 : printf("Nordeste"); break;
        case 6 : printf("Sudeste"); break;
        case 7 : printf("Centro-oeste"); break;
        case 8 : printf("Nordeste"); break;
        default : printf("Codigo invalido");
    }
    return 0;
}
