#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    int numero, iteradorImpar, iteradorPar, i = 1;
    iteradorImpar = iteradorPar = 0;

    setlocale(LC_ALL,"Portuguese");

    cout << "Digite um número: " << endl;
    cin >> numero;

    int vetImpar[numero], vetPar[numero];

    while(i <= numero) {
        if(i % 2 == 0)
            vetPar[iteradorPar++] = i;
        else
            vetImpar[iteradorImpar++] = i;
        i++;
    }

    i = 0;
    cout << "Par - Impar\n";
    while(i <= numero) {
        if(i < iteradorPar)
            cout << vetPar[i] << "   ";
        else
            cout << "    ";
        if(i < iteradorImpar)
            cout <<  "    " << vetImpar[i]  << "\n";
        i++;
    }

    return 0;
}
