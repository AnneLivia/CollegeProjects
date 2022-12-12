#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream myFile;
    myFile.open("myText.txt");

    string text;
    char c = myFile.get(); // get one character and starts to point to another.
    text.push_back(c);

    while(myFile.good())
    {
        c = myFile.get(); // get one character and starts to point to another.
        text.push_back(c); // put one character on a string.
    }

    while(true)
    {
        myFile >> c;
        if(myFile.fail())
            break;
        cout << c;
    }
     myFile >> c;
    myFile.close();

    return 0;
}
