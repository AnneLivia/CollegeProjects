#include <iostream>

using namespace std;

template <class T>
class TypeOfData{
public:
    TypeOfData(T x)
    {
        cout << x << " is neither a float nor an int nor a double, this is a character\n";
    }
};
template <>
class TypeOfData<float>
{
public:
    TypeOfData(float x)
    {
        cout << x << " is a float.\n";
    }
};

template <>
class TypeOfData<int>
{
public:
    TypeOfData(int x)
    {
        cout << x << " is an int.\n";
    }
};

template <>
class TypeOfData<double>
{
public:
    TypeOfData(double x)
    {

    TypeOfData<int> i(4);
    TypeOfData<float> f(4.22);
    TypeOfData<char> c('b');
    TypeOfData<double> d(2.33);
    return 0;
}
