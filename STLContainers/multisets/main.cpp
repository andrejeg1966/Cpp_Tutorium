// multisets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Multiset is an associative container similar to the set, but it can store multiple elements with same value. 
// It is sorted in increasing order by default, but it can be changed to any desired order.

#include <iostream>
#include <set>
using namespace std;


int main() {
    cout << "multiset: " << endl;
    // Creating an empty set of integers
    multiset<int> ms1;

    // Initialize with initializer list
    multiset<int> ms2 = { 5, 3, 3, 1 };

    for (auto i : ms2)
        cout << i << " ";

    cout << "\nInserting elements: " << endl;
    multiset<int> ms;
    // Inserting elements
    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);

    for (auto i : ms)
        cout << i << " ";

    cout << "\nAccess elements: " << endl;
    // Access first element
    auto it1 = ms.begin();
    cout << *it1 << " ";

    // Access third element
    auto it2 = next(it1, 2);
    cout << *it2;

    cout << "\nFinding 3: " << endl;
    // Finding 3
    auto it = ms.find(3);
    if (it != ms.end()) 
        cout << *it;
    else 
        cout << "Not Found!";
    cout << "\nTraversing using range-based loop: " << endl;
    // Traversing using range-based loop
    for (auto i : ms)
        cout << i << " ";

    cout << "\nDelete: " << endl;
    // Delete first element
    ms.erase(ms.begin());

    // Deleting all 3s
    ms.erase(3);

    for (auto x : ms) cout << x << " ";
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
