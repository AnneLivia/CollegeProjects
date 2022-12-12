#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,quant15,quant16a30,quant31a45,quant46a60,quant61,idade;
    quant15 = quant16a30 = quant31a45 = quant46a60 = quant61 = 0;
    float porc15,porc16a30,porc31a45,porc46a60,porc61;

    for(i = 1;i<=3;i++){
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    if(idade==15){
        quant15=quant15+1;
    }else if(idade>=16 && idade<=30){
        quant16a30 = quant16a30 + 1;
    }else if(idade>=31 && idade<=45){
        quant31a45 = quant31a45 + 1;
    }else if(idade>=46 && idade <=60){
        quant46a60 = quant46a60 + 1;
    }else if(idade>=61){
        quant61 = quant61 + 1;
    }


    }
    porc15 = (quant15/3)*100;
    porc16a30 = (quant16a30/3)*100;
    porc31a45 = (quant31a45/3)*100;
    porc46a60= (quant46a60/3)*100;
    porc61 = (quant61/3)*100;
    if(quant15==0){
        printf("Nenhuma pessoa no banco de dados tem idade igual a 15 anos\n");
    }else if(quant15 == 1){
       printf("Existem somente uma pessoa com idade igual a 15 anos\n");
    }else{
       printf("Existem %d pessoas com idade igual a 15 anos\n",quant15);
    }
     if(quant16a30==0){
        printf("Nenhuma pessoa no banco de dados tem idade entre 16 e 30 anos\n");
    }else if(quant16a30 == 1){
       printf("Existem somente uma pessoa com idade entre 16 e 30 anos\n");
    }else{
       printf("Existem %d pessoas com idade entre 16 e 30 anos\n",quant16a30);
    }
     if(quant46a60==0){
        printf("Nenhuma pessoa no banco de dados tem idade entre 31 a 45 anos\n");
    }else if(quant46a60 == 1){
       printf("Existem somente uma pessoa com idade entre 31 a 45 anos");
    }else{
       printf("Existem %d pessoas com idade entre 46 a 60 anos\n",quant46a60);
    }
     if(quant61==0){
        printf("Nenhuma pessoa no banco de dados tem idade maior que 60 anos\n");
    }else if(quant61 == 1){
       printf("Existem somente uma pessoa com idade maior que 60 anos\n");
    }else{
       printf("Existem %d pessoas com idade maior que 61 anos\n",quant61);
    }


    printf("A porcentagem de pessoas com 15 anos em relacao a quantidade e %.2f%%\n",porc15);
    printf("A porcentagem de pessoas entre 16 e 30 anos em relacao a quantidade e %.2f%%\n",porc16a30);
    printf("A porcentagem de pessoas com 31 a 45 anos em relacao a quantidade e %.2f%%\n",porc31a45);
    printf("A porcentagem de pessoas com 46 a 60 anos em relacao a quantidade e %.2f%%\n",porc46a60);
    printf("A porcentagem de pessoas com mais de 60 anos em relacao a quantidade e %.2f%%\n",porc61);
    return 0;
}
