#include <iostream>

// Estudo de funções virtuais

using namespace std;

class ClasseMae
{
public:
    virtual void mostrarMensagem()
    {
        cout << "Oi, eu sou a classe mae" << endl;
    }
};

class Classefilha : public ClasseMae
{
public:
    virtual void mostrarMensagem(){
        cout << "Oi, eu sou a classe filha" << endl;
    }
};

void foo(ClasseMae* n)
{
    n->mostrarMensagem();
}

int main()
{
    ClasseMae mae;
    Classefilha filha;

    foo(&mae);
    foo(&filha);

    return 0;
}
