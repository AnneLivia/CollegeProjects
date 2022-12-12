#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Contém chave e valor
    map<int,string>prod;

    prod[0] = "Mouse"; // Chave: 0 && value: Mouse;
    prod[1] = "Teclado";
    prod[2] = "Monitor";
    prod[3] = "Cx. Som";

    for ( auto it=prod.begin(); it != prod.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << endl << endl;

    for(auto it:prod)
    {
        cout << it.first << endl;
    }

    // To insert values with the insert method

    prod.insert(pair<int,string>(4,"CPU"));
    prod.insert(pair<int,string>(5,"Placa Mae"));
    prod.insert(pair<int,string>(6,"Placa de Video"));
    prod.insert(pair<int,string>(7,"WebCam"));

    cout << endl << endl;

    for(auto i : prod) {
        cout << i.first << " " << i.second << endl;
    }

    // Erase - to delete a thing according to the key
    prod.erase(2); // It's going to delete the monitor, since this is the value with key 2
    prod.erase(prod.begin(),prod.find(3)); // To delete from the first value to the second parameter minus one
    cout << endl << endl;
    cout << endl << endl;

    for(auto i : prod) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl << endl;
    cout << endl << endl;
    // Function find that finds a key inside my map
    map<int,string>::iterator itMap;
    itMap = prod.find(7);
    if(itMap == prod.end())// If it's at the end it means that it has gone throughout all the map and has not find.
        cout << "Product was not find\n";
    else {
        cout << "The product is stored\n";
        cout << "Codigo: " << itMap->first << " Produto: " << itMap->second << endl;

    }

    prod.clear(); // To clear everything inside the map
    return 0;
}
