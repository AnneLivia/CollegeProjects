#include <iostream>

using namespace std;

int fat(int n)
{
    if(n < 0)
        throw "Numero negativo!!";
    if(n == 0)
        return 1;
    else
        return n * fat(n - 1);
}

int main()
{
    try
    {
        cout << "Fatorial de 5: " << fat(5) << endl;
        cout << "Fatorial de -5: " << fat(-5) << endl;
    }
    catch(const char* e)
    {
      cerr << "Erro: " << e << endl;
    }
    catch(...)
    {
        "Erro inesperado\n";
    }
    return 0;
}
