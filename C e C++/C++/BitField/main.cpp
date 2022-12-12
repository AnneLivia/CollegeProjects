#include <iostream>

using namespace std;

struct BitField {
    unsigned int b : 3; // This has only 3 bits, then I can just add a number until 7
                        // 000, 001, 010, 011, 100, 101 , 110, 111;
};
int main()
{
    BitField mybit = {3};
    BitField otherBit1 = {7};
    BitField otherBit2 = {8};
    cout << mybit.b << endl;
    cout << otherBit1.b << endl;
    cout << otherBit2.b << endl; // This returns 0 because, I'm using only 3 bits, then it goes only until 7
    return 0;
}
