#include <iostream>

/*
    Copy constructor
*/
using namespace std;

class Person
{
    string *name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = new string(name);
        this->age = age;
    }
    Person(const Person &p)
    {
        name = new string(*p.name);
        age = p.age;
    }

    void changeName(string name, int age)
    {
        *(this->name) = name;
        this->age = age;
    }

    void print()
    {
        cout << "Hello, I'm " << *(this->name) << " and I'm " << this->age << " years old" << endl;
    }

    ~Person()
    {
        delete name;
    }
};
int main()
{
    Person p("Livia",20);
    Person copyP = p;

    p.print();
    copyP.print();
    cout << endl;
    p.changeName("Anne Livia",18);
    cout << "\n\n" << endl;
    p.print();
    copyP.print();

    return 0;
}
