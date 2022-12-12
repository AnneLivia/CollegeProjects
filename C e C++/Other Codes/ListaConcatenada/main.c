#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
    struct lista *proximo;
}Lista;
// Essa função abaixo retorna um endereço de memoria
Lista *procuraValor(Lista *pLista, int valor)
{
    while(pLista != (Lista *)0)
    {
        if(pLista->valor == valor)
            return pLista;
        else
            pLista = pLista->proximo;
    }
    return (Lista *)0;
}

int main()
{
    Lista n1,n2,n3;
    Lista *resultado, *gancho = &n1;

    n1.valor = 10;
    n2.valor = 20;
    n3.valor = 30;

    n1.proximo = &n2;
    n2.proximo = &n3;
    n3.proximo = (Lista *)0;

    int valor;
    printf("Digite o valor da pesquisa: ");
    scanf("%d",&valor);

    resultado = procuraValor(gancho,valor);

    if(resultado != (Lista *)0)
        printf("Valor %d encontrado",resultado->valor);
    else
        printf("Valor nao encontrado");
    return 0;
}
