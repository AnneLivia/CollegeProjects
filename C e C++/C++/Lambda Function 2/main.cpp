#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

vector<int> GenerateRandVec(int numberOfnums, int minimum, int maximum);
class Sort {
private:
    int part(vector<int>&v, const int& low, const int& high);
public:
    void quickSort(vector<int>& v, const int& low, const int& high);
};

int Sort::part(vector<int>&v, const int& low, const int& high) {
    int left = low, right = high;
    int pivot = v[high];
    int j = left - 1;
    for (int i = left; i <= right - 1; i++) {
        if(v[i] < pivot) {
            std::swap(v[++j], v[i]);
        }
    }

    std::swap(v[++j], v[high]);
    return j;
}

void Sort::quickSort(vector<int>&v, const int& low, const int& high) {
    if(low < high) {
        int pivot = part(v, low, high);
        quickSort(v, low, pivot - 1);
        quickSort(v, pivot + 1, high);
    }
}

int main()
{
    vector<int>v = GenerateRandVec(10, 1, 50);

    //Sort s;
    //s.quickSort(v, 0, v.size() - 1);

    std::sort(v.begin(), v.end(), [](int x, int y) { return x < y;});

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>even;

    std::copy_if(v.begin(), v.end(), std::back_inserter(even), [](int x) { return x % 2 == 0;});
    cout << "Only even number from vector above: \n";
    for (int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    int sum = 0;
    std::for_each(v.begin(), v.end(), [&](int x){sum+=x;}); // This & is to specify that all body functions can be used by reference
    cout << "The sum is: " << sum << endl;

    int divisor;
    vector<int>vec2;
    cout << "What is the number: ";
    cin >> divisor;

    std::copy_if(v.begin(), v.end(), std::back_inserter(vec2), [divisor](int x) { return x % divisor == 0;});

    cout << "Generated with divisor: " << divisor << endl;
    for(auto i : vec2)
        cout << i << " ";
    cout << endl;

    vector<double>doubleVec;
    std::for_each(v.begin(), v.end(),[&](int x){doubleVec.push_back(x * 2);});

    for(auto i : doubleVec)
        cout << i << " ";
    cout << endl;
    return 0;
}

vector<int> GenerateRandVec(int numberOfNums, int minimum, int maximum) {
    srand(time(nullptr));
    vector<int>v;
    for (int i = 0; i < numberOfNums; i++) {
        v.push_back(minimum + std::rand() % (maximum + 1) - minimum);
    }
    return v;
}
