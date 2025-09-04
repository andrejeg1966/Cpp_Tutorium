// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//The C++ Standard Template Library (STL) is a set of template classes and functions that provides the implementation 
// of common data structures and algorithms such as lists, stacks, arrays, sorting, searching, etc. 
// It also provides the iterators and functors which makes it easier to work with algorithms and containers.

// CPP program to demonstrate working of array
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main() {

    // construction uses aggregate initialization
    // double-braces required
    array <char, 3> arr = { 'G','f','G' };
    array<int, 5> ar1{ {3, 4, 5, 1, 2} };
    array<int, 5> ar2 = { 1, 2, 3, 4, 5 };
    array<string, 2> ar3 = { {string("a"), "b"} };
    array <char, 3> arr4 = { 'M','M','P' }; // ASCII val of 'M' = 77 and 'P' = 80
    array <int, 10> arr10;
    const char* str = "GeeksforGeeks";
    array<char, 13> arr5;
    memcpy(arr5.data(), str, 13);
    cout << arr5.data() << '\n';
    cout << endl;
    cout << arr[0] << " " << arr[2];
    cout << endl;
    cout << arr.front() << " " << arr.back();
   
    bool x = arr.empty(); // false ( not empty)
    cout << endl;
    cout << boolalpha << (x);

    arr.swap(arr4);  // now arr = {M,M,P}
    cout << endl;

    cout << arr10.size() << '\n'; // total num of indexes
    cout << endl;
    cout << arr10.max_size() << '\n'; // total num of indexes
    cout << endl;
    cout << sizeof(arr10); // total size of array
    cout << endl;

    cout << "Sizes of arrays are" << endl;
    cout << ar1.size() << endl;
    cout << ar2.size() << endl;
    cout << ar3.size() << endl;
   
    cout << "\narr after swap: ";
    for (auto i : arr)
        cout << i << ' ';
    
    cout << "\nInitial ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';

    // container operations are supported
    sort(ar1.begin(), ar1.end());

    cout << "\nsorted ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';
    // Filling ar2 with 10
    ar2.fill(10);
    cout << endl;
    cout << "\nFilled ar2 : ";
    for (auto i : ar2)
        cout << i << ' ';


    // ranged for loop is supported
    cout << endl;
    cout << "\nar3 : ";
    for (auto& s : ar3)
        cout << s << ' ';

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
