// Deques.cpp : This file contains the 'main' function. Program execution begins and ends there.
//n C++, deque container provides fast insertion and deletion at both ends. Stands for Double Ended QUEue, 
// it is a special type of queue where insertion and deletion operations are possible at both the ends in constant time complexity.
#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

void printD(deque<int>& dq) {
    for (auto x : dq) {
        cout << x << " ";
    }
    cout << '\n';
}
int main() {

    // Creating an empty deque
    deque<int> dq1;

    // Creating a deque with default size and value
    deque<int> dq2(3, 4);

    // Creating a deque from an initializer list
    deque<int> dq3 = { 1, 4, 2, 3, 5 };

    printD(dq1);
    printD(dq2);
    printD(dq3);

    //Inserting Elements
    deque<int> dq = { 1, 4, 2 };

    // Inserting elements at back and front
    dq.push_back(5);
    dq.push_front(0);

    // Insert element at third position
    auto it = dq.begin() + 2;
    dq.insert(it, 11);

    for (auto x : dq)
        cout << x << " ";
    cout  << endl;
    // Accessing elements
    cout << dq[2] << endl;
    cout << dq.front() << endl;
    cout << dq.back();

    // Updating element
    dq[2] = 8;
    cout << endl;
    cout << dq[2];
    cout << endl;
    // Deleting from the back and front
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    dq.pop_back();
    dq.pop_front();
    dq.erase(dq.begin());
    cout << endl;
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;
    // Finding the size of the deque
    int dequeSize = dq.size();

    // Printing the size of the deque
    cout << "Size of the Deque is: " << dequeSize << endl;
    cout << endl;
    // Check if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty" << endl;
    }
    else {
        cout << "Deque is not empty" << endl;
    }
    cout << endl;
    // Clearing the deque
    dq.clear();

    // Printing the size of the deque after  clearing it
    cout << "After clearing, the deque has " << dq.size()
        << " elements" << endl;
    cout << endl;
    // Check if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty" << endl;
    }
    else {
        cout << "Deque is not empty" << endl;
    }
    cout << endl;
    //Copy 
     // Original deque
    deque<int> oldDeque = { 1, 2, 3, 4, 5 };

    // destination deque
    deque<int> newDeque(oldDeque.size());

    // Copying Deque Using copy algorithm
    copy(oldDeque.begin(), oldDeque.end(),
        newDeque.begin());

    // Printing original deque
    cout << "Original deque:";
    for (const auto& elem : oldDeque) {
        cout << " " << elem;
    }
    cout << endl;

    // Printing copied deque
    cout << "Copied deque:";
    for (const auto& elem : newDeque) {
        cout << " " << elem;
    }
    cout << endl;
    //Swap
    // deque container declaration
    deque<int> mydeque1{ 1, 2, 3, 4 };
    deque<int> mydeque2{ 3, 5, 7, 9 };

    // using swap() function to swap elements of deques
    mydeque1.swap(mydeque2);

    // printing the first deque
    cout << "mydeque1 = ";
    for (auto it = mydeque1.begin(); it < mydeque1.end(); ++it)
        cout << *it << " ";

    // printing the second deque
    cout << endl
        << "mydeque2 = ";
    for (auto it = mydeque2.begin(); it < mydeque2.end(); ++it)
        cout << *it << " ";

    //Sort
    cout << endl;
    // Initialize a deque
    deque<int> dqSort = { 30, 10, 20, 50, 40 };

    // Print the original deque
    cout << "Original deque: ";
    for (int x : dqSort) {
        cout << x << " ";
    }
    cout << endl;

    // Sort the dequue
    sort(dqSort.begin(), dqSort.end());

    // Print the sorted deque
    cout << "Sorted deque: ";
    for (int x : dqSort) {
        cout << x << " ";
    }
    cout << endl;

    // Reversing the deque
    reverse(dqSort.begin(), dqSort.end());

    // Printing the reversed deque
    cout << "Reversed Deque: ";
    for (int num : dqSort) {
        cout << num << " ";
    }
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
