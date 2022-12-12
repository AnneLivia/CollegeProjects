#include <iostream>

using namespace std;

class Animal{ // Abstract class
protected:
    string name;
public:
    Animal(string n) : name(n) {cout << "Hello, I'm " << this->name << " and I'm here on the constructor\n";};
    Animal(const Animal &a) : name(a.name){ cout << "Hello, I'm " << this->name << " and I'm here on the constructor copy\n";};
    void setName(string n){this->name = n;}
    string getName(){return this->name;}
    virtual void speak  () const = 0; // Pure virtual function
};

class Dog : public Animal{
public:
    Dog(string n) : Animal(n){};
    Dog(const Dog &d) : Animal(d){};
    void speak() const {cout << "Auauau I'm " << this->name << endl;}
};

class Cat : public Animal{
public:
    Cat(string n) : Animal(n){};
    Cat(const Cat &c) : Animal(c){};
    void speak() const {cout << "Meeeooww I'm " << this->name << endl;}
};

void printSpeak(Animal *p)
{
    p->speak();
}

int main()
{
    // Dog Section

    Dog spike("Spike"), bolt("Bolt");
    printSpeak(&bolt); printSpeak(&spike);

    Dog copyBolt = bolt;
    printSpeak(&copyBolt);
    copyBolt.setName("Copy Bolt");
    printSpeak(&copyBolt);

    // Cat Section

    Cat shanin("Shanin");
    Cat copyShanin = shanin;
    printSpeak(&copyShanin); printSpeak(&shanin);
    return 0;
}
