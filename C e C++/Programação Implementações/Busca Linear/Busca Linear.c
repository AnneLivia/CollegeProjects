#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InserirDados(float *v, int t);      // Função utilizada para inserir os dados
bool buscaLinear(float *v, int t, int p); // Função utilizada para realizar a busca

int main()
{
    float numero[100], procura; // Foi declarado um vetor de 100 posições e uma variavel do tipo float
    int n, i;                  // Foi declarado duas variaveis do tipo inteiro
    bool retorno;             // Foi declarado uma varivel que terá como retorno true ou false.
    do{
        printf("Escreva quantos numeros: "); /*Aqui será pedido para o usúario digitar um valor até que
                                               Até que seja digitado um número entre 1 e 100 */
        scanf("%d",&n);
    }while(n <= 0 || n > 100);

    printf("\nDigite todos os numeros.\n");

    InserirDados(numero,n); /* Chamada da função InserirDados que tem como parametro o vetor e o tamanho do
                               vetor, que foi determinado pelo usuario com a variavel n.*/

    printf("Digite o numero que deseja procurar: ");
    scanf("%f",&procura);    // O usuario irá fornecer aqui o valor que deseja procurar dentro do vetor.

    retorno = buscaLinear(numero,n,procura); /* Aqui está sendo feito a chamada da função buscaLinear que irá
                                                realizar a busca do valor procurado pelo usuario, essa função
                                                tem como parametro o vetor numero, o numero de posições do vetor e
                                                o numero que o usuario está procurando no vetor, essa função irá retornar
                                                true ou false.
                                             */

    if(retorno)
    {
        printf("Numero encontrado\n\n"); // Se o retorno for verdadeiro será exibida a mensagem valor encontrado
    }
    else
    {
        printf("Numero nao encontrado\n\n"); // Caso sejá falso, será exibido valor não encontrado.
    }
    return 0;
}

void InserirDados(float *v, int t)
{
    int i; // Foi declarado uma variavel que servirá como variável de controle para o for
    for(i = 0; i < t; i++)
    {
        scanf("%f",&v[i]); // Aqui está sendo armazenado os valores digitado pelo usuário no vetor de n posições.
    }
}

bool buscaLinear(float *v, int t, int p)
{
    bool achou = false;    // a variável do tipo lógico achou está recebendo como valor padrão false.
    int i = 0;
     /*Enquanto a varivel contadora i for menor que a quantidade de posições que o vetor tem,
      e !(achou) retornar verdadeiro, pois, como achou tem como valor padrão false, !(false) = verdadeiro,
      dentro do while existe a codição se o valor que estiver armazenado na posição i do vetor for igual a p,
    ou seja, valor que foi digitado pelo usuario, a variavel achou irá receber true, no que resultará no fim da repetição pois
    !(true) = falso,dessa forma será retornado para a variavel da função principal o valor logico
    true, que significa que o valor foi encontrado, caso contrario, será retornado false.
                                */
    while(i < t && !(achou))
    {
        if(v[i] == p)
        {
            achou = true;
        }
        else
        {
            i++;
        }
    }
    return achou;
}
