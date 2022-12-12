#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,n,i;
   a = 1;
   printf("Quantos numeros quer ver: ");
   scanf("%d",&n);
   b = 1;
   for(i = 1; i <= n; i++)
   {
       printf("%d ",a);
       b = a+b;
       printf("%d ",b);
       a = a+b;
   }
   return 0;
}
