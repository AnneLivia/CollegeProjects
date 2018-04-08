#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,dezena,unidade;
    printf("Digite um numero entre 20 e 59: ");
    scanf("%d",&n);
    if(n>=20 && n<=59){
        dezena = n%10;
        unidade = n/10;
        if(unidade==2){
            if(dezena==0){
                printf("Vinte");
            }else if(dezena==1){
                printf("Vinte e um");
            }else if(dezena==2){
                printf("Vinte e dois");
            }else if(dezena==3){
                printf("Vinte e tres");
            }else if(dezena==4){
                printf("Vinte e quatro");
            }else if(dezena==5){
                printf("Vinte e cinco");
            }else if(dezena==6){
                printf("Vinte e seis");
            }else if(dezena==7){
                printf("Vinte e sete");
            }else if(dezena==8){
                printf("Vinte e oito");
            }else if(dezena==9){
                printf("Vinte e nove");
            }
        }else if(unidade==3){
            if(dezena==0){
                printf("Trinta");
            }else if(dezena==1){
                printf("Trinta e um");
            }else if(dezena==2){
                printf("Trinta e dois");
            }else if(dezena==3){
                printf("Trinta e tres");
            }else if(dezena==4){
                printf("Trinta e quatro");
            }else if(dezena==5){
                printf("Trinta e cinco");
            }else if(dezena==6){
                printf("Trinta e seis");
            }else if(dezena==7){
                printf("Trinta e sete");
            }else if(dezena==8){
                printf("Trinta e oito");
            }else if(dezena==9){
                printf("Trinta e nove");
            }
        }else if(unidade==4){
            if(dezena==0){
                printf("Quarenta");
            }else if(dezena==1){
                printf("Quarenta e um");
            }else if(dezena==2){
                printf("Quarenta e dois");
            }else if(dezena==3){
                printf("Quarenta e tres");
            }else if(dezena==4){
                printf("Quarenta e quatro");
            }else if(dezena==5){
                printf("Quarenta e cinco");
            }else if(dezena==6){
                printf("Quarenta e seis");
            }else if(dezena==7){
                printf("Quarenta e sete");
            }else if(dezena==8){
                printf("Quarenta e oito");
            }else if(dezena==9){
                printf("Quarenta e nove");
            }
        }else if(unidade==5){
           if(dezena==0){
                printf("Ciquenta");
            }else if(dezena==1){
                printf("Ciquenta e um");
            }else if(dezena==2){
                printf("Ciquenta e dois");
            }else if(dezena==3){
                printf("Ciquenta e tres");
            }else if(dezena==4){
                printf("Ciquenta e quatro");
            }else if(dezena==5){
                printf("Ciquenta e cinco");
            }else if(dezena==6){
                printf("Ciquenta e seis");
            }else if(dezena==7){
                printf("Ciquenta e sete");
            }else if(dezena==8){
                printf("Ciquenta e oito");
            }else if(dezena==9){
                printf("Ciquenta e nove");
            }
        }
    }else{
        printf("Numero digitado nao esta no intervalo");
    }
    return 0;
}
