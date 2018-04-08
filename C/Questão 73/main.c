#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n,i,j,q=0;
   for(i = 1;i<=10;i++){
   j = 2;
   printf("Digite um numero: ");
   scanf("%d",&n);

   while(j<n & n%j != 0 ){
    j = j + 1;
   }

   if(j==n){
    q = q + 1;
   }
   }
   printf("Quantidade primos: %d",q);
    return 0;
}
