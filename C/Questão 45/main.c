#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,resto5,resto7;;
    int p = 0;

    for(cont=1000;cont<=10000;cont++){
      resto5 = cont % 5;
      resto7 = cont % 7;
     if((resto5 != 0)&&(resto7!= 0)){
        p =p+1;
     }
    }
     printf("Existem %d numero entre 1000 e 10000 que nao sao divisiveis nem por 5 e nem por 7",p);

    return 0;
}
