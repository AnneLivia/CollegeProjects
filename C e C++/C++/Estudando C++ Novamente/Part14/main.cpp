#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Type a word and get it reversed: ";
    getline(cin,name);
    cout << "\n\n";
    cout << "Typed text: " << name << endl;
    int tamStr = name.size() - 1;
    char aux;
    for (int i = 0; i < name.size() / 2 ; i++)
    {
        aux = name.at(i);
        name.at(i) = name.at(tamStr - i);
        name.at(tamStr - i) = aux;
    }
    cout << "Reversed text: " << name << endl;
    return 0;
}
