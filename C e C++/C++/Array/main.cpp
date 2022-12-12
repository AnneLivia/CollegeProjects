#include <iostream>
#include <array>
#include <cstdio>

using namespace std;

int main()
{
    array<int, 10>arr;

    arr.fill(10);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << endl;
    }

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        div_t result = div(arr[i], 2);
        cout << arr[i] << " / " << 2 << "\nQuote: " << result.quot << " Remainder: " << result.rem << endl;
    }

    cout << "Size of array: " << arr.size() << endl;
    if(arr.empty())
        cout << "Empty\n";
    else
        cout << "No empty\n";


    cout << "Front: " << arr.front() << "\n" << "Back: " << arr.back() << endl;

    array<int,10>::iterator itarr;

    for(itarr = arr.begin(); itarr != arr.end(); itarr++) {
        cout << *itarr << " " << endl;
    }

    cout << "Max size of array: " << arr.max_size() << endl;
    array<int,10>other = {1,2,3,4,5,6,7,8,9,10};

    arr.swap(other);

    for(auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
