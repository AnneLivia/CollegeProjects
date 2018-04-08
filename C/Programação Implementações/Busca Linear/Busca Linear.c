#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InserirDados(float *v, int t);      // Fun��o utilizada para inserir os dados
bool buscaLinear(float *v, int t, int p); // Fun��o utilizada para realizar a busca

int main()
{
    float numero[100], procura; // Foi declarado um vetor de 100 posi��es e uma variavel do tipo float
    int n, i;                  // Foi declarado duas variaveis do tipo inteiro
    bool retorno;             // Foi declarado uma varivel que ter� como retorno true ou false.
    do{
        printf("Escreva quantos numeros: "); /*Aqui ser� pedido para o us�ario digitar um valor at� que
                                               At� que seja digitado um n�mero entre 1 e 100 */
        scanf("%d",&n);
    }while(n <= 0 || n > 100);

    printf("\nDigite todos os numeros.\n");

    InserirDados(numero,n); /* Chamada da fun��o InserirDados que tem como parametro o vetor e o tamanho do
                               vetor, que foi determinado pelo usuario com a variavel n.*/

    printf("Digite o numero que deseja procurar: ");
    scanf("%f",&procura);    // O usuario ir� fornecer aqui o valor que deseja procurar dentro do vetor.

    retorno = buscaLinear(numero,n,procura); /* Aqui est� sendo feito a chamada da fun��o buscaLinear que ir�
                                                realizar a busca do valor procurado pelo usuario, essa fun��o
                                                tem como parametro o vetor numero, o numero de posi��es do vetor e
                                                o numero que o usuario est� procurando no vetor, essa fun��o ir� retornar
                                                true ou false.
                                             */

    if(retorno)
    {
        printf("Numero encontrado\n\n"); // Se o retorno for verdadeiro ser� exibida a mensagem valor encontrado
    }
    else
    {
        printf("Numero nao encontrado\n\n"); // Caso sej� falso, ser� exibido valor n�o encontrado.
    }
    return 0;
}

void InserirDados(float *v, int t)
{
    int i; // Foi declarado uma variavel que servir� como vari�vel de controle para o for
    for(i = 0; i < t; i++)
    {
        scanf("%f",&v[i]); // Aqui est� sendo armazenado os valores digitado pelo usu�rio no vetor de n posi��es.
    }
}

bool buscaLinear(float *v, int t, int p)
{
    bool achou = false;    // a vari�vel do tipo l�gico achou est� recebendo como valor padr�o false.
    int i = 0;
     /*Enquanto a varivel contadora i for menor que a quantidade de posi��es que o vetor tem,
      e !(achou) retornar verdadeiro, pois, como achou tem como valor padr�o false, !(false) = verdadeiro,
      dentro do while existe a codi��o se o valor que estiver armazenado na posi��o i do vetor for igual a p,
    ou seja, valor que foi digitado pelo usuario, a variavel achou ir� receber true, no que resultar� no fim da repeti��o pois
    !(true) = falso,dessa forma ser� retornado para a variavel da fun��o principal o valor logico
    true, que significa que o valor foi encontrado, caso contrario, ser� retornado false.
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
