#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inserirValores(float *v, int n);  // Fun��o utilizada para entrada de dados
void ordenarVetor(float *v, int n); // Fun��o utilizada para realizar a ordena��o do vetor
void imprimirValores(float *v, int n); // Fun��o utilizada para exibir valores
bool buscarValor(float *v, int n, float p); // Fun��o utilizada para realizar a busca do valor

int main()
{
    float vetor[100], num; // declara��o de um vetor de 100 posi��es e uma variavel que armazenara o numero que o usuario deseja buscar
    int i,n; // declara��o da variavel n para armazenar o numero de posi��es do vetor que o usuario digitar
    bool retorno;

    do{
       printf("quantos numeros ? ");
       scanf("%d",&n);
    }while(n <= 0 || n > 100); // esses codigos dentro dessa repeti��o ir� se repetir at� que seja digitado um valor maior que 0 e menor 100

    printf("Digite os numeros.\n");
    inserirValores(vetor,n); //Chamada da fun��o inserirDados para que o usuario possa preencher os dados no vetor
    printf("Valores digitados.\n");
    ImprimirValores(vetor,n);  // Exibi��o dos valores na tela
    ordenarVetor(vetor,n); // Chamada da fun��o OrdenarValores para que seja realizada a ordena��o que nesse programa ser� realizada no met�do Bubble sort
    printf("\nValores ordenados.\n");
    ImprimirValores(vetor,n);  // Exibi��o dos valores na tela
    printf("\nDigite o numero que procura: ");
    scanf("%f",&num);
    retorno = buscarValor(vetor,n,num); // chamada da fun��o que ir� fazer a busca de forma binaria do valor, que ter� como retorno true ou false
    if(retorno) // Se o retorno for true ser�o executadas os comandos do if, caso contrario ser�o executados os comandos do else.
    {
        printf("Numero encontrado.\n");
    }
    else
    {
        printf("Numero nao encontrado.\n");
    }
    return 0;
}
/* Essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void inserirValores(float *v, int n){
   int i;
   for(i = 0; i < n; i++)
   {
       printf("%d = ",i);
       scanf("%f",&v[i]); // Leitura dos dados que ser�o armazenados no vetor
   }
}
/* Essa fun��o abaixo tem como parametro um ponteiro v que ir� receber o endere�o da primeira posi��o do vetor
e um inteiro t que ser� o tamanho do vetor*/
void ordenarVetor(float *v, int t)
{
    /* declara��o de tr�s variaveis do tipo inteiro, i e j que ser�o as variaveis de controle do for e
      a auxiliar que ajudar� na ordena��o.
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
 void ImprimirValores(float *v, int n){
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%.2f ",v[i]); // Exibindo na tela os dados do vetor.
    }

 }
 /*Essa fun��o abaixo retorna um valor logico, ou true(verdadeiro) ou false(falso) e ela tem como parametro: um ponteiro v que ir�
 ter o endere�o da primeira posi��o do vetor; um inteiro n que ser� o tamanho de posi��es que o vetor tem; e a variavel p que guardar�
 a copia do valor que o usuario digitou para realizar a busca*/
 bool buscarValor(float *v, int n, float p)
 {
    /* Essas tr�s variaveis abaixo ir�o auxiliar na busca do valor.
       primeiramente a busca binaria � feita da seguinte maneira:
       a variavel alto ir� armazenar a ultima posi��o do vetor e a variavel baixo ir� armazenar a primeira posi��o do vetor, que no caso � a posi��o 0.
       e a variavel meio ir� armazenar a soma dos dois dividido por 2, no que retornar� na posi��o do meio do vetor.
       logo em seguida a variavel achou ir� armazenar como padr�o o valor logico false, para que possa ser realizada a condi��o na estrutura de repeti��o
       while.
       dentro da estrutura de repeti��o ser� realizada a seguinte condi��o: se o valor de busca for menor que o valor que est� na
       posi��o do meio, ser�o desconsideradas as posi��es que est�o ap�s a posi��o do meio, caso contrario, ser�o desconsideradas as
       posi��es que est�o antes do meio. caso n�o seja nem uma coisa nem outra, pode significar que o valor de busca � igual ao valor
       que est� na posi��o do meio, logo o numero foi encontrado e a variavel achou receber� o valor true, no que resutar� no
       fim da estrutura de repeti��o que possui a seguinte condi��o: o valor que est� armazenado na variavel baixo precisa ser menor
       ou igual ao valor que est� na variavel alto e !(achou) precisa retornar verdadeiro, a partir do momento em que
       a variavel achou recebe o valor true, o !(achou) retornar� falso, no que resultar� no fim da repeti��o.
        caso a codi��o do valor de busca ser igual ao valor que est� armazenado na posi��o meio n�o ocorra logo de inicio,
        o la�o de repeti��o ir� continuar at� que ou o valor seja encontrado, ou baixo fique com um valor maior que alto e a busca pelo metodo binario
        acaba n�o encontrado o valor.
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
    return achou; // Ser� retornado o valor logico. ou true ou false
 }
