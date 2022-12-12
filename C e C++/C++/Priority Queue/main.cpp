#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<pair<int, string>> pokemon;
    char op;
    string name;
    int power;

    while(cin >> op)
    {
        if(op == 'C') { // Capture pokemons
            cin >> name >> power;
            pokemon.push(make_pair(power,name));
        } else if (op == 'B') { // Battle
            pair<int, string> p = pokemon.top();
            pokemon.pop();

            cout << p.second << endl;

            pokemon.push(make_pair(p.first / 2,p.second));
        }
    }
    return 0;
}
