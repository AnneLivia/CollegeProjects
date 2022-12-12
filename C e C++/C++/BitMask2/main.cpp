#include <iostream>

using namespace std;

int main()
{
    // 0000 0010
    // 0011 0000
    // 0011 0010

    char my_number = 2; // 0000 0010
    my_number = 2 | 0b00110000; // This is going to change to character

    printf("%c\n",my_number);


    return 0;
}
