#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

class Animal{
protected:
    string name;
    int paws;

public:
    Animal(string name, int paws){
        this->name = name;
        this->paws = paws;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    void setPaws(int paws)
    {
        this->paws = paws;
    }

    int getPaws()
    {
        return this->paws;
    }

    virtual void sound()
    {
        cout << "Hi my name is " << this->name << " UHUHUHUHUUH" << endl;
    }
};

class Dog : public Animal{

public:
    Dog(string name, int paws) : Animal(name,paws) {}

    virtual void sound()
    {
        cout << "Hi my name is " << this->name << " AUAUAUAUAUAU" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string name, int paws) : Animal(name,paws){}
    virtual void sound()
    {
        cout << "Hi my name is " << this->name << " Miooown" << endl;
    }
};

void soundAnimal(Animal& a)
{
    a.sound();
}
void add(int a = 1, int b = 2, int c = 2)
{
    cout << a <<" + "<< b << " + " << c <<" = "<< a+b+c << endl;
}

int main()
{
    Dog spike("Spike",4);
    Cat shanin("Shanin",4);

    soundAnimal(shanin);

    srand(time(0));

    for (int  i =  1 ;  i < 24 ; i++ )
    {
            cout << 1 + (rand() % 6) << endl;
    }
    return 0;
}
