#include <iostream>
#include <string.h>

using namespace std;
class Person
{
private:
    int age;
    char name[100];
    int *relatives;
public:

    Person(int age, const char *name)
    {

        cout << "It's in the constructor: " << endl << endl;
        strcpy(this->name, name);
        this->age = age;
        relatives = new int[100];
        cout << "It's here " << this->name << endl;
    }

    ~Person()
    {
        cout << "It's in the destructor: " << endl << endl;
        cout << "It's here " << this->name << endl;
        delete[] relatives;
    }

};
int main()
{
    Person p[3] = {
        {20,"Livia"}, {52,"Socorro"}, {26,"Luara"},
    };

    return 0;
}
