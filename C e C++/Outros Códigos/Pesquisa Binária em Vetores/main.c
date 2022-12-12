#include <stdio.h>
#include <stdlib.h>

int ValVetor(int *x,int q)
{
  int c;
  for(c = 0; c < q; c++)
  {
      printf("Digite o valor do vetor[%d]: ",c);
      scanf("%d",&x[c]);
  }
}

int main()
{
    int quant,i,j;

    printf("Digite a quantidade de indices do vetor: ");
    scanf("%d",&quant);

    int vetor[quant];
    ValVetor(vetor,quant);

    printf("\nValores nao ordenados:\n");
    for(i = 0; i < quant; i++)
    {
        printf("%4d",vetor[i]);
    }
    int aux;
    for(i = 0; i <= quant - 1; i++)
    {
        for(j = i + 1; j < quant; j++)
        {
            if(vetor[i]>vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("\nValores estando ordenados:\n");
    for(i = 0; i < quant; i++)
    {
        printf("%4d",vetor[i]);
    }
    // cria��o das variaveis que servira para fazer a pesquisa bin�ria.

    int I_inicia = 0; // A vari�vel inicial precisa o endere�o inicial do vetor que � na maioria das vezes 0.
    int I_final = quant - 1; // A v�riavel I_final precisa receber o endere�o do ultimo indice do vetor, exemplo: se for 5, o ultimo indice do vetor � 4.
    int I_meio; // essa vari�vel ir� armazenar o endere�o do meio do vetor que � o endere�o inicial + final dividido por 2.
    int Logico = 0; // essa variavel ir� armazenar o valor zero que � falso.

    int pesquisa; // vari�vel que o us�ario usar� para pesquisar n�mero

    printf("\nDigite o valor que deseja procurar: ");
    scanf("%d",&pesquisa);

    while(I_inicia <= I_final && !(Logico)) // enquanto inicial for menor ou igual ao final e o logico que � recebeu !0(falso) = verdadeiro fa�a
    {
        I_meio = (I_inicia + I_final)/2; // meio ir� receber a posi��o do meio do vetor, exemplo: inicial = 0, final = 9, 0 + 9 = 9 dividido por 2 � igual a 4, pois � inteiro
        if(vetor[I_meio]==pesquisa)  // se o valor que est� no vetor na posi��o do meior for igual a pesquisa, exemplo o usuario digitou 7, e ser� compara com o valor que est� no vetor[I_meio]
            Logico = 1; // se for igual o logico vai receber 1, e n�o 1(verdadeiro) == 0(falso), ent�o o programa acaba. pois na conju��o que � o && quando se tem pelo menos um falso, o pragrama acaba.

        if(vetor[I_meio] > pesquisa) // se n�o cair no primeiro, ser� feita a condi��o: o valor que est� no vetor[I_meio] � maior que o numero pesquisado?
            I_final = I_meio - 1;
        else
            I_inicia = I_meio + 1;
    }
    if(Logico = 1){
        printf("\nDado encontrado na posicao %d\n",I_meio);
    }else{
        printf("Dado n�o encontrado\n");
    }
    return 0;
}
