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

    // para acessar ou mudar os valores que dentro da vari�vel do tipo estrutura para qual o ponteiro est� apontando devemos fazer da seguinte maneira.
    (*pDepois).hora = 15;
    (*pDepois).minuto = 55;
    (*pDepois).segundo = 60;

    // Utilizando a formata�ao da seguinte forma: (*ponteiro).Membro\DaEstrutura;
     printf("Hor�rio 1: %i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);

    // Deve se colocar o par�ntes por conta da preced�ncia, pois o ponto na linguagem C vem primeiro.
    // Para n�o ficar fazendo isso toda hora por ser cansativo, n�s temos um atalho, que � utilizando o s�mbolo '->'.
    pDepois -> hora = 24;
    pDepois -> minuto = 40;
    pDepois -> segundo = 10;

    // Utilizando a formata�ao da seguinte forma: ponteiro -> MembroDaEstrutura;
    printf("Hor�rio 2: %i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);

    // Realiza��o de opera��es com ponteiros.
    int somatorio = 40;
    struct horario antes;

    // Opera��es com os valores que est�o armazenado no endere�o para o qual o ponteiro est� apontando.
    antes.hora = somatorio + pDepois->segundo;
    antes.minuto = ((pDepois->hora + pDepois->segundo + (*pDepois).minuto)/2) + somatorio - antes.hora;
    antes.segundo = (pDepois->hora + pDepois->segundo + pDepois->minuto) - pDepois->minuto;

    // Hor�rio da vari�vel do tipo struct horario depois de todas as opera��es realizadas com o ponteiro *agora.
    printf("Antes: %i:%i:%i\n",antes.hora,antes.minuto,antes.segundo);

    return 0;
}
*/

