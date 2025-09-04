// Sets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Sets are associative container which stores unique elements in some sorted order. 
// By default, it is sorted ascending order of the keys, but this can be changed as per requirement.

#include <iostream>
#include <set>
using namespace std;

int main() {

    // Creating an empty set
    set<int> s;

    s = { 1, 4, 2 };
    cout << "Insert elements into set: ";
    // Insert elements into set
    s.insert(5);
    s.emplace(3);
    s.insert(5);

    for (auto x : s) 
        cout << x << " ";

    // Accessing first element
    auto it1 = s.begin();
    cout << endl;
    // Accessing third element
    cout << "Accessing third element: ";
    auto it2 = next(it1, 2);
    cout << *it1 << " " << *it2;

    // Finding 3
    cout << endl;
    cout << "Finding 3: ";
    auto it = s.find(3);
    if (it != s.end()) 
        cout << *it;
    else
        cout << "Element not Found!";
    cout << endl;
    cout << "Traversing using range based for loop: ";
    set<int> s1 = { 5, 1, 4, 3, 2 };
    // Traversing using range based for loop
    for (auto it3 = s1.begin(); it3 != s1.end(); it3++)
        cout << *it3 << " ";
    
    cout << endl;
    cout << "Deleting elements: ";
    // Deleting elements by value
    s.erase(5);

    // Deleting first element by iterator
    s.erase(s.begin());

    for (auto x : s) 
        cout << x << " ";

    cout << endl;
    cout << "Empty test: ";
    //Create an empty set of integers
    set<int>mySet;
    //check if the set is empty
    if (mySet.empty()) {
        cout << "The set is empty. " << endl;
    }
    //Insert an element
    mySet.insert(10);
    if (!mySet.empty()) {
        cout << "The set is not empty now. " << endl;
    }
    cout << endl;
    mySet.insert(20);
    mySet.insert(10);
    cout << "Size of the set: " << mySet.size() << endl;
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
