#include <iostream>
#include <cstdlib>

using namespace std;

int function_int_ca(int a, int b) {
    return a + b;
}

int function_int_sa() {
    return 10;
}

void multiply(int a, int b) {
    cout << "Multiplication: " << a * b << endl;
}

void add(int a, int b) {
    cout << "Addition: " << a + b << endl;
}

void subtract(int a, int b) {
    cout << "Subtraction: " << a - b << endl;
}

void divide(int a, int b) {
    cout << "Division: " << a / b << endl;
}

void foo1() {
    cout << "Foo 1\n";
}

void foo2() {
    cout << "Foo 2\n";
}

// A function pointer can be passed as an argument to a function
void wrapper(void (*foo)()) {
    foo();
}

// Creating a compare function that is used for searching an integer in a array
bool compare(const void *a, const void *b) {
    return (*(int *)a == *(int *)b);
}

//  Creating function to search an specific element X, in a array arr[] of arr_size
//  Note that void pointers are used so that the function can be called by passing a pointer of any type
//  element_size is size of an array element
int search_element(void *arr, int arr_size, int element_size, void *x, bool compare(const void*, const void *)) {
    // Char takes 1 byte, so we can use char pointer for any type
    // to get pointer arithmetic correct we need to multiply index with size of an array
    char *ptr = (char *)arr;
    for (int i = 0; i < arr_size; i++) {
        cout << *(int*)(ptr + i * element_size) << endl;
        if(compare(ptr + i * element_size, x))
            return i;
    }
    return -1;
}

int main()
{
    int (*ptrv) (int, int) = function_int_ca;
    // int * ptrv (int, int) = function that return pointer to int, so that we must use () to specify that we are dealing with pointers to function
    //int (*ptrv) (int, int) = &function_int_ca;
    // ptrv = function_int_sa; // Error because this function returns void and doesn't receive two int as arguments

    // The function can be invoked
    // cout << ptrv(2,3) << endl;
    // cout << (*ptrv)(2,3) << endl;

    // Creating array of pointers to function
    void (*ptr_function[])(int, int) = {add, subtract, multiply, divide};
    //void (*ptr_function[4])(int, int);
    //ptr_function[0] = add;
    //ptr_function[1] = &subtract;
    //ptr_function[2] = &multiply;
    //ptr_function[3] = &divide;

    int a, b, op;
    cout << "Enter a and b respectively: ";
    cin >> a >> b;
    cout << "Enter the operation from 0 to 3: \n(0 - add, 1 - subtract, 2 - multiply and 3 - divide)\nEnter here: ";
    cin >> op;

    if(op <= 3)
        ptr_function[op](a, b);
    else
        cout << "Wrong option.\n";

    wrapper(foo1);
    wrapper(foo2);

    int vet[] = {10,5,15,12,90,80};

    qsort(vet, sizeof(vet)/sizeof(vet[0]), sizeof(int), [](const void *a, const void *b) { return ( *(int*)a - *(int *)b );});

    for(auto i : vet)
        cout << i << " ";
    cout << endl;

    int arr[] = {2, 5, 7, 90, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7; // Number I want to find
    cout << "Return index is: " << search_element(arr, n, sizeof(int), &x, compare) << endl;
    return 0;
}
