#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float milhar;

    printf("Digite um numero");
    scanf("%d",&n);
    if(n>=1000){
        milhar = (n%10)/10.00;
    }
    printf("%d",milhar);
    return 0;
}
