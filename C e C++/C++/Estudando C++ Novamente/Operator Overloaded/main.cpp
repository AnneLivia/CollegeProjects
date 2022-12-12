#include <iostream>
#include <string.h>


using namespace std;

// Example 1
/*
class Person
{
private:
    int age;
public:
    Person(int age)
    {
        this->age = age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
    Person operator+(Person &p) // Overloading the operator +
    {
        return this->age + p.age; // returning the sum of the current object + the object that was passed.
    }

};

void usePerson()
{
    Person p1(20), p2(20), p3(0);
    p3 = p1+p2;
    cout << p3.getAge() << endl;
}
*/

//Example 2
/*
class ComplexNumber
{
private:
    int real, imag;
public:
    ComplexNumber(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    ComplexNumber operator+(ComplexNumber &c)
    {
        return ComplexNumber(this->real + c.real, this->imag + c.imag);
    }

    int getReal()
    {
        return this->real;
    }
    int getImag()
    {
        return this->imag;
    }
};

void useComplexNumber()
{
    ComplexNumber c1(2,3), c2(3,3), c3(0,0);
    c3 = c1.operator+(c2);
    cout << c3.getReal() << " " <<  c3.getImag() << endl;
}
*/

//Example 3, overloading the = sign.
class Person
{
private:
    int id;
    char* name;
public:
    Person(int id, const char *name)
    {
        int length = strlen(name) + 1;
        this->name = new char[length];
        strcpy(this->name,name);
        this->id = id;
    }

    Person(const Person& p) // Copy constructor
    {
        int length = strlen(p.name) + 1;
        this->name = new char[length];
        strcpy(this->name,p.name);
        this->id = p.id;
    }

    const char *getName()
    {
        return this->name;
    }

    int getId()
    {
        return this->id;
    }

    void changeFirstLetter(char c)
    {
        name[0] = c;
    }

    ~Person()
    {
        cout << "Entered in the constructor " << this->name << endl;
        delete[]name;
        name = NULL;
    }
};

void usingPerson()
{

    Person p2(8,"Socorro");
    Person p1(p2); // Copying, it could also be passed as p1 = p2
    p1.changeFirstLetter('b');
    cout << "Name: " << p1.getName() << endl << "Id: " << p1.getId() << endl << endl;
    cout << "Name: " << p2.getName() << endl << "Id: " << p2.getId() << endl << endl;
}

int main()
{
    usingPerson();
    return 0;
}
