#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    struct pHorario
    {
         int *pHora;
         int *pMinuto;        // -> here is a structure that contains 3 int pointer inside her.
         int *pSegundo;
    };

    struct pHorario hoje;    // here was created a pointer called 'hoje' that is going to use the pointer inside the structure pHorario.

    int hora = 200;
    int minuto = 300;        // -> Here was created 3 variables that will be the addresses of the pointers inside the structure.
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;  // To point to a variable using pointer inside a structure we have to do in this way.
    hoje.pSegundo = &segundo;

    /*
    O ponteiro hoje.pHora est� apontando para a vari�vel hora
    O ponteiro hoje.pMinuto est� apontando para a vari�vel minuto
    O ponteiro hoje.pSegundo est� apontando para a vari�vel minuto

    O Que aconteceu � que foi mais ou menos que empacotado tr�s ponteiro em uma s� estrutura, e ela foi utilizada logo em seguinda.
    */

   /* printf("Hora - %i\n",*hoje.pHora);
    printf("Minuto - %i\n",*hoje.pMinuto);
    printf("Segundo - %i\n",*hoje.pSegundo);

    *hoje.pSegundo = 1000;  // To change the value of the address that the pointer is pointing has to be done in this way.

    printf("Segundo alterado - %i\n",*hoje.pSegundo);

    return 0;
}
*/
