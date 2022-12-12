#include <iostream>
#include <map>
#include <stdlib.h>
// Continue...
using namespace std;

/*
Maps are associative containers that store elements formed by a combination of a key value and a mapped value,
following a specific order. In a map, the key values are generally used to sort
and uniquely identify the elements, while the mapped values store the content
associated to this key. The types of key and mapped value may differ,
and are grouped together in member type value_type, which is a pair type combining.

// We can create pair to insert in the map,
    pair <some data type (key), some data type (value)> arr[] = {
        make_pair(1,"Livia"), make_pair(2,"Socorro"),make_pair(3,"Luara"),
    };

*/

int main()
{
    /* // An array of pairs to insert in the map
    pair <int, string> arr[] = {
        make_pair(1,"Livia"), make_pair(2,"Socorro"),make_pair(3,"Luara"),
        map <int, string> mapa(arr, arr + 3);
    };
    */
    map <int, string> mapa;
    string name;
    /*for (int i = 1; i <= 4; i++)
    {
            cout << "Type your name: ";
            getline(cin,name);
            mapa[i] = name;
    }
    */

    mapa[1] = "Anne Livia";
    mapa[2] = "Socorro";
    mapa[3] = "Luara";
    mapa[4] = "Safira";
    system("cls");

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;
    cout << mapa[4] << endl;
    // using the function at to change the value associate with some key
    //mapa.at(2) = "Socorro";
    cout << mapa[2] << endl;

    //mapa.clear(); // cleaning the map
    if(mapa.empty())
        cout << "Vazio" << endl;
    else
        cout << "Nao vazio" << endl;

    if(mapa.count(1) > 0)
        cout << "1 is an element of the mapa";
    else
        cout << "1 is not an element of mapa";

    cout << "\n\n";
    map <int, string>::iterator it;
    for (it = mapa.begin() ; it != mapa.end(); it++)
    {
        cout << "The key is: " << it->first << "=> The value is: " << it->second << endl; // first attribute is the key and second attribute is the value
    }

    // I can use the find method to return an iterator to the it aka iterator that I've created

    it = mapa.find(2); // this is going to return the iterator to the element of key 2
    mapa.erase(it); // Now with this I'm erasing the second key of the map
    cout << "\n\n";
    for (it = mapa.begin() ; it != mapa.end(); it++)
    {
        cout << "The key is: " << it->first << "=> The value is: " << it->second << endl; // first attribute is the key and second attribute is the value
    }

    // Verifying if an element exist
    if(mapa.find(2) == mapa.end()) // because if the find has ran all the elements of the map, then it has reach the end, and if this has reached the end it's because the key does not exist
        cout << "\nThe key 2 does not exist\n\n";
    else
        cout << "\nThe key 2 exist\n";

    // Inserting the elements again:
    mapa.insert(pair<int, string> {2,"Socorro"}); // It could also be done in this way: mapa[2] = socorro or make_pair(2,"Socorro");
    cout << "\n\n";
    for (it = mapa.begin() ; it != mapa.end(); it++)
    {
        cout << "The key is: " << it->first << "=> The value is: " << it->second << endl; // first attribute is the key and second attribute is the value
    }

    // Using multimap, this multimap makes one key be a reference to more than one value as above:

    multimap <int, string> mm; // my multimap that contains the key int and the value string
    mm.insert(pair<int,string>(1,"Phyton 2")); // inserting pair in the multi map
    mm.insert(pair<int,string>(1,"Phyton 3"));
    mm.insert(pair<int,string>(2,"C"));
    mm.insert(pair<int,string>(2,"C++"));
    mm.insert(pair<int,string>(3,"Ruby")); // inserting pair in the multi map

    multimap<int,string>::iterator it2; // VREATING AN ITERATOR OF MULTIMAP
    it2 = mm.begin();
    cout << "\n\n";
    for (; it2 != mm.end(); it2++)
    {
        cout << "KEY: " << it2->first << " VALUE: " << it2->second << endl;
    }

    multimap <int, string>::iterator it_lower, it_upper, it3;
    it_lower = mm.lower_bound(2); // the inferior limit, the point where I want the iterator starts to count
    it_upper = mm.upper_bound(4); // The superior limit, the point where I want the iterator stops the count
    cout << "\n\n";
    for (it3 = it_lower; it3 != it_upper; it3++) // printing the key from 2 to 4.
    {
        cout << it3->first << " => " << it3->second << endl;
    }

    return 0;
}
