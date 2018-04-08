#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,q = 0,s = 0;
    float media = 0;
    char opt;
    do{
    system("cls");
    printf("Digite um numero: \n");
    scanf("%d",&n);
    s =s+n;
    q =q+1;
    printf("\nDeseja Continuar ? (s)\n");
    scanf("%s",&opt);
    }while(opt == 's');

    media = s/q;
    printf("%d Soma\n",s);
    printf("%d Quantidade\n",q);
    printf("Media = %f\n",media);
    system("pause");
    return 0;
}
