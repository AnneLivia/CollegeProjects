#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,totalA,totalR;
    totalA = totalR = 0;
    float nota1,nota2,media,mediaTotal,somatoria = 0;
    for(cont = 1;cont <= 6;cont++)
    {
       printf("Digite a primeira nota do aluno n. %d\n",cont);
       scanf("%f",&nota1);
       printf("Digite a segunda nota do aluno n. %d\n",cont);
       scanf("%f",&nota2);
       media = (nota1+nota2)/2;
       somatoria = media + somatoria;
       printf("Sua media: %.2f\n",media);
       if(media>=0 && media<5)
       {
           printf("\nReprovado\n");
           totalR = totalR + 1;
       }
       else if(media>=5 && media<7)
       {
           printf("\nExame Final\n");
       }
       else if(media>=7 && media <= 10)
       {
           printf("\nAprovado\n\n");
           totalA +=1;
       }
    }
    mediaTotal = somatoria/6;
    printf("A media entre as medias equivale: %.2f",mediaTotal);
    printf("\nTotal de aprovados: %d",totalA);
    printf("\nTotal de Reprovados: %d",totalR);
    return 0;
}
