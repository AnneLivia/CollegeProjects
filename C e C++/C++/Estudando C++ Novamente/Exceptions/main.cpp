#include <iostream>

using namespace std;

/**
    Try{} - try to do some lines of code
    thrown - if there's error, this is going to throw it to the function catch().
    catch(){} - if there's errors, then, this function is going to take it.

    catch(...){} - If any errors occurs, this is going to take it.
*/
int main()
{
    /*
    //BASIC EXEMPLE OF EXCEPTION.

    try{
        int ageMom = 10;
        int ageSon = 20;

        if(ageMom < ageSon)
        {
            throw 99;
        }
    }catch(int x)
    {
        cout << "Mom age is less than Son age, Error: " << x << endl;
    }
    */

    /*

    //Another example where we try to divide by 0;
    try{
        float n1, n2;
        cout << "Type number one: ";
        cin >> n1;
        cout << "Type number two: ";
        cin >> n2;
        if(n2 == 0)
            throw 0;
        cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
    }catch(int err)
    {
        cerr << "Division by 0. Error: " << err << endl;
    }
    */


    return 0;
}
