#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;
// Queue (First in, First Out)

int main()
{
    int personId, option;
    queue<int>marketQueue;

    while(true) {
        cout << "0 - Machine is broken\n";
        cout << "1 - Someone has come to the queue\n";
        cout << "2 - The attender is going to attend someone\n";
        cout << "Type the option: ";
        cin >> option;
        if(option == 0)
            break;
        else if (option == 1) {
            cout << "What is his or her id ? \n";
            cout << "Type here: ";
            cin >> personId; // Getting the id of the person who got to the queue
            marketQueue.push(personId); // Putting that person to the queue
        } else if (option == 2) {
            if(!marketQueue.empty()) {
                // If the queue is not empty, it means that there is someone on the queue
                marketQueue.pop(); // Using the method pop to remove that "person" from the queue
            }
        }
        system("cls");
    }
    // When typed 0, the machine has broken
    while(!marketQueue.empty()) {
        cout << "People who was not attended:\n";
        cout <<  marketQueue.front() << endl;
        marketQueue.pop();
    }

    return 0;
}
