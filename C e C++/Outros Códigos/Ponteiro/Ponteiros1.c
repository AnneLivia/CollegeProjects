#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
int main()
{
    setlocale(LC_ALL,"portuguese");

    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *pDepois;
    pDepois = &agora;

    // para acessar ou mudar os valores que dentro da variável do tipo estrutura para qual o ponteiro está apontando devemos fazer da seguinte maneira.
    (*pDepois).hora = 15;
    (*pDepois).minuto = 55;
    (*pDepois).segundo = 60;

    // Utilizando a formataçao da seguinte forma: (*ponteiro).Membro\DaEstrutura;
     printf("Horário 1: %i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);

    // Deve se colocar o parêntes por conta da precedência, pois o ponto na linguagem C vem primeiro.
    // Para não ficar fazendo isso toda hora por ser cansativo, nós temos um atalho, que é utilizando o símbolo '->'.
    pDepois -> hora = 24;
    pDepois -> minuto = 40;
    pDepois -> segundo = 10;

    // Utilizando a formataçao da seguinte forma: ponteiro -> MembroDaEstrutura;
    printf("Horário 2: %i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);

    // Realização de operações com ponteiros.
    int somatorio = 40;
    struct horario antes;

    // Operações com os valores que estão armazenado no endereço para o qual o ponteiro está apontando.
    antes.hora = somatorio + pDepois->segundo;
    antes.minuto = ((pDepois->hora + pDepois->segundo + (*pDepois).minuto)/2) + somatorio - antes.hora;
    antes.segundo = (pDepois->hora + pDepois->segundo + pDepois->minuto) - pDepois->minuto;

    // Horário da variável do tipo struct horario depois de todas as operações realizadas com o ponteiro *agora.
    printf("Antes: %i:%i:%i\n",antes.hora,antes.minuto,antes.segundo);

    return 0;
}
*/

