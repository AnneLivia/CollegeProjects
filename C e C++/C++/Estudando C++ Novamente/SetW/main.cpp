#include <iostream>
#include <iomanip> // used because the function setw is inside this function

using namespace std;

// We use setw to make formated text. we use a field of character, and inside this field we put the variable and it justify at the right... look bellow
// and see the example:

class Person
{
public:
    string name;
    int age;
    Person(const string& name, const int &age)
    {
            this->name.assign(name); // assign the name that was received in the parameter and put it the name member.
            this->age = age;
    }
};

int main()
{
    Person p1("Livia", 20), p2("Socorro",52), p3("Safira",3), p4("Luara",26);
    cout << setw(10) << "Name: " << setw(4) << "Age: " << endl;
    cout << setw(10) << p1.name << setw(4) << p1.age << endl;
    cout << setw(10) << p2.name << setw(4) << p2.age << endl;
    cout << setw(10) << p3.name << setw(4) << p3.age << endl;
    cout << setw(10) << p4.name << setw(4) << p4.age << endl;
    // with the number inside setw we specified the number of character we want in our field.
    return 0;
}
