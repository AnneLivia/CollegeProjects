#include <stdio.h>
#include <stdlib.h>

int main()
{
    void ConcatenarString(char string1[], int tam1,
                          char string2[], int tam2,
                          char string3[], int tam3);

    char palavra1[] = {'O','i','  '};
    char palavra2[] = {'L','i','v','i','a'};


    char *p1 = palavra1;
    char *p2 = palavra2;

    int tam1 = 0;
    int tam2 = 0;
    int tam3;
    for( p1 = palavra1; *p1 != '\0'; p1++)
    {
        tam1 +=1;
    }

    for(p2 = palavra2; *p2 != '\0'; p2++)
    {
        tam2 +=1;
    }

    printf("%d %d\n",tam1,tam2);

    tam3 = tam1+tam2;

    char palavra3[tam3];

    ConcatenarString(palavra1,tam1,palavra2,tam2,palavra3,tam3);

    int i;
    for(i = 0; i < tam3; i++)
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

for( j = 0; j<tam2; j++)
{
    string3[tam1+j] = string2[j];
}

}
