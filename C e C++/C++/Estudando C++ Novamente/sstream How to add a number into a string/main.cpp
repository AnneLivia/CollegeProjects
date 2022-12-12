#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss; // this is the type of string that we use in order to add an integer or whatever in a string
    int age = 20;
    string name = "Livia";
    string info;

    ss << "Name: "; // we use the ss as a place that is going to receive the stream
    ss << name;
    ss << "; Age: ";
    ss << age;

    // we can assign the value inside ss into a variable of type string

    info = ss.str(); // by doing that I'm making this ss be a string and the value inside the string is being inserted  inside the string info
    cout << info << endl;
    //or...
    cout << ss.str() << endl;
    return 0;
}
