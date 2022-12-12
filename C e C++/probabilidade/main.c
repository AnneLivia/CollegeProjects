#include <stdio.h>
#include <stdlib.h>


int fatorial(int x){
  if(x==0){
    return 1;
  }else{
    return x * fatorial(x-1);
  }
}

float potencia(float x,int y){
  if(y==0){
    return 1;
  }else{
    return x * potencia(x,y-1);
  }
}

int com(int c,int b,int d){
  return (c /(b*d));
}

float probabilidade(int c, float s, float f ){
   return c*s*f;
}
int main()
{

    int n, k, nMenosk,fatn,fatk,fatnk,combinacao;
    float sucesso, fracasso, potF, potS,resultado,porc;

    printf("Qual o valor de N? \n");
    scanf("%d",&n);
    fatn = fatorial(n);

    printf("Qual o valor de K? \n");
    scanf("%d",&k);
    fatk = fatorial(k);

    nMenosk = n - k;
    fatnk = fatorial(nMenosk);

    combinacao = com(fatn,fatk,fatnk);
    printf("Combinacao: %d\n",combinacao);
    printf("Digite o valor do sucesso: \n");
    scanf("%f",&sucesso);

    fracasso = 1 - sucesso;

    potS = potencia(sucesso,k);
    potF = potencia(fracasso,nMenosk);

    resultado = probabilidade(combinacao,potS,potF);
    porc = resultado*100;

    printf("Resultado da probabilidade: %f \n",resultado);
    printf("Aproximadamente %.2f %% \n",porc);

    return 0;
}
