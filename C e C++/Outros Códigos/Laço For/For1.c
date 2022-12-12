#include <stdio.h>
#include <stdlib.h>
/*
  ESTE PROGRAMA FAZ UM LOOP COM FOR ATE QUE O USUARIO DIGITE O VALOR CORRETO
*/
int main()
{
    int i;

    for(i=0;i!=12; )
    {
        printf("Digite o valor correto: ");
        scanf("%d",&i);
    }

    return 0;
}
