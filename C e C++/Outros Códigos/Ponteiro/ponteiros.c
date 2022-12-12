#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    /**
     Just for the record, when we create a pointer we have to first put the asterisk first and then the name of the pointer, like: *pointer.
     and just for making sure, is good to put the pointer created to point to nothing like: pointer = NULL. just because when we finish that pointer, maybe it
     has dish.
     For change or access the value inside the address we gotta put like this: pointer = &AddressVariable. and then to access or change what has inside
     we just gotta do: *pointer = 20, and doing that we will change the value of the variable that the pointer is point towards.
     to print, we just have to use the function that is used to show on the screen messages, etc. and use like this: pointer, to show the address, and
     *pointer, to show the value that this address contains.
    */

    // This is the first topic about pointer.
    /*
    int x = 10;      // It was created a variable called 'x' that contains the number 10;
    int *ponteiro;   // Here, was created a pointer who points straight to the x variable address
    ponteiro = &x;   // Here was defined to where the pointer is point towards. The pointer is point to the x address with the character &.

    int y = 20;      // Here was created a variable with the name 'y', and was attributed the number 20.
    *ponteiro = y;   // Here was defined that the value where the pointer is point towards that is the address of 'x' is gonna change to the value that the variable 'y' has, 20.

    printf("X = %i\nY = %i",x,y);
    */
    // Starting to work with pointers with other kind of data like: char, double, float, etc.
    /*
     int x = 10;
     char c = 'a';
     double y = 10.78;

     int *pX = &x;       // We can create a pointer and soon add him a variable address to him in the same line like this.
     char *pC = &c;      // For each variable address we look at the kind of date, and use the specific pointer, like in this case is CHAR.
     double *pY = &y;    // In this case the pointer is double, because of the variable 'y' that was declared double.

     /* Always to the show the address of the variable that the pointer is point to, we have to declare it %d or %i,
     because the memory addresses is a integer number.

     printf("The address of the variable X = %i. The value of the variable X = %i\n",pX,*pX);
     printf("The address of the variable C = %i. The value of the variable C = %c\n",pC,*pC);
     printf("The address of the variable Y = %i. The value of the variable Y = %f\n",pY,*pY);


     // Here is going to happen a add operation with the values of the address that the pointers pX and pY is point towards.
     double soma;
     soma = *pX + *pY;
     printf("\nThe sum between X(%i) = %i and Y(%i) = %f is equal to %f. ",pX,*pX,pY,*pY,soma);

     return 0;

}
*/
