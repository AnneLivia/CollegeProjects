#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Person
{
    friend class Bank;
protected:
    int age;
    char name[100];
};

class Bank{

public:
    double money;
    int password;
    Person access;

    double deposit(double money)
    {
        if(money > 0)
            this->money = money + this->money;
        return this->money;
    }

    double withDraw(double money)
    {
        if(money > 0 && this->money >= money)
            this->money -=money;
        return this->money;
    }

    void setName(char name[])
    {
        strcpy(access.name, name);
    }

    const char * getName()
    {
        return access.name;
    }

    void setAge(int age)
    {
        access.age = age;
    }

    int getAge()
    {
        return access.age;
    }
};

Bank * OpenAccount(int password)
{
    Bank *c = (Bank *)malloc(sizeof(Bank));
    if(c != NULL)
    {
        c->password = password;
        c->money = 0;
    }
    else
    {
        cout << "Error on open account." << endl;
        exit(1);
    }
    return c;
}


int main()
{
    char name[100];
    int age;
    double money;

    Bank *account = OpenAccount(1997);
    cout << "What is your name ?" << endl;
    cin.getline(name,100);
    account->setName(name);
    cout << "What is your age ? " << endl;
    cin >> age;
    account->setAge(age);
    cout << "The current status of your account." << endl;
    cout << "Name: " << account->getName() << endl;
    cout << "Age: " << account->getAge() << endl;
    cout << "Bank balance: " << account->money << endl;
    cout << "How much do you want to deposit ?" << endl;
    cin >> money;
    account->deposit(money);
    system("cls");
    cout << "Your account updated\n" << endl;
    cout << "Name: " << account->getName() << endl;
    cout << "Age: " << account->getAge() << endl;
    cout << "Bank balance: " << account->money << endl;
    cout << "How much do you want to withdraw ?" << endl;
    cin >> money;
    if(account->withDraw(money))
    {
        system("cls");
        cout << "Your account updated\n" << endl;
        cout << "Name: " << account->getName() << endl;
        cout << "Age: " << account->getAge() << endl;
        cout << "Bank balance: " << account->money << endl;
    }else
        cout << "Error when tried to withdraw." << endl;


    free(account);
    return 0;
}
