#include <stdio.h>
#include <stdlib.h>

void exibirValores(float *v, int t); // Função utilizada para exibir valores
void ordenarValores(float *v, int t); // Função utilizada para realizar a ordenação do vetor
void inserirDados(float *v, int t); // Função utilizada para entrada de dados

int main()
{
    float vetor[100]; // Declaração de um vetor de 100 posições
    int quantNumeros; // Declaração de variável que determinará quantas posições do vetor o usuário quer

    do{
        printf("Digite a quantidade de numeros: ");
        scanf("%d",&quantNumeros);
    }while(quantNumeros <= 0 || quantNumeros > 100); // esses codigos dentro dessa repetição irá se repetir até que seja digitado um valor maior que 0 e menor 100

    printf("Insira os dados no vetor:\n");
    inserirDados(vetor,quantNumeros); //Chamada da função inserirDados para que o usuario possa preencher os dados no vetor
    system("cls");

    printf("Valores inseridos: \n\n");
    exibirValores(vetor,quantNumeros); // Exibição dos valores na tela

    ordenarValores(vetor,quantNumeros); // Chamada da função OrdenarValores para que seja realizada a ordenação Bubble sort

    printf("\n\nValores ordenados: \n\n");
    exibirValores(vetor,quantNumeros); // Chamada da função exibirValores para mostrar na tela os valores ordenados
    printf("\n\n");
    return 0;
}

/* Essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void inserirDados(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        scanf("%f",&v[i]);  // Leitura dos dados que serão armazenados no vetor
    }
}

/* Essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void ordenarValores(float *v, int t)
{
    /* declaração de três variaveis do tipo inteiro, i e j que serão as variaveis de controle do for e
      a auxiliar que ajudará na ordenação
    */
    int i, j, auxiliar;
    for(i = 0; i <= t - 1; i++)
    {
        for(j = 0; j < i; j++) // esse for irá de 0 até o valor do primeiro for
        {
            /* Aqui está sendo feito a condição, se o  valor que está na posição i do vetor for menor que o que está na posição j,
             o  valor que está na posição i irá ser armazenado na variavel auxiliar, o valor que está na posição j irá ser
             armazenado  na posição i do vetor e a posição j do vetor irá receber o valor que foi armazenado na variavel auxiliar.
             */
            if(v[i] < v[j])
            {
                auxiliar = v[i];
                v[i] = v[j];
                v[j] = auxiliar;
            }
        }
    }
}
/* Essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void exibirValores(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }
}
