// Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In C++, list container implements a doubly linked list in which each element contains the address of next and previous element in the list. 
// It stores data in non-contiguous memory, hence providing fast insertion and deletion once the position of the element is known.

#include <iostream>
#include <list>
using namespace std;

void printL(list<int>& l) {
    for (auto i : l)
        cout << i << " ";
    cout << '\n';
}

int main() {

    // Creating an empty list
    list<int> l1;

    // Creating list from initializer list
    list<int> l2 = { 1, 3, 4, 2, 5 };

    // Creating list with given size and
    // initial value
    list<int> l3(5, 9);

    printL(l1);
    printL(l2);
    printL(l3);

    list<int> l = { 3, 2 };

    // Inserting an element at the end
    l.push_back(5);

    // Inserting an element at the beginning
    l.push_front(1);

    // Inserting an element at a specific position
    auto it = l.begin();
    advance(it, 2); // increment iterator by offset
    l.insert(it, 4);
    cout << endl;
    for (auto i : l)
        cout << i << " ";
    // Accessing first and last elements
    cout << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;

    // Access third element
    cout << *next(l.begin(), 2);

    // Changing the first element
    l.front() = 11;

    // Move iterator to the second element
    auto it1 = l.begin();
    advance(it1, 2);

    // Update the value using iterator
    *it1 = 10;
    cout << endl;
    for (auto i : l)
        cout << i << " ";
    // Deleting last element
    l.pop_back();

    // Deleting first element
    l.pop_front();

    // Deleting third element
    auto it3 = l.begin();
    advance(it3, 2);
    l.erase(it3);
    cout << endl;
    for (auto i : l)
        cout << i << " ";
    
    list<int> l4 = { 1, 3, 4, 2, 5 };

    // Finding 4
    auto it2 = find(l4.begin(), l4.end(), 4);
    cout << endl;
    if (it2 != l4.end()) 
        cout << *it2;
    else 
        cout << "Element Not Found!";

    // Initialize a list
    list<int> myList = { 1, 2, 3 };

    // Check if the list is empty
    bool isEmpty = myList.empty();
    cout << endl;
    // Print the result
    if (isEmpty) {
        cout << "List is empty" << endl;
    }
    else {
        cout << "List is not empty" << endl;
    }
    // Creating a list
    list<int> demoList;

    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);

    // getting size of the list
    int size = demoList.size();

    cout << "The list contains " << size << " elements";
    cout << endl;
    // Initial list:
    cout << "Initial List: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";

    // Resize list to contain less elements
    demoList.resize(2);
    cout << "\n\nList after first resize: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";

    // Resize list to contain more elements
    demoList.resize(4);
    cout << "\n\nList after second resize: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";

    // resize list to contain more elements
    // with a specified value
    demoList.resize(5, 50);
    cout << "\n\nList after third resize: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";

    // Creating and initializing an source list
    list<int> sourceList = { 1, 2, 3, 4, 5 };

    // Creating a copied list using the copy constructor
    list<int> copiedList(sourceList);

    // Output the contents of the copied list
    cout << "Copied List: ";
    for (int num : copiedList) {
        cout << num << " ";
    }
    cout << endl;

    // Initializing a list of integers
    list<int> myList1 = { 30, 10, 20, 40, 50 };

    // Printing the list before sorting
    cout << "List before sorting : ";
    for (int num : myList1) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting the list
    myList1.sort();

    // Printing the list after sorting
    cout << "List after sorting : ";
    for (int num : myList1) {
        cout << num << " ";
    }

    // Reversing the list
    myList1.reverse();
    cout << endl;
    // Printing the list after reversal
    cout << "Reversed List: ";
    for (int num : myList1) {
        cout << num << " ";
    }
    cout << endl;

    // list container declaration 
    list<int> mylist1{ 1, 2, 3, 4 };
    list<int> mylist2{ 3, 5, 7, 9 };

    // using swap() function to 
    //swap elements of lists 
    mylist1.swap(mylist2);

    // printing the first list 
    cout << "mylist1 = ";
    for (auto it = mylist1.begin();
        it != mylist1.end(); ++it)
        cout << ' ' << *it;

    // printing the second list 
    cout << endl
        << "mylist2 = ";
    for (auto it = mylist2.begin();
        it != mylist2.end(); ++it)
        cout << ' ' << *it;

    // declaring the lists 
    // initially sorted 
    list<int> list11 = { 10, 20, 30 };
    list<int> list21 = { 40, 50, 60 };

    // merge operation 
    list21.merge(list11);
    cout << endl;
    cout << "List: ";

    for (auto it = list21.begin(); it != list21.end(); ++it)
        cout << *it << " ";

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
