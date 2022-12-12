#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Basic syntax
    // for(varType var : range_r) {
        // loop body
    //} // c++ 11
    // similar to for each
    int arr[] = {1,2,3,4,5};
    for(int i : arr) {
        cout << i << endl;
    }

    vector <int> array2 = {1,2,3,4,5};
    for(auto i : array2) {
        cout << ++i << endl; // This doesn't change the values.
    }
    cout << endl << endl;
    for(auto i : array2) { // The type is auto because of the vector, since it can be a plenty of types
        cout << i << endl;
    }
    cout << endl << endl;
    // To change I must pass by reference
    for (auto &i : array2 ) {
        cout << ++i << endl;
    }
    cout << endl << endl;
    for(auto i : array2) {
        cout << i << endl;
    }

    /* You cannot use a range based for loop with data
     which have no begin and end. This means you cannot use it with arrays allocated with new keyword

     int *arr = new int[100]; // Compile error;
     for(int j : arr) {
        ...
     }
     */
    return 0;
}
