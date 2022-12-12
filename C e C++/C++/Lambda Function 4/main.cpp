#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int fat(int n) {
    if(n <= 1)
        return 1;
    else
        return n * fat(n - 1);
}

int main()
{

    /*
        The capture list [] is used to make local scope variables
        available to the lambda functions without passing them
        explicitly inside the parameter argument lists.
        The local scope variables can be made available either
        by value (i.e a copy) or by reference. To pass a value,
        we need to specify local scope variables in the capture list.
        Only variables mentioned in the capture list shall be made
        available to the lambda function.
    */

    [](){
        cout << "Hello World\n";
    }(); // Calling the anonymous function by appending();

    int maior = [](int x, int y) -> int {
        return x > y? x : y;
    }(10,5);

    // std::function Instâncias de std::function can store, copy or invoke any function, lambda expressions, bind expressions? or others functions object. similar to a function pointer
    // We can use C++ auto keyword, or use std::function<>template to hold the functions
    // we can also use C style function pointer int(*lambdaFn)(int) for the same, but is generally avoided because of complicated syntax (read Pointers).
    // Result is the reference to the function
    std::function<bool(int,int)> result = [](int x, int y) -> bool {
        return x > y;
    };

    int v = result(33,55);

    // lambda for f(x) = x * x;
    function<int(int)> fx = [](int x) -> int {
        return x * x;
    };

    int valuefx = fx(5);

    // lambda for f(x,y) = x * x + y * y + 2 * x * y
    function<int(int,int)> fx2 = [](int x, int y) {
        return (x * x) + (y * y) + (2 * x * y);
    };

    int valuefx2 = fx2(22,55);

    /*
    int greaterValue = [valuefx, valuefx2]() -> int {
        return valuefx > valuefx2 ? valuefx : valuefx2;
    }();
    */

    /*
        or we can use = in capture list, which means all local
        scope variables are available inside the lambda functions
        this is a pass by value way
        Pass by value parameters are immutable i.e.
        we can’t change the value of them
    */

    int greaterValue = [=]() -> int {
        return valuefx > valuefx2 ? valuefx : valuefx2;
    }();

    /*
        You might have understood that this is done in
        lambda to enable functional programming immutability,
        but we can still use C++ reference & mechanism to pass
        local scope variable by reference and change the values.
        These changes shall be reflected globally.
    */

    [&]() {
        greaterValue++;
    }();

    int x = 5, y = 13;

    function<int(void)> square = [x,y] () -> int {
        int xValue = [](int x) -> int {return x * x;}(x);
        int yValue = [y]() -> int {return y * y;}();
        int xy2 = [](int x, int y) -> int { return 2 * x * y;}(x,y);

        return xValue + yValue + xy2;
    };

    int va = square();

    cout.setf(ios::boolalpha);
    cout << "Result: " << result(10, 2) << endl;
    cout << "Maior: " << maior << endl;
    cout << "fx: " << valuefx << endl;
    cout << "fx2: " << valuefx2 << endl;
    cout << "Grater: " << greaterValue << endl;
    cout << "v: " << va << endl;

    return 0;
}
