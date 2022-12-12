#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int getWhatYouWant();
void displayItems(int x);

//Main() Function
int main()
{
    int whatYouWant = getWhatYouWant();
    while(whatYouWant != 4)
    {
        system("cls");
        displayItems(whatYouWant);
        system("pause");
        system("cls");
        whatYouWant = getWhatYouWant();
    }
    return 0;
}

//getWhatYouWant() function
int getWhatYouWant()
{
    int choice;
    cout << "1 - Just Plain items\n";
    cout << "2 - Helpful items\n";
    cout << "3 - Harmful items\n";
    cout << "4 - Quit program\n";
    cout << "Type here: ";
    cin >> choice;
    return choice;
}

//displayItems() function
void displayItems(int x)
{
    ifstream objectFile("items.txt");
    string name;
    int power, cont = 0;
    if(x == 1 || x == 2 || x == 3){
        while(objectFile >> name >> power)
        {

            if(power == 0 && x == 1){
                if(cont == 0)
                    cout << "Showing plain items\n";
                cont = 1;
                cout << name << " " << power << endl;
            }else if(power > 0 && x == 2){
                if(cont == 0)
                    cout << "Showing helpful items\n";
                cont = 1;
                cout << name << " " << power << endl;
            }else if(power < 0 && x == 3){
                if(cont == 0)
                    cout << "Showing harmful items\n";
                cont = 1;
                cout << name << " " << power << endl;
            }
        }
    }
}
