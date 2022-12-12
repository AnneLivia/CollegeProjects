#include <iostream>
#include "Pilha.h"

using namespace std;

int main()
{
    Pilha <int> p(6);

    p.push(3);
    p.push(4);
    p.push(6);
    cout << p.top() << endl;
    p.pop();
    cout << p.top() << endl;
    p.pop();
    cout << p.top() << endl;

    cout << "Pilha vazia ? " << p.vazio() << endl;
    p.pop();
    cout << p.top() << endl;
    cout << "Pilha vazia ? " << p.vazio() << endl;
    p.pop();

    return 0;
}
