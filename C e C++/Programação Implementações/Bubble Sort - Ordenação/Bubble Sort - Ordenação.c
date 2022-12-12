#include <stdio.h>
#include <stdlib.h>

void exibirValores(float *v, int t); // Fun��o utilizada para exibir valores
void ordenarValores(float *v, int t); // Fun��o utilizada para realizar a ordena��o do vetor
void inserirDados(float *v, int t); // Fun��o utilizada para entrada de dados

int main()
{
    float vetor[100]; // Declara��o de um vetor de 100 posi��es
    int quantNumeros; // Declara��o de vari�vel que determinar� quantas posi��es do vetor o usu�rio quer

    do{
        printf("Digite a quantidade de numeros: ");
        scanf("%d",&quantNumeros);
    }while(quantNumeros <= 0 || quantNumeros > 100); // esses codigos dentro dessa repeti��o ir� se repetir at� que seja digitado um valor maior que 0 e menor 100

    printf("Insira os dados no vetor:\n");
    inserirDados(vetor,quantNumeros); //Chamada da fun��o inserirDados para que o usuario possa preencher os dados no vetor
    system("cls");

    printf("Valores inseridos: \n\n");
    exibirValores(vetor,quantNumeros); // Exibi��o dos valores na tela

    ordenarValores(vetor,quantNumeros); // Chamada da fun��o OrdenarValores para que seja realizada a ordena��o Bubble sort

    printf("\n\nValores ordenados: \n\n");
    exibirValores(vetor,quantNumeros); // Chamada da fun��o exibirValores para mostrar na tela os valores ordenados
    printf("\n\n");
    return 0;
}

/* Essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void inserirDados(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        scanf("%f",&v[i]);  // Leitura dos dados que ser�o armazenados no vetor
    }
}

/* Essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void ordenarValores(float *v, int t)
{
    /* declara��o de tr�s variaveis do tipo inteiro, i e j que ser�o as variaveis de controle do for e
      a auxiliar que ajudar� na ordena��o
    */
    int i, j, auxiliar;
    for(i = 0; i <= t - 1; i++)
    {
        for(j = 0; j < i; j++) // esse for ir� de 0 at� o valor do primeiro for
        {
            /* Aqui est� sendo feito a condi��o, se o  valor que est� na posi��o i do vetor for menor que o que est� na posi��o j,
             o  valor que est� na posi��o i ir� ser armazenado na variavel auxiliar, o valor que est� na posi��o j ir� ser
             armazenado  na posi��o i do vetor e a posi��o j do vetor ir� receber o valor que foi armazenado na variavel auxiliar.
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
/* Essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void exibirValores(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }
}
