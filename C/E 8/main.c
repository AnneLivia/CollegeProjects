#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    do{

        printf("Digite zero para finalizar o programa\n");
        printf("Digite um valor: ");
        scanf("%d",&n);
        if(n != 0){
            printf("Quadrado de %d: %d\n",n,n*n);
            printf("Cubo de %d: %.2f\n",n,pow(n,3));
            printf("Raiz de %d: %.2f\n",n,sqrt(n));
        }
        system("pause");
        system("cls");

    }while(n != 0);
      printf("\nPrograma finalizado.\n");
    return 0;
}
