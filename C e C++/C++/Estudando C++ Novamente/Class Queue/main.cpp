#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> fila;

    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout << "First element: " << fila.front() << endl;
    cout << "Last element: " << fila.back() << endl;

    int e;
    while(!(fila.empty()))
    {
        e = fila.front();
        cout << e << " " << endl;
        fila.pop();
    }

    cout << "The queue is empty ? " << fila.empty() << endl;
    return 0;
}
