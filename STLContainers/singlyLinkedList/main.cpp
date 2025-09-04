// singlyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In C++, forward_list container provides the implementation of singly linked list data structure. 
// It stores data in non-contiguous memory where each element points to the next element in the sequence. 
// This makes insertion and deletion faster once the position of the element is known.

#include <iostream>
#include <forward_list>
using namespace std;

void printFL(forward_list<int>& fl) {
    for (auto i : fl)
        cout << i << " ";
    cout << '\n';
}

bool comparator(string a, string b) {
    return a.length() <= b.length();
}

// comparison function
bool cmp_fun(int a, int b)
{
    return a > b;
}

// Function to print forward 
// list elements
void print(forward_list<pair<int, int> >&
    forwardListOfPairs)
{

    cout << "Forward List : " << '\n';
    for (auto currentPair : forwardListOfPairs)
    {
        // Each element of the forwardList is
        // a pair itself
        pair<int, int> currentpair = currentPair;

        cout << "[ ";

        // Printing pair contents
        cout << currentPair.first << ' ' <<
            currentPair.second;
        cout << ']';
        cout << '\n';
    }
}

int main() {

    // Creating an empty forward_list
    forward_list<int> fl1;

    // Creating a forward_list with
    // default value
    forward_list<int> fl2(3, 4);

    // Creating a forward_list from an
    // initializer list
    forward_list<int> fl3 = { 1, 5, 3, 4 };
    printFL(fl1);
    printFL(fl2);
    printFL(fl3);
    cout << endl;
    forward_list<int> fl = { 1, 5, 3, 4 };

    // Access the first element
    cout << fl.front() << endl;
    cout << endl;
    // Access third element
    auto it = next(fl.begin(), 2);
    cout << *it;
    cout << endl;


    forward_list<int> fl4 = { 5, 4 };
    // Inserting Element at front
    fl4.push_front(1);

    // Insert 3 after the second element
    auto it1 = fl4.begin();
    advance(it1, 1);
    fl4.insert_after(it1, 3);

    for (auto x : fl4)
        cout << x << " ";
    cout << endl;

    forward_list<int> fl5 = { 1, 5, 3, 4 };
    // Updating first element
    fl5.front() = 111;
    cout << fl5.front() << endl;
    cout << endl;
    // Updating third element
    auto it2 = next(fl5.begin(), 2);
    *it2 = 333;
    cout << *it2;
    cout << endl;

    forward_list<int> fl6 = { 1, 5, 3, 4 };

    // Finding 3
    auto it3 = find(fl6.begin(), fl6.end(), 3);

    if (it3 != fl6.end()) 
        cout << *it3;
    else 
        cout << "Element not Found";
    cout << endl;
    // Delete first element
    fl6.pop_front();

    // Delete third element
    auto it4 = fl6.begin();
    advance(it4, 1);
    fl6.erase_after(it4);

    for (auto x : fl6) cout << x << " ";


    // initialising forward list 
    forward_list<int> forward = { 10, 20, 40, 30, 70 };
    cout << endl;
    cout << "List elements before performing reverse operation: ";

    for (auto it = forward.begin(); it != forward.end(); ++it)
        cout << *it << " ";

    // Function that performs reverse operation 
    forward.reverse();

    // printing elements of list 
    cout << "\nList elements after performing reverse operation: ";

    for (auto it = forward.begin(); it != forward.end(); ++it)
        cout << *it << " ";

    cout << endl;

    // forward list declaration of integer type
    forward_list<int> myflist{ 1, 5, 3, 2, 4 };

    // sort function
    myflist.sort();

    // printing the forward list after sort
    for (auto it = myflist.begin(); it != myflist.end(); ++it)
        cout << ' ' << *it;

    // forward list declaration of string type
    forward_list<string> myflistString{ "This","is","Geeksforgeeks" };

    // sort function
    myflistString.sort(comparator);
    cout << endl;
    // printing the forward list after sort
    for (auto it = myflistString.begin(); it != myflistString.end(); ++it)
        cout << ' ' << *it;

    forward_list<int> fl11 = { 12, 25, 31, 41 };
    forward_list<int> fl21 = { 10, 20, 30 };

    // merge two forward list
    fl11.merge(fl21);

    // print the contents of the forward list
    cout << "List contains following elements" << endl;
    for (auto it = fl11.begin(); it != fl11.end(); ++it)
        cout << *it << " ";

    for (auto it = fl21.begin(); it != fl21.end(); ++it)
        cout << *it << " ";
    

    forward_list<int> fl7 = { 41, 31, 25, 12 };
    forward_list<int> fl8 = { 30, 20, 10 };

    // merge two forward list
    fl7.merge(fl8, cmp_fun);

    // print the contents of the forward list
    cout << "List contains following elements" << endl;
    for (auto it = fl7.begin(); it != fl7.end(); ++it)
        cout << *it << " ";

    //*********************Forward List of Pairs********************
    cout << "Forward List of Pairs" << endl;
    // Declaring a forward list of pairs
    forward_list<pair<int, int> > forwardListOfPairs;

    // Declaring a pair
    pair<int, int> pair1;

    // Initializing the
    // pair
    pair1 = make_pair(11, 22);

    // Push the pair at the back
    // in the forward list
    forwardListOfPairs.push_front(pair1);

    // Declaring another pair
    pair<int, int> pair2;

    // Initializing the
    // pair
    pair2 = make_pair(33, 44);

    // Push the pair at the front
    // in the forward list
    forwardListOfPairs.push_front(pair2);

    // Declaring another pair
    pair<int, int> pair3;

    // Initializing the pair
    pair3 = make_pair(55, 66);

    // Push the pair at the front
    // in the forward list
    forwardListOfPairs.push_front(pair3);

    // Declaring another pair
    pair<int, int> pair4;

    // Initializing the pair
    pair4 = make_pair(77, 88);

    // Push the pair at the front
    // in the forward list
    forwardListOfPairs.push_front(pair4);

    // Calling print function
    print(forwardListOfPairs);
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
