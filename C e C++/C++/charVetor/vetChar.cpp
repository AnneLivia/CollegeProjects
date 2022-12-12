#include <string.h>

void inverte(char p[])
{
    int x = strlen(p);
    char c[x];

    int i, j = 0;
    for(i = 0; i < strlen(p); i++){
        c[i] = p[i];
    }
    for(i = strlen(p) - 1; i >= 0; i--){
        p[i] = c[j];
        j++;
    }
}
