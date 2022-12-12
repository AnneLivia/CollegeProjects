#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque <int> fila;

    if(fila.empty())
        cout << "Fila esta vazia" << endl;
    else
        cout << "Fila nao esta vazia\n";
    // Insert at the end of the queue
    fila.push_back(10);
    fila.push_back(20);
    // Insert at the begin of the queue
    fila.push_front(30);

    // 30 10 20
    // Iterator above
    deque <int>::iterator it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " " << endl;

    if(fila.empty())
        cout << "Fila esta vazia" << endl;
    else
        cout << "Fila nao esta vazia\n";
    // To clear the deck
    fila.clear();
    if(fila.empty())
        cout << "Fila esta vazia" << endl;
    else
        cout << "Fila nao esta vazia\n";

    // Inserting elements in the deck
    fila.push_back(30);
    fila.push_front(20); // that's the second element
    fila.push_front(10);

    fila.erase(fila.begin() + 1); // we pass kind of the address of where we want to erase in this case is the second element, since begin function stores the first address
    it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " " << endl;

    cout << "First element: " << fila.front() << endl;
    cout << "Last element: " << fila.back() << endl;

    it = fila.begin() + 1;
    fila.insert(it,20); // inserting the 20 in the second position with the iterator
    fila.erase(it + 1); // removing the third position, since the it was in the second now it is in the third position of the deck
    cout << "Last element: " << fila.back() << endl;
    fila.pop_front();
    cout << "First element: " << fila.front() << endl;
    return 0;
}
