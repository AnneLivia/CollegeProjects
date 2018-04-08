#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;

    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d",&y);
    printf("Digite o valor de z: ");
    scanf("%d",&z);

    if(x + y > z && x + z > y && y + z > x){
        if(x == y && x == z && y == z){
            printf("Tringulo equilatero");
        }else if((x == y && x != z) || (x == z && x != y) || (y == z && y != x)){
            printf("Triangulo isoceles");
        }else if(x != y && x != z && z != y){
            printf("Triangulo escaleno");
        }
    }else{
       printf("Nao e triangulo");
    }
    return 0;
}
