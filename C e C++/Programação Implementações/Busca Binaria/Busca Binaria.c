#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inserirValores(float *v, int n);  // Função utilizada para entrada de dados
void ordenarVetor(float *v, int n); // Função utilizada para realizar a ordenação do vetor
void imprimirValores(float *v, int n); // Função utilizada para exibir valores
bool buscarValor(float *v, int n, float p); // Função utilizada para realizar a busca do valor

int main()
{
    float vetor[100], num; // declaração de um vetor de 100 posições e uma variavel que armazenara o numero que o usuario deseja buscar
    int i,n; // declaração da variavel n para armazenar o numero de posições do vetor que o usuario digitar
    bool retorno;

    do{
       printf("quantos numeros ? ");
       scanf("%d",&n);
    }while(n <= 0 || n > 100); // esses codigos dentro dessa repetição irá se repetir até que seja digitado um valor maior que 0 e menor 100

    printf("Digite os numeros.\n");
    inserirValores(vetor,n); //Chamada da função inserirDados para que o usuario possa preencher os dados no vetor
    printf("Valores digitados.\n");
    ImprimirValores(vetor,n);  // Exibição dos valores na tela
    ordenarVetor(vetor,n); // Chamada da função OrdenarValores para que seja realizada a ordenação que nesse programa será realizada no metódo Bubble sort
    printf("\nValores ordenados.\n");
    ImprimirValores(vetor,n);  // Exibição dos valores na tela
    printf("\nDigite o numero que procura: ");
    scanf("%f",&num);
    retorno = buscarValor(vetor,n,num); // chamada da função que irá fazer a busca de forma binaria do valor, que terá como retorno true ou false
    if(retorno) // Se o retorno for true serão executadas os comandos do if, caso contrario serão executados os comandos do else.
    {
        printf("Numero encontrado.\n");
    }
    else
    {
        printf("Numero nao encontrado.\n");
    }
    return 0;
}
/* Essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void inserirValores(float *v, int n){
   int i;
   for(i = 0; i < n; i++)
   {
       printf("%d = ",i);
       scanf("%f",&v[i]); // Leitura dos dados que serão armazenados no vetor
   }
}
/* Essa função abaixo tem como parametro um ponteiro v que irá receber o endereço da primeira posição do vetor
e um inteiro t que será o tamanho do vetor*/
void ordenarVetor(float *v, int t)
{
    /* declaração de três variaveis do tipo inteiro, i e j que serão as variaveis de controle do for e
      a auxiliar que ajudará na ordenação.
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
 void ImprimirValores(float *v, int n){
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }

 }
 /*Essa função abaixo retorna um valor logico, ou true(verdadeiro) ou false(falso) e ela tem como parametro: um ponteiro v que irá
 ter o endereço da primeira posição do vetor; um inteiro n que será o tamanho de posições que o vetor tem; e a variavel p que guardará
 a copia do valor que o usuario digitou para realizar a busca*/
 bool buscarValor(float *v, int n, float p)
 {
    /* Essas três variaveis abaixo irão auxiliar na busca do valor.
       primeiramente a busca binaria é feita da seguinte maneira:
       a variavel alto irá armazenar a ultima posição do vetor e a variavel baixo irá armazenar a primeira posição do vetor, que no caso é a posição 0.
       e a variavel meio irá armazenar a soma dos dois dividido por 2, no que retornará na posição do meio do vetor.
       logo em seguida a variavel achou irá armazenar como padrão o valor logico false, para que possa ser realizada a condição na estrutura de repetição
       while.
       dentro da estrutura de repetição será realizada a seguinte condição: se o valor de busca for menor que o valor que está na
       posição do meio, serão desconsideradas as posições que estão após a posição do meio, caso contrario, serão desconsideradas as
       posições que estão antes do meio. caso não seja nem uma coisa nem outra, pode significar que o valor de busca é igual ao valor
       que está na posição do meio, logo o numero foi encontrado e a variavel achou receberá o valor true, no que resutará no
       fim da estrutura de repetição que possui a seguinte condição: o valor que está armazenado na variavel baixo precisa ser menor
       ou igual ao valor que está na variavel alto e !(achou) precisa retornar verdadeiro, a partir do momento em que
       a variavel achou recebe o valor true, o !(achou) retornará falso, no que resultará no fim da repetição.
        caso a codição do valor de busca ser igual ao valor que está armazenado na posição meio não ocorra logo de inicio,
        o laço de repetição irá continuar até que ou o valor seja encontrado, ou baixo fique com um valor maior que alto e a busca pelo metodo binario
        acaba não encontrado o valor.
    */
    int meio, alto, baixo;
    bool achou;
    alto = n - 1;
    baixo = 0;
    achou = false;

    while(baixo <= alto && !(achou))
    {
        meio = (baixo + alto)/2;
        if(p < v[meio])
        {
            alto = meio - 1;
        }
        else
        {
            if(p > v[meio])
            {
                baixo = meio + 1;
            }
            else
            {
                achou = true;
            }
        }
    }
    return achou; // Será retornado o valor logico. ou true ou false
 }
