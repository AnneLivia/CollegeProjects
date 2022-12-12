#include <iostream>
#include <list>

using namespace std;

// List é duplamente encadeada, ela tem ponteiro para o valor anterior e o próximo.

bool evenNumber(const int& n)
{
        return (n % 2 == 0);
}

bool compare_size(const string &s1, const string &s2)
{
    return (s1.size() < s2.size()); // if the size of the first function comes first that it returns true....
}

int main()
{
    list<int>l1;
    list <int> l2(3,10); // list with 3 integers with value 10 assigned.
    list <int>::iterator it; // Iterator to run the list

    l1.push_back(2);  // insert at the final of the list;
    l1.push_front(1); // insert at the beginning of the list;
    l1.push_back(3);

    cout << "Showing elements of l1 list: " << endl;


    for ( it = l1.begin(); it != l1.end() ; it++) // it must be different because this list is not contiguous on the memory as the vector
    {
        cout << *it << "  ";
    }

    cout << "\n\nShowing elements of l2 list: " << endl;

    for ( it = l2.begin(); it != l2.end() ; it++) // it must be different because this list is not contiguous on the memory as the vector
    {
        cout << *it << "  ";
    }


    cout << "\n\n";

    cout << "First element of l1: " << l1.front() << endl;
    cout << "Last element of l1: " << l1.back() << endl;
    cout << "Size of l1: " << l1.size() << endl;

    // Deleting the first element of l1.
    l1.pop_front();
    // Deleting the last element of l1.
    l1.pop_back();

    cout << "\n\nShowing elements of l1 list: " << endl;


    for ( it = l1.begin(); it != l1.end() ; it++) // it must be different because this list is not contiguous on the memory as the vector
    {
        cout << *it << "  ";
    }

    cout << "\n\n";

    cout << "First element of l1: " << l1.front() << endl;
    cout << "Last element of l1: " << l1.back() << endl;
    cout << "Size of l1: " << l1.size() << endl;

    // Removing all the elements of l2

    while(!l2.empty()) // while it is not empty
        l2.pop_front(); // deleting elements from the front, ps: it could be pop_back too

    cout << "Size of l2 after make pop in it: " << l2.size() << endl << endl;


    // Assign elements to l2.

    int vet[] = {1,2,3,4};
    l2.assign(vet,vet + 4); // from 0 to the address 3 of the vet, the values are going to be assigned to the list.

    cout << "\n\nShowing elements of l2 list: " << endl;

    for (it = l2.begin() ; it != l2.end() ; it++)
    {
        cout << *it << endl;
    }

    cout << "\n\n";

    l2.insert(l2.begin(),100); // it's going to be inserted the value 100 as the first element of the list and then the others numbers are going to be to another place
    // you could not do this l2.begin + 1 as is done on the vector, because this is not contiguous.
    // but you can do this as follows to insert an element at the second place:

    it = l2.begin();
    it++;
    l2.insert(it,800);
     cout << "\n\n\nShowing elements of l2 list: \n" << endl;

    for (it = l2.begin() ; it != l2.end() ; it++)
    {
        cout << *it << endl;
    }

    cout << "\n\n";

    // inserting two times the value 50 at the first element of l2

    l2.insert(l2.begin(),2,50);

    cout << "\n\n\nShowing elements of l2 list: \n" << endl;

    for (it = l2.begin() ; it != l2.end() ; it++)
    {
        cout << *it << endl;
    }

    cout << "\n\n";

    // Erasing the two first numbers

    list<int>::iterator it2 = l2.begin();

    it2++;
    it2++;

    l2.erase(l2.begin(),it2); // from the first element to the third because it has a range open as an array

     cout << "\n\n\nShowing elements of l2 list: \n" << endl;

    for (it = l2.begin() ; it != l2.end() ; it++)
    {
        cout << *it << endl;
    }

    cout << "\n\n";

    l2.clear(); // clean all the values.

    cout << "Size of l2 after clear function being used: " << l2.size() << endl << endl;

    //function splice transfer elements from one list to other;
    list<int>list1(2,10), list2(2,20); // creating two list one that contains two times the value 10....
    it = list1.begin();
    // transfers elements from list1 to list2
    list1.splice(it,list2); // it takes the begin of list1 and the second argument most be list2
    // After transfered all the elements of list2 to list1, the list2 is going to be empty

    cout << "\n\n\nShowing elements of list1 list: \n" << endl;

    for (it = list1.begin() ; it != list1.end() ; it++)
    {
        cout << *it << endl;
    }

    cout << "\n\nSize of list 2: " << list2.size() << endl << endl;

    // using the function remove, we can remove many value like, all the values 10, 20, and so on, look bellow:

    list1.remove(20); // It's going to be removed all the 20 numbers, hence, it's going to be inside the list only the number 10;

    cout << "\n\n\nShowing elements of list1 without the value 20: \n" << endl;

    for (it = list1.begin() ; it != list1.end() ; it++)
    {
        cout << *it << endl;
    }

    int vet2[] = {1,5,4,2,2,4};
    list <int> list3(vet2,vet2 + 6); // inserting elements from the vet2 into the list3
    cout << "\n\n\nShowing elements of list3 before removing elements with \"remove_if\": \n" << endl;
    for ( it = list3.begin(); it != list3.end() ;  it++)
    {
        cout << *it << "    " << endl;
    }

    // Remove_if
    // Removing all the even elements, with remove_if that must have a condition


    list3.remove_if(evenNumber); // using function that return boolean type, true it is even.....

    cout << "\n\n";

    cout << "\n\n\nShowing elements of list3 after removing elements with \"remove_if\": \n" << endl;
    for ( it = list3.begin(); it != list3.end() ;  it++)
    {
        cout << *it << "    " << endl;
    }

    // Sorting list;

    int vet3[] = {20,121,11,2,3212,1,34};
    list<int>list4(vet3,vet3+7);
    cout << "\n\n\nShowing elements of list4 sorted growing way: \n" << endl;
    list4.sort(); // function to sort elements of a list. you can sorting string, and so on.

    for ( it = list4.begin(); it != list4.end() ;  it++)
    {
        cout << *it << "    " << endl;
    }



    list <string> listString; // Creating a list of type string
    list<string>::iterator itString;
    listString.push_back("C++");
    listString.push_back("Phyton");
    listString.push_back("Haskell");
    listString.push_back("Ruby"); // inserting elements in the list

    listString.sort(); // sorting elements according to letters I think;

    cout << "\n\nShowing elements of the string list sorted: \n\n";
    for(itString = listString.begin(); itString != listString.end(); itString++)
        cout << *itString << endl;

    // We also have the function sort passing a condition.......... let's say that we want to sort according to size:
    // we need first to create a function that returns true if one letter is greater in size or not.

    listString.sort(compare_size);
    cout << "\n\nShowing elements of the string list sorted according to size: \n\n";
    for(itString = listString.begin(); itString != listString.end(); itString++)
        cout << *itString << endl;
    return 0;
}
