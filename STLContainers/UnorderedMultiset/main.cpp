// UnorderedMultiset.cpp : This file contains the 'main' function. Program execution begins and ends there.
//n C++, unordered multiset is an unordered associative container that works similarly to an unordered set, but it can store multiple copies of the same value. 
// It provides fast insert, delete and search operations using hashing, but the elements are not in any particular order.

#include <iostream>
#include <unordered_set>
using namespace std;


// Function to display the contents of multiset s.
void display(unordered_multiset<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << "\n";
}

int main() {

    // Create an empty unordered multiset
    unordered_multiset<int> ums1;

    // Create and initialize elements
    // using initialzer list
    unordered_multiset<int> ums2 =
    { 5, 3, 4, 1, 1 };

    for (auto x : ums2)
        cout << x << " ";

    unordered_multiset<int> ums;
    cout << "\nInsert elements: " << endl;
    // Insert elements using insert()
    ums.insert(5);
    ums.insert(1);
    ums.insert(3);
    ums.insert(1);
    ums.insert(2);
    ums.insert(4);

    for (auto x : ums) 
        cout << x << ' ';
    cout << "\nAccessing element: " << endl;
    // Accessing element using iterator
    auto it = next(ums.begin(), 2);
    cout << *it;
    cout << "\nFinding element: " << endl;
    // Finding 3
    it = ums.find(3);

    if (it != ums.end()) cout << *it;
    else cout << "Element not Found!";

    cout << "\nTraversing: " << endl;
    // Using range-based for loop
    for (auto x : ums)
        cout << x << " ";
    
    cout << "\nDeleting: " << endl;
    // Delete all occurrences of element 1
    ums.erase(1);

    // Delete 2 using iterator
    ums.erase(ums.find(2));

    for (auto x : ums) 
        cout << x << " ";

    cout << "\nEmpty Check: " << endl;
    // declaration
    unordered_multiset<int> sample;

    // inserts element
    sample.insert(11);
    sample.insert(11);
    sample.insert(11);
    sample.insert(12);
    sample.insert(13);
    sample.insert(13);
    sample.insert(14);

    // if not empty then print the elements
    if (sample.empty() == false) {
        cout << "Elements: ";

        for (auto it = sample.begin(); it != sample.end(); it++) {
            cout << *it << " ";
        }
    }

    // container is erased completely
    sample.clear();

    if (sample.empty() == true)
        cout << "\nContainer is empty";

    cout << "\nSize Check: " << endl;
    // Define the unordered_set
    unordered_multiset<int> numbers{ 1, 2, 3, 4, 5, 6 };

    // Calculate and print
    // the size of the unordered_multiset
    cout << "The container has "
        << numbers.size()
        << " elements in it";

    // Declaration
    unordered_multiset<int> s1, s2;

    cout << "\nSwap Check: " << endl;
    // initializing both multisets(sizes are different)
    s1 = { 1, 2, 3, 4 };
    s2 = { 10, 20, 30, 40, 50 };

    // displaying initial values
    cout << "Initial values of s1 are: \n";
    display(s1);
    cout << endl;

    cout << "Initial values of s2 are: \n";
    display(s2);
    cout << endl;

    // swapping the values
    s1.swap(s2);

    // display final values
    cout << "Final values of s1 are: \n";
    display(s1);
    cout << endl;

    cout << "Final values of s2 are: \n";
    display(s2);
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
