#include <iostream>
#include <set>
using namespace std;

/**
    Sets are containers that store unique elements following a specific order.
    In a set, the value of an element also identifies it (the value is itself the key, of type T),
    and each value must be unique. The value of the elements in a set cannot be modified once in the container
    (the elements are always const), but they can be inserted or removed from the container.
    Nao há elementos repetidos no set.
*/

/*
    Continue...
    Esse set além de tirar os elementos estão repetidos, ele ainda deixa os elementos ordenados
*/
int main()
{
    int vet[] = {70,20,10,30,40};
    set <int> s(vet,vet+5);

    set<int>::iterator itSet = s.begin();

    while(itSet != s.end())
    {
        cout << *itSet++ << endl;
    }

    if(s.empty())
        cout << "Empty\n";
    else
        cout << "Not empty\n";
    s.clear();

    if(s.empty())
        cout << "Empty\n";

    itSet = s.find(20);
    if(itSet == s.end())
        cout << "20 exist\n";
    else
        cout << "20 does not exist\n";
    return 0;
}
