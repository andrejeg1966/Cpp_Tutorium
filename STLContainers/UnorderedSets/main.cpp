// UnorderedSets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In C++, unordered_set is an unordered associative container that stores unique elements. Unlike set, it stores its elements using hashing. 
// This provides average constant-time O(1) search, insert, and delete operations but the elements are not sorted in any particular order.


#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    cout << "unordered_set: ";

    // Create an empty unordered_set
    unordered_set<int> us1;

    // Initialize an unordered_set using
    // using intializer list
    unordered_set<int> us2 = { 2, 1, 3, 5, 4 };

    for (auto x : us2)
        cout << x << " ";

    cout << "\nInsert elments: " << endl;
    unordered_set<int> us;

    // Insert elments using insert()
    us.insert(3);
    us.insert(1);
    us.insert(2);

    for (auto x : us)
        cout << x << " ";

    cout << "\nAccessing third element: " << endl;
    unordered_set<int> usa = { 1, 2, 3, 4, 5 };

    // Accessing third element
    auto it = next(usa.begin(), 2);
    cout << *it;

    cout << "\nFinding 4: " << endl;
    // Finding 4
    it = usa.find(4);

    if (it != usa.end()) 
        cout << *it;
    else 
        cout << "Element not Found!";

    cout << "\nTraverse: " << endl;
    // Traversing
    for (auto it = usa.begin(); it != usa.end(); it++)
        cout << *it << " ";

    // Delete element by value
    usa.erase(5);

    cout << "\nDelete: " << endl;
    // Delete element by position
    usa.erase(usa.begin());

    for (auto x : usa)
        cout << x << " ";
    cout << "\nempty function: " << endl;
    

    // declaration
    unordered_set<int> sample;

    // Check whether the unordered_set is empty
    if (sample.empty() == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    // Insert a value
    sample.insert(5);

    // Now check whether it is empty
    if (sample.empty() == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    cout << "\nsize: " << endl;
    // prints the size of arr1
        cout << "size of arr1:" << usa.size();

        cout << "\nSwap: " << endl;
        // sets the values in two container
        unordered_set<string>
            first = { "FOR GEEKS" },
            second = { "GEEKS" };

        // before swap values
        cout << "before swap :- \n";

        cout << "1st container : ";
        for (const string& x : first)
            cout << x << endl;

        cout << "2nd container : ";
        for (const string& x : second)
            cout << x << endl;

        // call swap

        first.swap(second);

        // after swap values
        cout << "\nafter swap :- \n";

        // displaying 1st container
        cout << "1st container : ";
        for (const string& x : first)
            cout << x << endl;

        // displaying 2nd container
        cout << "2nd container : ";
        for (const string& x : second)
            cout << x << endl;
        cout << endl;

        // sets the values in two container
        unordered_set<int>
            first_int = { 1, 2, 3 },
            second_int = { 4, 5, 6 };

        // before swap values
        cout << "before swap :- \n";

        cout << "1st container : ";
        for (const int& x : first_int)
            cout << x << " ";
        cout << endl;

        cout << "2nd container : ";
        for (const int& x : second_int)
            cout << x << " ";
        cout << endl;

        // call swap

        first_int.swap(second_int);

        // after swap values
        cout << "\nafter swap :- \n";

        // displaying 1st container
        cout << "1st container : ";
        for (const int& x : first_int)
            cout << x << " ";
        cout << endl;

        // displaying 2nd container
        cout << "2nd container : ";
        for (const int& x : second_int)
            cout << x << " ";
        cout << endl;
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
