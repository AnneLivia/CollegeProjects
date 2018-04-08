#include <stdio.h>
#include <stdlib.h>

void latch(int *s, int *r)
{
     int Q, naoQ;
     switch(*s)
     {
            case 1: if(*r == 0)
                    {
                        Q = 1;
                        naoQ = 0;
                        printf("Q = %d   Q~ = %d",Q,naoQ);
                    }
                    else
                    {
                        Q = 1;
                        naoQ = 1;
                        printf("Q = %d   Q~ = %d",Q,naoQ);
                    }
                    break;
            case 0 : if(*r == 0)
                      {
                         Q = *s;
                         naoQ = *r;
                         printf("Q = %d   Q~ = %d",Q,naoQ);
                      }
                      else
                      {
                         Q = 0;
                         naoQ = 1;
                         printf("Q = %d   Q~ = %d",Q,naoQ);
                      }
                     break;
            }
}
int main()
{
    int set, reset, enable;
    int Q, Qnegado;
    printf("Digite enable: ");
    scanf("%d",&enable);
    printf("Digite set: ");
    scanf("%d",&set);
    printf("Digite o reset: ");
    scanf("%d",&reset);
    printf("\n\n");
    switch(enable)
    {
        case 1  :    latch(&set,&reset);
                     break;

        case  0  :   Q = set;
                     Qnegado = reset;
                     printf("Q = %d   Q~ = %d",Q,Qnegado);
                     break;
    }


    return 0;
}
