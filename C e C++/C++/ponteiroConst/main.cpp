#include <iostream>

using namespace std;

int main()
{
    int* const p = new int[2]; // Ponteiro constante, eu n�o posso alterar o tamanho dele, mas posso alterar os valores que est�o nele

    *p = 1;
    *(p+1) = 2;
    cout << "p[0] = " << *p << "\np[1] = " << *(p+1) << endl;
    *(p+1) = 4;
    cout << "Eu posso fazer isso: p[1] = " << *(p+1) << endl;
    // p++; // Por�m n�o posso fazer isso pois isso � um ponteiro contante, ele n�o pode mudar de tamanho.
    int vet[4]; // This is the same as int* const p;

    int const* p1; const int* p2; // ponteiros para constante, o valor que ele pegar n�o pode ser alterado
    p1 = &p[0];
    p2 = &p[1];
    cout << "p1 = " << *p1 << "\np2 = " << *p2 << endl;
    // *p1 = 5; *p2 = 10; // N�o posso fazer isso, porque os ponteiros s�o ponteiros para constantes

    const char* const p3 = "Livia";

    cout << "Valor em p3 = " << *(p3 + 1) << endl;
    //*(p3 + 1) = 'e'; // N�o posso fazer isso, pois isso � um ponteiro constante para valor constante
    delete []p;
    return 0;
}
