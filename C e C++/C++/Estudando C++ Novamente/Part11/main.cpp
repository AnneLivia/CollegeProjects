#include <iostream>

using namespace std;

class Monster // Abstract class
{
public:
    virtual void attack() = 0; // Pure virtual function
};

class Dragon : public Monster
{
public:
    void attack()
    {
        cout << "The Dragon has attacked.\n";
    }
};

class Groomie : public Monster
{
public:
    void attack()
    {
        cout << "The Grommie has attacked.\n";
    }
};

int main()
{
    Groomie g;
    Dragon d;
    Groomie *pG = &g;
    Dragon *pD = &d;

    pG->attack();
    pD->attack();
    return 0;
}
