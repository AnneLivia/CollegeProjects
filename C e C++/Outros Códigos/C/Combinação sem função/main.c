#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,np,fatn = 1,fatp = 1,fatnp = 1,i,com;

    printf("Digite o valor de N: ");
    scanf("%d",&n);
    printf("Digite o valor de P: ");
    scanf("%d",&p);
    if(p>n && p < 0 || n < 0){
        printf("Impossivel realizar conta");
    }else{
        for(i = 2;i <= n; i++){
            fatn = i * fatn;
        }
        for(i = 2;i <= p; i++){
            fatp = i * fatp;
        }
        np = n - p;
        for(i = 2;i <= np; i++){
            fatnp = i * fatnp;
        }
        com = fatn/(fatp*fatnp);
        printf("Combinacao de %d elementos %d a %d = %d",n,p,p,com);
    }
    return 0;
}
