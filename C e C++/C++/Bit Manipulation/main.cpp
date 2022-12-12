#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // In binary a letter is lowercase if its third bit is 1, like:
    // 0100 0001 = 'A'
    // 0110 0001 = 'a'
    // To check if the given letter (binary) is lowercase or uppercase, we must use the and operator as follows:
    // 0100 0001
    // 0010 0000 // This one was created with number 1 only in the place where I wanna check it out
    // 0000 0000 // This is the result, we got 0, in any capital letter is going to be 0.

    char c;
    //cin >> c;
    // converting to hexadecimal number
    // 0010 0000
    // 2     0
    // 0x20 to express that this is a hexadecimal number on C
    c = 'a';
    if((c & 0x20) == 0)
        cout << c << " is uppercase\n";
    else
        cout << c << " is lowercase\n";

    // 10 - 1010
    //    - 10100 == 20
    cout << (10 << 1) << endl;

    int num1 = 5; // 0101
    int num2 = 3; // 0011
    int num3 = num1 & num2;
    cout << bitset<8>(num3) << endl;
    return 0;
}
