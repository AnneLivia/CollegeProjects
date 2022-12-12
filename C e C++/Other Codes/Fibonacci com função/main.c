#include <stdio.h>
#include <conio.h>

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Fibonacci: "); // 4
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");
   for(i=0; i<n; i++) // 4
       printf("%d ", fibonacci(i+1)); // 1 2 // 3 4
   getch();
}

int fibonacci(int num)
{
   if(num==1 || num==2)
       return 1;
   else
       return fibonacci(num-1) + fibonacci(num-2); // 2 + 1 = 3 + 2 = 5
}

