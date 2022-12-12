#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    inicio:
     if(i<10){
        printf("%d\n",i);
     i++;
     goto inicio;
     }
    return 0;
}
