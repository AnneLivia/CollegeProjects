#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

template <class T>
class Calculator{
    T *numbers;
public:
    Calculator();
    ~Calculator();
    void setNumbers(T n1, T n2);
    void setJustN1(T num);
    void setJustN2(T num);
    T getNumber1();
    T getNumber2();
    T sumNumbers();
    T multNumbers();
    T divNumbers();
    T subtNumbers();
};

template <class T>
Calculator<T>::Calculator()
{
    numbers = new T[2];
}

template <class T>
Calculator<T>::~Calculator()
{
    delete[] numbers;
}

template <class T>
void Calculator<T>::setNumbers(T n1, T n2)
{
    numbers[0] = n1;
    numbers[1] = n2;
}

template <class T>
void Calculator<T>::setJustN1(T num)
{
    numbers[0] = num;
}

template <class T>
void Calculator<T>::setJustN2(T num)
{
    numbers[1] = num;
}

template <class T>
T Calculator<T>::getNumber1()
{
    return numbers[0];
}

template <class T>
T Calculator<T>::getNumber2()
{
    return numbers[1];
}

template <class T>
T Calculator<T>::sumNumbers()
{
    return (numbers[0] + numbers[1]);
}

template <class T>
T Calculator<T>::multNumbers()
{
    return numbers[0] * numbers[1];
}

template <class T>
T Calculator<T>::divNumbers()
{
    return numbers[0] / numbers[1];
}
template <class T>
T Calculator<T>::subtNumbers()
{
    return numbers[0] - numbers[1];
}

int menu();
void addNumbers(Calculator <float> &cal);
void mensage();
int menuOperation(Calculator <float> cal);
void realizeOperation(int option, Calculator<float> &cal);
int menuOverWritten(Calculator <float> cal);
void overWritten(Calculator <float> &cal);
void showNumbers(Calculator <float> cal);
int seeNumbers();
void warning();

int main()
{
    Calculator <float> c;
    int stop = 1, overW;
    bool isThereN = false;
    do{
        switch(menu())
        {
            case 1 : if(!isThereN){
                       addNumbers(c);
                       isThereN = true;
                     }
                     else if(isThereN){
                        overW = menuOverWritten(c);
                        if(overW == 1)
                            overWritten(c);
                     }
                     break;
            case 2 : if(!isThereN)
                        warning();
                     else{
                        showNumbers(c);
                        system("pause");
                        system("cls");
                     }
                     break;
            case 3 : if(!isThereN){
                        warning();
                        break;
                     }
                     realizeOperation(menuOperation(c),c);
                     break;
            case 4 : mensage();
                     cout << "\nFinalizing calculator...\n";
                     cout << "Thanks for using it\n\n";
                     system("pause");
                     stop = 0;
                     break;
            default : cout << "Wrong option\n";
        }
    }while(stop);
    system("cls");
    cout << "Bye, see you later.\n";
    return 0;
}

void mensage()
{
    cout << "------------------------------------------------- C A L C U L A T O R --------------------------------------------------\n";
}
int menu()
{
    mensage();
    int option;
    cout << "1 - Add Numbers\n";
    cout << "2 - Show Numbers\n";
    cout << "3 - Operation\n";
    cout << "4 - Quit\n";
    cout << "Type here: ";
    cin >> option;
    system("cls");
    return option;

}

void addNumbers(Calculator <float> &cal)
{
    mensage();
    float n1, n2;
    cout << "Type First Number: ";
    cin >> n1;
    cout << "Type Second Number: ";
    cin >> n2;
    cal.setNumbers(n1,n2);
    system("cls");
}

int menuOperation(Calculator <float> cal)
{
    mensage();
    int option;
    if(seeNumbers() == 1)
        showNumbers(cal);

    cout << "1 - Sum\n";
    cout << "2 - Subtraction\n";
    cout << "3 - Multiplication\n";
    cout << "4 - Division\n";
    cout << "5 - Menu\n";
    cout << "Type here: ";
    cin >> option;
    system("cls");
    return option;
}

void realizeOperation(int option, Calculator <float> &cal)
{
    mensage();
    switch(option)
    {
        case 1 : cout << "SUM:\n";
                 cout << cal.getNumber1() << " + " << cal.getNumber2() << " = " << cal.sumNumbers() << endl;
                 break;
        case 2 : cout << "SUBTRACTION:\n";
                 cout << cal.getNumber1() << " - " << cal.getNumber2() << " = " << cal.subtNumbers() << endl;
                 break;
        case 3 : cout << "MULTIPLICATION:\n";
                 cout << cal.getNumber1() << " x " << cal.getNumber2() << " = " << cal.multNumbers() << endl;
                 break;
        case 4 : cout << "DIVISION:\n";
                 cout << cal.getNumber1() << " / " << cal.getNumber2() << " = " << cal.divNumbers() << endl;
                 break;
        case 5 : cout << "Returning to main menu...\n";
                 break;
        default : cout << "Wrong option\n";
    }
    system("pause");
    system("cls");
}

int menuOverWritten(Calculator <float> cal)
{
    mensage();
    int option;
    cout << "Your calculator already has numbers stored\n\n";
    cout << "Do you want to overwritten it ?\n" << "1 - Yes\n" << "2 = No\n";
    cout << "Type here: ";
    cin >> option;
    system("cls");
    return option;
}

void overWritten(Calculator <float> &cal)
{
    int option;
    float num;
    mensage();
    if(seeNumbers() == 1)
        showNumbers(cal);
    cout << "1 - Overwritten the two numbers\n";
    cout << "2 - Overwritten just number one\n";
    cout << "3 - Overwritten just number two\n";
    cout << "4 - Menu\n\n";
    cout << "Type here: ";
    cin >> option;
    system("cls");
    switch(option)
    {
        case 1 : addNumbers(cal);
                 break;
        case 2 : cout << "Type First Number: ";
                 cin >> num;
                 cal.setJustN1(num);
                 break;
        case 3 : cout << "Type Second Number: ";
                 cin >> num;
                 cal.setJustN2(num);
        case 4 : cout << "Returning to menu...\n";
                 system("pause");
                 break;
        default : "Wrong option.\n";
    }
    system("cls");
}

void showNumbers(Calculator <float> cal)
{
    cout << "Numbers: \n";
    cout << ">> " << cal.getNumber1() << endl;
    cout << ">> " << cal.getNumber2() << endl;
    cout << "\n";
}

int seeNumbers()
{
    int seeNumber;
    cout << "Do you want to see the numbers ?\n";
    cout << "1 - Yes\n" << "2 - No\n" << "Type here: ";
    cin >> seeNumber;
    system("cls");
    return seeNumber;
}

void warning()
{
    cout << "You still don't have numbers stored in your database.\n\n";
    system("pause");
    system("cls");
}
