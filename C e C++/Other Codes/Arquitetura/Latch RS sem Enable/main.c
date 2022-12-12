#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reset = 0, set = 0;
    int Q, Qnegado;
    printf("Digite set: ");
    scanf("%d",&set);
    printf("Digite o reset: ");
    scanf("%d",&reset);
    printf("\n\n");
    switch(set)
    {
        case 1  :     if(reset == 0)
                      {
                          Q = 1;
                          Qnegado = 0;
                          printf("Q = %d   Q~ = %d",Q,Qnegado);
                      }
                      else
                      {
                          Q = 1;
                          Qnegado = 1;
                          printf("Q = %d   Q~ = %d",Q,Qnegado);
                      }
                      break;
        case  0  :    if(reset == 0)
                      {
                          Q = set;
                          Qnegado = reset;
                          printf("Q = %d   Q~ = %d",Q,Qnegado);
                      }
                      else
                      {
                          Q = 0;
                          Qnegado = 1;
                          printf("Q = %d   Q~ = %d",Q,Qnegado);
                      }
    }
    return 0;
}
