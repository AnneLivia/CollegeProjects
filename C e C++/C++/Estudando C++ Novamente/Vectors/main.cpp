#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void print(vector <int> v)
{
    for (int i = 0; i < (unsigned int) v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

}
int main()
{

    /*
    vector <int> v(8);
    for (int i = 0 ; i < 8; i++)
    {
        v[i] = i +  1;
    }

    system("cls");
    cout << "Values of the vector:\n";
    print(v);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    cout << "Values of the vector now, after changed:\n" << endl;
    print(v);
    v.pop_back();
    cout << "Values of the vector now, after changed using the pop:\n" << endl;
    print(v);
    v[0] = 999;
    cout << "Values of the vector now, after changed the first element:\n" << endl;
    print(v);

    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    */
    // Another part of vector

    vector <int> myVector;
    myVector.push_back(1);
    myVector.push_back(4);
    myVector.push_back(3);
    myVector.push_back(10);

    /*
    // Using a iterator:
    vector<int>::iterator it; // Here, I'm declaring an iterator called it.
    it = myVector.begin(); // This function "begin" return an iterator, a pointer to the first element of the vector. so now, my iterator points to the first element.
    // I don't initialized the for, because it has already been done above. where it takes the pointer to the first element
    for (; it < myVector.end(); it++) // the function "end" points to one value above the vector, similar to arrays, where the range is open.
    {
        cout << *it << "  "; // deference it to show the value that it's point to.
    }

    cout << "\n\nFirst value using begin: " << *myVector.begin();
    cout << "\n\nLast value using end: " << *(--myVector.end()) << endl << endl;
    */
    // Iterator reverse
    //vector<int>::reverse_iterator rIt; // Reverse iterator starts from the end to the final.
    //vector<int>::iterator it;
    /*int i = 0;
    for(rIt = myVector.rbegin(); rIt != myVector.rend(); rIt++)   // The function rbegin starts from the end, the function rend starts from the beginning
        *rIt = ++i;

    it = myVector.begin();
    for (; it < myVector.end(); it++)
    {
        cout << *it << "    ";
    }
    //when the vector is initialized when created as follows: vector<type> nameVector(n); this assigns the number 0 in the vector's position.

    cout << "\n\nVector empty: " << myVector.empty() << endl;

    while(!myVector.empty())
        myVector.pop_back();

    cout << "\n\nVector empty: " << myVector.empty() << endl;

    */
    // Function insert is used to assign a value in some specif function of my vector.
    vector<int>::iterator it = myVector.begin();

    cout << "Before the function insert: \n";
    for ( unsigned int i = 0 ; i < myVector.size(); i++)
    {
        cout << myVector.at(i) << ' ';
    }

    myVector.insert(it + 1, 76);
    cout << "\n\After the function insert: \n";
    for ( unsigned int i = 0 ; i < myVector.size(); i++)
    {
        cout << myVector.at(i) << ' ';
    }

    cout << "\n\After the function erase: \n"; // This function is used to erase some specific value.
    myVector.erase(myVector.begin() + 1); // this is going to erase the second value of the vector;

    for ( unsigned int i = 0 ; i < myVector.size(); i++)
    {
        cout << myVector.at(i) << ' ';
    }

    // Function swap change values;
    vector<int>a(2,39); // It is going to contain two positions and in both positions is going to contain the number 39
    vector<int>b(3,10); // same as above;
    a.swap(b); // A is receiving the values of b and b is receiving the values of a.
    print(a);
    print(b);
    cout << "Size of the vector: " << myVector.size() << endl;
    myVector.clear(); // this removes all elements of the vector.
    cout << "Size of the vector: " << myVector.size() << endl;
    return 0;
}
