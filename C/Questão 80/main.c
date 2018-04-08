#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,somaM,somaF,somaExpM,quantM45,quantFexp,lessA,ageS;
    somaM = somaF = somaExpM = quantM45 = quantFexp = ageS = age = 0;
    lessA = 1000;
    float media,porc45;
    char genre,exp = 'l';
    genre = 'n';
    do{
    printf("=================== I N F O R M A T I O N S ===================\n");
    if(genre == 'n'){
        printf("Still without the information about the genre\n");
    }else if(genre == 'm'){
        printf("The last genre typed was male\n");
    }else {
        printf("The last genre typed was female\n");
    }
    printf("The last age typed was %d\n",age);
    if(exp == 'l'){
        printf("Still without the information about experience\n");
    }else if(exp == 'y'){
        printf("With experience\n");
    }else if(exp == 'n'){
        printf("With not experience\n");
    }
    printf("===============================================================\n");

    printf("What is your genre:\n[f] female/woman\n[m] male/man\nType here:  ");
    scanf(" %s",&genre);
    if(genre == 'm'){
        somaM = somaM + 1;
        printf("Type your age: ");
        scanf("%d",&age);
        if(age > 45){
            quantM45 = quantM45 + 1;
        }
        printf("Do you have experience in this service ?\nYes [y]\nNot [n]\nType here: ");
        scanf(" %s",&exp);
        if(exp == 'y'){
         ageS = ageS + age;
         somaExpM = somaExpM + 1;
        }

    }else if(genre == 'f'){
       somaF = somaF + 1;
       printf("Type your age: ");
       scanf("%d",&age);
       printf("Do you have experience in this service ?\nYes [y]\nNot [n]\nType here: ");
       scanf(" %s",&exp);
       if(exp == 'y'){
        if(age<lessA){
            lessA = age;
        }
       }
       if(age<35 && exp == 'y'){
            quantFexp = quantFexp + 1;
        }
       }
       system("CLS");
    }while(age!=0);
    printf("\n============================ S E R V I C E  O F  T H E  C O M P A N Y ============================\n");
    printf("\nCoding is finishing ");
    printf("\nMake all the accounts\nplease wait...");
    printf("\nHere is the account");
    media = ageS/somaExpM;
    porc45 = (quantM45/somaM)*100;
    printf("\nNumber of women: %d",somaF);
    printf("\nNumber of men: %d",somaM);
    printf("\nMedia of men who have experience in the service: %f",media);
    printf("\nThe porcentage of men who has age more than 45 against the total of men is equal to %f",porc45);
    printf("\nThe number of women who have age less than 35 and said that has experience in the service is %d",quantFexp);
    if(lessA == 1000){
        printf("There aren't any women in the programming");
    }else{
    printf("\nThe less age among all the ages of the women is equal to %d",lessA);
    }
    printf("\n============================ S E R V I C E  O F  T H E  C O M P A N Y ============================\n");
    printf("                                                                                     by Macedo,Livia  ");


    return 0;
}
