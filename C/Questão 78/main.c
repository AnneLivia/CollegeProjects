#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 50;
    float c;
    while(f>=50 && f<=65)
    {
       c = (5/9.0 *(f-32));
       printf("%f %f\n",f,c);
       f++;
    }

    return 0;
}
