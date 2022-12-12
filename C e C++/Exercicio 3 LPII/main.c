#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota,media,somatorio=0;
    int i;
    for(i=1;i<=4;i++){
        printf("Digite sua %d nota: ",i);
        scanf("%f",&nota);
        somatorio=somatorio + nota;
    }
    media=somatorio/4.0;
    if(media<5){
        printf("Media: %.2f\nReprovado",media);
    }else if(media>=5 && media<7){
        printf("Media: %.2f\nRecuperacao",media);
    }else{
        printf("Media: %.2f\nAprovado",media);
    }
    return 0;
}
