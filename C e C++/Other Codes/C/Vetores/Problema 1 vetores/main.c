#include <stdio.h>
#include <stdlib.h>
#define L 6
#define C 4

int main()
{
    int matriz[L][C], vetor[6];
    int i,j;

    matriz[0][0] = 1;   matriz[0][1] = 2;   matriz[0][2] = 2;   matriz[0][3] = 4;
    matriz[1][0] = 5;   matriz[1][1] = -5;  matriz[1][2] = 3;   matriz[1][3] = 0;
    matriz[2][0] = 1;   matriz[2][1] = 1;   matriz[2][2] = 1;   matriz[2][3] = 1;
    matriz[3][0] = -3;  matriz[3][1] = 2;   matriz[3][2] = 0;   matriz[3][3] = 0;
    matriz[4][0] = 0;   matriz[4][1] = 0;   matriz[4][2] = 1;   matriz[4][3] = 1;
    matriz[5][0] = -1;  matriz[5][1] = -1;  matriz[5][2] = -2;  matriz[5][3] = -2;

  // Determinação dos valores.

  vetor[0] = matriz[3][0];
  vetor[1] = matriz[4][2];
  vetor[2] = matriz[1][3];
  vetor[3] = matriz[5][matriz[0][2]];
  vetor[4] = matriz[matriz[3][1]][1];
  vetor[5] = matriz[4][(matriz[1][2] + matriz[3][0])];

  for(i = 0; i < 3; i++)
  {
      printf("%d.  %2d   %d.  %2d\n",i+1,vetor[i],i+4,vetor[i+3]);
  }
    return 0;
}
