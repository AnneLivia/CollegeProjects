#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pos,neg,somaparcial;
    pos = neg = somaparcial = 0;
    do{
     printf("type a number: ");
     scanf("%d",&n);
     if(n>0){
        pos = pos + n;
     }else if(n<0){
        neg = neg + n;
     }
     system("CLS");
    }while(n!=0);
    somaparcial = neg + pos;
    printf("\nThe sum of the number positive is %d",pos);
    printf("\nThe sum of the numbers negative is %d",neg);
    printf("\nThe sum of the numbers negative and positive is %d",somaparcial);

    return 0;
}
