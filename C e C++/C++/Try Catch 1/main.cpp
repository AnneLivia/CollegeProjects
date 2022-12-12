#include <iostream>
#include <vector>
#include <exception>

using namespace std;

double divide (double n1, double n2) {
    if(n2 == 0)
        throw "Cannot divide a number by 0";
    return n1 / n2;
}

int main()
{
    int n1, n2;

    try {
        cin >> n1 >> n2;
        cout << divide(n1, n2) << endl;
    } catch (const char* e) {
        cout << e << endl;
    }

    vector<int>v(5);
    v.at(0) = 1;
    v.at(1) = 1;
    v.at(2) = 1;
    v.at(3) = 1;
    v.at(4) = 1;

    try {
        cout << v.at(5) << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
