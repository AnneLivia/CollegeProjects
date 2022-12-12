#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, cifra = 0 ;
    printf("Digite um valor: ");
    scanf("%d",&n1);

    n2 = n1;
    do{
       // 456
       cifra = cifra * 10;  // 650
       cifra = cifra + n2 % 10; // 654
       n2 = n2/10; // 0

    }while(n2 != 0);

    printf("%d ", cifra);
    return 0;
}
