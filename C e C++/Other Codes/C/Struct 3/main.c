#include <stdio.h>
#include <stdlib.h>
struct media{
 float x,y,z;
 char nome[50];
};
int main()
{
    struct media a[4];
    int i;

    for(i = 0; i<4; i++){
        fflush(stdin);
        printf("Digite seu nome: \n");
        gets(a[i].nome);
        printf("%s, digite sua nota 1: \n",a[i].nome);
        scanf("%f",&a[i].x);
        printf("%s, digite sua nota 2: \n",a[i].nome);
        scanf("%f",&a[i].y);
        a[i].z = (a[i].x + a[i].y)/2;
        printf("Media: %.2f\n",a[i].z);
        if(a[i].z < 4){
            printf("Reprovado\n");
        }else if(a[i].z >= 4 && a[i].z < 6){
           printf("PS\n");
        }else{
          printf("Aprovado\n");
        }
    }
    return 0;
}
