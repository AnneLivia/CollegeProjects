#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a[6],i;
    for (i = 0; i < 6; ++i)
        a[i] = 5 - i;


  /*
    0 = 5;
    1 = 4.
    2 = 3.
    3 = 2.
    4 = 1.
    5 = 0.

   */

    for (i = 0; i < 6; ++i)
        a[i] = a[a[i]];

    /* a[0] = a[a[0] = 5] -> a[0] = a[5] = 0; Aqui o indice 0 do vetor irá armazenar o valor que está no indice 5.
        a[1] = a[a[1] = 4] -> a[1] = a[4] = 1; Aqui o indice 1 do vetor irá armazenar o valor que está no indice 4.
         a[2] = a[a[2] = 3] -> a[2] = a[3] = 2; Aqui o indice 2 do vetor irá armazenar o valor que está no indice 3.
          a[3] = a[a[3] = 2] -> a[3] = a[2] = 2; Aqui o indice 3 do vetor irá armazenar o valor que está no indice 2.
           a[4] = a[a[4] = 1] -> a[4] = a[1] = 1; Aqui o indice 4 do vetor irá armazenar o valor que está no indice 1, como este valor foi alterado
                                                  no endereço de memória dessa posição, o valor que ela irá armazenar será o novo valor da posição a[1].
            a[5] = a[a[5] = 0] -> a[5] = a[0] = 0; Aqui o indice 5 do vetor irá armazenar o valor que está no indice 0, como este valor foi alterado
                                                  no endereço de memória dessa posição, o valor que ela irá armazenar será o novo valor da posição a[0].
    */


        for(i = 0; i < 6; i++)
            printf("a[%d] : %d\n ",i,a[i]);
    return 0;
}
