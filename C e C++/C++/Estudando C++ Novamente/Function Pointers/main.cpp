#include <iostream>

using namespace std;

void A()
{
    cout << "Hello word\nthis is just a test\n";
}

void B(void (*ptr)()) // Function pointer as argument
{
    ptr(); // Call-back function that ptr points to.
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    void (*p)();
    p = A; B(p);

    int (*pSum)(int,int) = sum; // Pointer to a function that receives 2 parameters and returns an int number;

    int result = pSum(5,6);
    cout << "Result: " << result << endl;
    cout << "2 + 2 = " << pSum(2,2) << endl;
    return 0;
}
