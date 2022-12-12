#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media,soma = 0,notas[4];
    int i;
    for(i = 0;i <= 4; i++)
    {
     printf("Type the note number %d: ",i);
     scanf("%f",&notas[i]);
     soma = notas[i] + soma;
    }
    media = soma/4.0;
    printf("\nYour media is %.2f",media);
    if(media>=7)
    {
        printf("\nAprovado\n");
    }else if(media>=5)
    {
        printf("\nPS\n");
    }else{
        printf("\nReprovado\n");
    }
    printf("%f",notas[3]);
    return 0;
}
