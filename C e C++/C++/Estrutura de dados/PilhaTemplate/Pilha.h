#include <iostream>


using namespace std;

template <class Type>
class Pilha{
private:
    Type* vet;
    int MAX_TAM;
    int topo;

public:
    Pilha(int tam)
    {
        vet = new Type[tam];
        MAX_TAM = tam-1;
        topo = -1;
    }

    ~Pilha()
    {
        delete[] vet;
    }

    push(Type n)
    {
        if(topo == MAX_TAM)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
           vet[++topo] = n;
        }
    }

    void pop()
    {
        if(topo == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            topo--;
        }
    }

    Type top()
    {
        if(topo == -1)
        {
            return NULL;
        }
        else
        {
            return vet[topo];
        }
    }

    bool vazio()
    {
        return (topo == -1);
    }


};
