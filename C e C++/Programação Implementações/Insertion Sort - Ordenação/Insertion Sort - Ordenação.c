#include <stdio.h>
#include <stdlib.h>

void inserirDados(float *v, int t);  // Função utilizada para que os dados sejam inseridos no vetor
void exibirValores(float *v, int t); // Função utilizada para exibir valores
void ordenarValores(float *v, int t); // Função utilizada para realizar a ordenação do vetor, nesse caso, insertion sort.
int main()
{
    int vetor[100]; // Declaração do vetor com 100 posições
    int tam; // Declaração de variavel tam que irá armazenar a quantidade de posições do vetor

    do{
        printf("Digite o tamanho do vetor: ");
        scanf("%d",&tam);      /*Aqui será pedido para o usúario digitar um valor
                                 Até que seja digitado um número entre 1 e 100 */
    }while(tam <= 0 || tam > 100);

    printf("Insira os dados no vetor: \n");
    inserirDados(vetor,tam);  //Chamada da função InserirDados para que o usuario possa entrar com os dados.
    printf("Valores digitados: \n\n");
    exibirValores(vetor,tam); // Exibição dos valores digitados pelo usuário
    ordenarValores(vetor,tam); // Chamada da função OrdenarValores para que seja realizada a ordenação insertion sort
    printf("\n\nValores ordenados: \n\n");
    exibirValores(vetor,tam); // Exibição dos valores ordenados
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
    /* declaração de 4 variaveis do tipo inteiro, i e j que serão as variaveis de controle do for e
      as variáveis k e temp que ajudarão na ordenação
    */
    int i, j, k, temp;
    for(j = 0; j < t - 1; j++) // J está indo de 0 ate a posição t - 1 do vetor, ou seja se o vetor for de 5 posições, ele irá de 0 até a posição 3, pois 5 - 1 = 4
    {
        k = j; // k está recebendo o valor atual de j;

        /*
         i está começando do valor de j + 1, e indo ate o valor menor que t, pois nesse modo de ordenação a comparação deve começar a ser feita
         do segundo valor, pois ocorrerá a comparação do 2º valor do vetor com o elemento anterior, ou seja, o valor que está na posição 1 com os valores anteriores a ele.
         a comparação será feita sempre dessa maneira, os valores a frente sendo comparado com os valores das posições anteriores a ele.
        */
        for(i = (j + 1); i < t; i++)
        {
            if(v[i] < v[k])
            {
                k = i; // Se o valor que está na posição v[i] for menor que o valor que está na posição v[k], o valor atual de i irá ser armazenado em k
            }
        }
        if(k > j) // se  o valor que o valor que foi armazenado em k for maior que j, ou seja, se a posição k estiver depois da posição j no vetor, serão realizados os codigos abaixos
        {
            temp = v[j]; // a variavel temp irá armazenar o valor que está na posição v[j]
            v[j] = v[k]; // o vetor na posição j irá armazenar o valor que está na posição k do vetor
            v[k] = temp; // o vetor na posição k irá armazenar o valor que foi armazenado na variavel temp
        }
    }
}

/* Assim como as outras funções dessa programa, essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void exibirValores(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }
}
