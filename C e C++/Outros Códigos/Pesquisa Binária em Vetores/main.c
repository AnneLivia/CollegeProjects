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
    // criação das variaveis que servira para fazer a pesquisa binária.

    int I_inicia = 0; // A variável inicial precisa o endereço inicial do vetor que é na maioria das vezes 0.
    int I_final = quant - 1; // A váriavel I_final precisa receber o endereço do ultimo indice do vetor, exemplo: se for 5, o ultimo indice do vetor é 4.
    int I_meio; // essa variável irá armazenar o endereço do meio do vetor que é o endereço inicial + final dividido por 2.
    int Logico = 0; // essa variavel irá armazenar o valor zero que é falso.

    int pesquisa; // variável que o usúario usará para pesquisar número

    printf("\nDigite o valor que deseja procurar: ");
    scanf("%d",&pesquisa);

    while(I_inicia <= I_final && !(Logico)) // enquanto inicial for menor ou igual ao final e o logico que é recebeu !0(falso) = verdadeiro faça
    {
        I_meio = (I_inicia + I_final)/2; // meio irá receber a posição do meio do vetor, exemplo: inicial = 0, final = 9, 0 + 9 = 9 dividido por 2 é igual a 4, pois é inteiro
        if(vetor[I_meio]==pesquisa)  // se o valor que está no vetor na posição do meior for igual a pesquisa, exemplo o usuario digitou 7, e será compara com o valor que está no vetor[I_meio]
            Logico = 1; // se for igual o logico vai receber 1, e não 1(verdadeiro) == 0(falso), então o programa acaba. pois na conjução que é o && quando se tem pelo menos um falso, o pragrama acaba.

        if(vetor[I_meio] > pesquisa) // se não cair no primeiro, será feita a condição: o valor que está no vetor[I_meio] é maior que o numero pesquisado?
            I_final = I_meio - 1;
        else
            I_inicia = I_meio + 1;
    }
    if(Logico = 1){
        printf("\nDado encontrado na posicao %d\n",I_meio);
    }else{
        printf("Dado não encontrado\n");
    }
    return 0;
}
