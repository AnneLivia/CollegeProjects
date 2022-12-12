#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vetor[], const int n)
{
    int *ponteiro = vetor;
    int *const ponteiro2 = vetor + n;
    int soma = 0;
    for(ponteiro = vetor; ponteiro < ponteiro2; ++ponteiro)
    {
        soma +=*ponteiro;
    }
    return soma;
}
int main()
{
    int somarVetor(int vetor[],const int n);
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %d", somarVetor(vetor,10));

    return 0;
}
