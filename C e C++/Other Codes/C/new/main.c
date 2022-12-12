#include <stdio.h>

/*primos multiplicados*/
# include<stdio.h>
# include<stdlib.h>

main()
{
int i, n, primo;
float acm;

acm = 1;

   for(n=1;n<92;n++) {
   primo = 1;
   for(i=2;i<=(n-1);i++) {
	  if (n % i == 0) {
	  primo = 0;
		 break;
	  }
   }
   if (primo == 1) {
   acm = acm * n;
   printf("\nachei um primo %d", n);
}

}
printf("\nO valor da multiplicacao eh: %.0f", acm, " ");
printf("\n");
system("pause");
return 0;

}


