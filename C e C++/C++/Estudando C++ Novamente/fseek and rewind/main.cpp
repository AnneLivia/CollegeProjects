#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *pFile = fopen("teste.txt","rb");
    if(pFile == NULL)
    {
        cout << "Error\n";
        exit(1);
    }

    int v;
    fseek(pFile,2 * sizeof(int),SEEK_SET); // jump a specific amount of bytes specified on the second parameter from a determined beginner.
    fread(&v,sizeof(int),1,pFile);
    cout <<"The number that was read: "<< v << endl;
    rewind(pFile); // Return to the beginner of the function.
    fread(&v,sizeof(int),1,pFile);
    cout << "Now the first number is: " << v << endl;


    fclose(pFile);
    return 0;
}
