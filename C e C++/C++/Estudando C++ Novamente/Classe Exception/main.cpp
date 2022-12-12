#include <iostream>
#include <exception>
#include <string.h>

using namespace std;

class ExcecaoCustomisada : public exception
{
protected:
    char msg[100];
public:
    ExcecaoCustomisada(const char* e)
    {
        strcpy(msg,e);
    }

    virtual const char* what()
    {
        return msg;
    }
};

int fat(int n)
{
    if(n < 0)
        throw ExcecaoCustomisada("Numero Negativo!");
    if(n == 0)
        return 1;
    return n * fat(n - 1);
}
int main()
{
    try{
        cout << "5! = " << fat(5) << endl;
        cout << "-2! = " << fat(-2) << endl;
    }catch(ExcecaoCustomisada e)
    {
        cerr << "Erro: " << e.what() << endl;
    }
    return 0;
}
