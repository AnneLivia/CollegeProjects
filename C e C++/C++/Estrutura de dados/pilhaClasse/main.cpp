#include <iostream>

using namespace std;

class Pilha
{
private:
    int topo;
    int *vet;

public:
    Pilha()
    {
        vet = new int[56];
        topo = -1;
    }
    ~Pilha()
    {
        delete []vet;
    }

    void push(int n)
    {
        if(topo == 55)
            cout << "stack overflow" << endl;
        else
            vet[++topo] = n;
    }

    void pop()
    {
        if(topo != -1)
            topo--;
    }

    int getTopo()
    {
        if(topo != -1)
            return vet[topo];
        else
            return -1;
    }

    bool vazia()
    {
        if(topo == -1)
           return 1;
        else
            return 0;
    }

};
int main()
{
    Pilha p;

    for(int i = 1; i <= 58; i++)
    {
        p.push(i);

    }

    while(!p.vazia())
    {
        p.pop();
        cout << p.getTopo() << endl;
    }

    if(p.vazia())
    {
        cout << "Pilha agora vazia" << endl;
    }
    return 0;
}
