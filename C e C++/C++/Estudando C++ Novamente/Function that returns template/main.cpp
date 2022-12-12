#include <iostream>

using namespace std;

template <typename T> T sum(T n1, T n2)
{
    return n1 + n2;
}

int main()
{
    cout << "Sum of integers: \n3 + 23 = " << sum(3,23) << endl << endl;
    cout << "Sum of floats: \n5.11 + 8.54 = " << sum(5.11,8.54) << endl;
    return 0;
}
