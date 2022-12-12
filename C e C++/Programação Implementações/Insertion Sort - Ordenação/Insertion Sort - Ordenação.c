#include <stdio.h>
#include <stdlib.h>

void inserirDados(float *v, int t);  // Fun��o utilizada para que os dados sejam inseridos no vetor
void exibirValores(float *v, int t); // Fun��o utilizada para exibir valores
void ordenarValores(float *v, int t); // Fun��o utilizada para realizar a ordena��o do vetor, nesse caso, insertion sort.
int main()
{
    int vetor[100]; // Declara��o do vetor com 100 posi��es
    int tam; // Declara��o de variavel tam que ir� armazenar a quantidade de posi��es do vetor

    do{
        printf("Digite o tamanho do vetor: ");
        scanf("%d",&tam);      /*Aqui ser� pedido para o us�ario digitar um valor
                                 At� que seja digitado um n�mero entre 1 e 100 */
    }while(tam <= 0 || tam > 100);

    printf("Insira os dados no vetor: \n");
    inserirDados(vetor,tam);  //Chamada da fun��o InserirDados para que o usuario possa entrar com os dados.
    printf("Valores digitados: \n\n");
    exibirValores(vetor,tam); // Exibi��o dos valores digitados pelo usu�rio
    ordenarValores(vetor,tam); // Chamada da fun��o OrdenarValores para que seja realizada a ordena��o insertion sort
    printf("\n\nValores ordenados: \n\n");
    exibirValores(vetor,tam); // Exibi��o dos valores ordenados
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
    /* declara��o de 4 variaveis do tipo inteiro, i e j que ser�o as variaveis de controle do for e
      as vari�veis k e temp que ajudar�o na ordena��o
    */
    int i, j, k, temp;
    for(j = 0; j < t - 1; j++) // J est� indo de 0 ate a posi��o t - 1 do vetor, ou seja se o vetor for de 5 posi��es, ele ir� de 0 at� a posi��o 3, pois 5 - 1 = 4
    {
        k = j; // k est� recebendo o valor atual de j;

        /*
         i est� come�ando do valor de j + 1, e indo ate o valor menor que t, pois nesse modo de ordena��o a compara��o deve come�ar a ser feita
         do segundo valor, pois ocorrer� a compara��o do 2� valor do vetor com o elemento anterior, ou seja, o valor que est� na posi��o 1 com os valores anteriores a ele.
         a compara��o ser� feita sempre dessa maneira, os valores a frente sendo comparado com os valores das posi��es anteriores a ele.
        */
        for(i = (j + 1); i < t; i++)
        {
            if(v[i] < v[k])
            {
                k = i; // Se o valor que est� na posi��o v[i] for menor que o valor que est� na posi��o v[k], o valor atual de i ir� ser armazenado em k
            }
        }
        if(k > j) // se  o valor que o valor que foi armazenado em k for maior que j, ou seja, se a posi��o k estiver depois da posi��o j no vetor, ser�o realizados os codigos abaixos
        {
            temp = v[j]; // a variavel temp ir� armazenar o valor que est� na posi��o v[j]
            v[j] = v[k]; // o vetor na posi��o j ir� armazenar o valor que est� na posi��o k do vetor
            v[k] = temp; // o vetor na posi��o k ir� armazenar o valor que foi armazenado na variavel temp
        }
    }
}

/* Assim como as outras fun��es dessa programa, essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void exibirValores(float *v, int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }
}
