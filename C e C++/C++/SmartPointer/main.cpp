#include <iostream>
#include <memory>

using namespace std;

int main()
{
    /*
        Para usar incluir a biblioteca memory
        basicamente este tipo de ponteiro se comporta
        como um ponteiro normal, excelto pelo fato que
        eles deletam o objeto apontado automaticamente.
        As vantagens s�o:
        1) N�o precisamos lembrar de liberar a mem�ria
        2) N�o precisamos chamar delete ou free para cada objeto.
        3) N�o corremos o risco de "Dangling Pointer", que s�o ponteiros que apontam para objetos deletados.

    */

    int num = 10;
    int *pNum = &num; // A normal pointer
    cout << "Address: " << pNum << " Value inside this address: " << *pNum << endl;
    cout << endl << endl;
    //unique_ptr<int> pErro = &num; //Erro, unique s� permite um ponteiro por vez
    shared_ptr<int> pNSmart(new int/*(It can contain a value or not)*/); // Smart Pointer unique of type int
    // Para usar mais de um, usar shared_ptr.
    shared_ptr<int>pNSmart2 = pNSmart;
    *pNSmart = 10;
    cout << "Address: " << &pNSmart << " Value inside this address: " << *pNSmart << endl;
    cout << "Address: " << &pNSmart2 << " Value inside this address: " << *pNSmart2 << endl;
    cout << endl << endl;

    // Working with strings
    unique_ptr<string>str(new string("Anne Livia"));
    cout << "Size: " << str->size() << " Value inside this address: " << *str << endl;

    return 0;
}
