#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main()
{
    int binario,i = 0;

    printf("Digite um valor em binario para converter para decimal: ");
    scanf("%d",&binario);
    int copia = binario;
    int potencia = 1;
    int conversao = 0;
    do{
        conversao = copia % 10 * potencia + conversao;
        copia = copia/10;
        potencia = potencia * 2;
    }while(copia != 0);

    printf("%d em decimal e %d\n",binario,conversao);

  int num;       /* numero dado (na base decimal)         */
  int bin;	  /* numero dado convertido para base 2    */
  int aux;	  /* auxiliar                              */
  int dig;	  /* guardara cada um dos digitos binarios */
  int pot;        /* potencia de 10                        */

  printf("Digite um numero natural: ");
  scanf("%d", &num);

  /* inicializacoes */
  aux = num;
  bin = 0;
  pot = 1;

  while (aux > 0) {
    dig = aux % 2;          /* proximo digito binario menos significativo  */
    aux = aux / 2;          /* remove esse digito do que resta             */
    bin = bin + dig * pot;  /* adiciona o digito como o mais significativo */
    pot = pot * 10;
  }
  printf("O numero %d escrito na base binaria: %d\n", num, bin);

  return 0;

}

