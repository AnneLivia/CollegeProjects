#include <stdio.h>
#include <stdlib.h>

int main()
{
    void ConcatenarString(char string1[], int tam1,
                          char string2[], int tam2,
                          char string3[], int tam3);

    char palavra1[] = {'O','i','  '};
    char palavra2[] = {'L','i','v','i','a'};
    char palavra3[9];

    ConcatenarString(palavra1,4,palavra2,6,palavra3,9);

    int i;
    for(i = 0; i < 9; i++)
    {
        printf("%c",palavra3[i]);
    }

    return 0;
}

void ConcatenarString(char string1[], int tam1,
                      char string2[], int tam2,
                      char string3[], int tam3){


int i,j;

for(i = 0; i < tam1; i++)
{
    string3[i] = string1[i];
}

for( j = tam1; j<tam2; j++)
{
    string3[j] = string2[j];
}

}
