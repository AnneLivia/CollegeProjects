#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int *pInt = (int *)malloc(4 * sizeof(int));
    if(pInt == NULL)
    {
        cout << "Error.\n";
        exit(1);
    }
    cout << "Allocation with malloc\n";
    for ( int i = 0; i < 4 ; i++ )
    {
        pInt[i] = i+1;
        cout << pInt[i] << " ";
    }

    float *pFloat = (float *) calloc(5,sizeof(float));

    if(pFloat == NULL)
    {
         cout << "Error!\n";
         exit(1);
    }
    cout << "\n\n\nAllocation with calloc\n";
    for (int i = 0 ; i < 5 ; i++ )
    {
            pFloat[i] = 1.2 * i + 1;
            cout << pFloat[i] << "   ";
    }

    pInt = (int *)realloc(pInt,8*sizeof(int));


    for (int i = 4 ; i < 8; i++ )
    {
           pInt[i] = i+1;
    }

    cout << "\n\n\nAllocation with REALLOC\n";
    for (int i = 0 ; i < 8 ; i++ )
    {
            cout << pInt[i] << "   ";
    }

    cout << "\n\nPointer to Pointer dynamic memory allocation\n";
    int **ppInt = (int **) malloc(4 * sizeof(int *));
    for (int i = 0 ; i < 4; i++ )
    {
        ppInt[i] = (int *) malloc(2 * sizeof(int));
        for (int j = 0 ;  j < 2 ; j++)
        {
            if(i == j)
                ppInt[i][j] = 1;
            else
                ppInt[i][j] = 0;
            cout << ppInt[i][j] << "  ";
        }
        printf("\n");
    }



    for ( int i = 0;  i < 2; i++)
    {
        free(ppInt[i]);
    }


    free(ppInt);
    free(pInt);
    free(pFloat);
    return 0;
}
