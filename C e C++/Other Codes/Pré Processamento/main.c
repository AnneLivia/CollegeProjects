#include <stdio.h>
#define MAIOR(x,y) x > y ? x:y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'  // -> Macros

// Macros
int main()
{
   int x,y;
   char c;
   printf("Digite um numero inteiro: ");
   scanf("%d",&x);
   printf("Digite um numero inteiro: ");
   scanf("%d",&y);

   printf("Maior valor: %d\n",MAIOR(x,y));

   setbuf(stdin,NULL);
   printf("Digite uma letra: ");
   c = getchar();

   if(E_MINUSCULO(c))
   {
       printf("Minuscula");
   }else{
       printf("Maiuscula");
   }
    return 0;
}
