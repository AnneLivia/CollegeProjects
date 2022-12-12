#include <iostream>

/*
    Program about templates.
*/
using namespace std;

template <class FIRST, class SECOND> // Generic type of data

SECOND smaller(FIRST a, SECOND b = 8)
{
    return (a < b ? a : b);
}

int main()
{
    double x = 12.2, y = 10.3, z;

    cout << smaller(x,y) << endl;

    return 0;
}
