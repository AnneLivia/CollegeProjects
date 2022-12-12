#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // For que pode ser usado em containers que podem ser iteradas, etc.
    vector <int> n {1,3,4,1,2,2,3,4,3};

    for(auto i:n) {
        cout << i << endl;
    }

    cout << endl;

    int x[10] = {1,2,3,2,4,5,5,5,5,5};
    for(int i:n) {
        cout << i << endl;
    }

    // If I have like a const char*, it cannot be iterated. Const char is the same of a string

    char name[] = "Livia";
    for(auto i : name) {
        cout << i << endl;
    }
    return 0;
}
