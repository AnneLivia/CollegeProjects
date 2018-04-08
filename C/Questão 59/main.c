#include <stdio.h>
#include <stdlib.h>

int main()
{
    float labo,semestral,fina,media;

    printf("Qual sua nota laboratorial? ");
    scanf("%f",&labo);
    printf("Qual sua nota no exame semestral? ");
    scanf("%f",&semestral);
    printf("Qual sua nota exame final? ");
    scanf("%f",&fina);

    media = (((labo * 2)+(semestral * 3)+(fina * 5))/(5+2+3));
    if(media>=8 && media <= 10){
        printf("Sua media e %.2f\nConceito A",media);
    }else if(media>=7 && media <8){
        printf("Sua media e %.2f\nConceito B",media);
    }else if(media>=6 && media < 7){
        printf("Sua media e %.2f\nConceito c",media);
    }else if(media>=5 && media<6){
        printf("Sua media e %.2f\nConceito D",media);
    }else if(media < 5){
        printf("Sua media e %.2f\nConceito E",media);
    }
    return 0;
}
