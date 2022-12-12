#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,vetor[4][4];

    for(i = 0;i < 4 ;i++){
         for(j=0;j<4;j++){
            vetor[i][j] = 0;
            printf("%d",vetor[i][j]);
         }
         printf("\n");
        }
    return 0;
}


