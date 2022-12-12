#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *) malloc(5 * sizeof(int));
    if(p == NULL){
        printf("erro");
        exit(1);
    }
    int i;
    for(i = 0; i < 5; i++)
    {
        p[i] = i;
        printf("p[%d] = %d\n",i,*(p+i));
    }

    free(p);

    return 0;
}
