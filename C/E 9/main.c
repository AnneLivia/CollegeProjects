#include <stdio.h>
#include <stdlib.h>


int fatorial(int x){
  if(x == 0){
    return 1;
  }else{
    return x * fatorial(x - 1);
  }


}
int main()
{
    int n,fat;
    printf("Digite um valor: ");
    scanf("%d",&n);
    if(n>=0){
         fat = fatorial(n);
         printf("Fatorial de %d: %d",n,fat);
    }else{
         printf("Numero negativo");
    }
    return 0;
}
