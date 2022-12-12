#include <iostream>
// Study more about it
using namespace std;

class Text{
public:
     static int counter;

     static void showMessage()
     {
          cout << "This is counter: " << counter << endl;
          counter++;
     }
};

int Text::counter = 1; // As I can see so far, the function and variables static can be used without being created

int showID()
{
    static int id = 0; // the variable id since is static is not destroyed when it goes out of the function, the lifetime of the variable is the same of time of the program
    return id++; // return first then it's incremented
}
int main()
{
    //Text c, b;
    //c.showMessage();
    //b.showMessage();
    string name;
    while(name != "stop")
    {
        cout << "Type your name: " << endl;
        cin >> name;
        cout << "ID of the user " << name << " is: " << showID() << endl;
    }

    return 0;
}
