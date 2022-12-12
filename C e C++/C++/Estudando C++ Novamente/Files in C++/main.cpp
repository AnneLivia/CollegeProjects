#include <iostream>
#include <fstream>

/**
    include fstream to use file function, classes, and so on.
    create a object of type, ofstream.
    ifstream = read.
    ofstream  = write
    when create, we can use the functions from it, the basics one, are:
    objectName.open(name_of_file.txt); this is used to open it.
    objectName.close(); this is used to close the file.
    when opened, we are going to treat the object as the file that was opened.
    Ctrl + z. this marks the end of file.

*/
using namespace std;

int main()
{
    // Shortcut: ofstream myFile("testeFile.txt"); // this is a constructor and this is optional.

    /*ofstream myFile;
    myFile.open("testeFile.txt");

    if(myFile.is_open())
        cout << "Your file is associate with the file name\n";
    else
        cout << "Error\n";

   // myFile << "This is how I can write on my file, much better than C.\n";
   // myFile << "I love it\n\n";
   */

   struct Character
   {
       int attack, power, defense;
       string name;
   };
   /*
   ofstream myGame("chrono.txt");
   if(myGame.is_open())
   {
       Character ch;

       cout << "Type the name, attack, power and defense of the character: \n";
       cout << "Press ctrl + z to finish.\n";
       while(cin >> ch.name >> ch.attack >> ch.power >> ch.defense) // When reached the ctrl + z thing, this is going to stop run
       {
           myGame << ch.name << ' ' << ch.attack << ' ' << ch.power << ' ' << ch.defense << endl; // I'm inserting here, the information inside the function.
       }
       myGame.close();
   }else
   {
       cout << "Error\n";
   }

   */

    ifstream myFile("chrono.txt");
    if(myFile.is_open())
    {
        Character ch;
        cout << "Name Attack Power Defense \n\n";
        while(myFile >> ch.name >> ch.attack >> ch.power >> ch.defense)
        {
           cout << ch.name << "   " << ch.attack << "   " << ch.power << "   " << ch.defense << endl;
        }
    }
    else
    {
        cout << "Error.\n";
    }
    return 0;
}
