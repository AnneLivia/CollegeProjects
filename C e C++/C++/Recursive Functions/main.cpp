#include <iostream>

using namespace std;

/*
    2, 4, 2, 6

    4 v[3] 6
    3 v[2] 4
    2 v[1] 4
    1 v[0] 2
*/
int maxNumb(int n, int v[]) {
    if(n == 1) // If or/and when the size of the array reaches this point, the function will return all stack calls
        return v[0]; // return to the last one called the first element of the array
    else {
       int x = maxNumb(n - 1, v); // Here is the call to the function until it finds the first element of the array
       if(x > v[n - 1]) // When found, check if the element returned is greater than the actual element
        return x; // return x to the function itself or main function
       else
        return v[n - 1]; // Return the actual element, because this is the bigger element in it.
    }
}

int main()
{
    int vet[4] = {2,4,2,6};
    int x = maxNumb(4,vet);
    cout << x << endl;
    return 0;
}
