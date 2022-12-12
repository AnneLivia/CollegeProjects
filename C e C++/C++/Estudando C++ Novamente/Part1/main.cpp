#include <iostream>
#include <stdio.h>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Pet{

protected:
    string name;
    int age;

public:
    Pet(int age, string name)
    {
            this->age = age;
            this->name = name;
    }
    Pet()
    {
            this->age = 0;
            this->name = " ";
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName() const
    {
        return this->name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge() const
    {
        return this->age;
    }
};


class Dog : public Pet{

public:
    Dog(int age, string name) : Pet( age , name){}
    Dog() : Pet(){}
    void bark()
    {
        cout << "Auau! my name is " << this->getName() << " and I am " << this->getAge() << " years old." << endl;
    }
};

class Cat : public Pet {

public:
    Cat(int age, string name) : Pet(age,name){}
    Cat() : Pet() {}
    void meow()
    {
        cout << "meow! my name is " << this->getName() << " and I am " << this->getAge() << " years old." << endl;
    }
};

int main(int argc, char *argv[])
{

   Dog spike(2,"Spike");
   Cat shanin(1,"Shanin");

   shanin.meow();
   spike.bark();
   return 0;
}
