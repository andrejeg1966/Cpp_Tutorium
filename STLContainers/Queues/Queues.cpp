// Queues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Queue container follows the FIFO (First In First Out) order of insertion and deletion. 
// According to it, the elements that are inserted first should be removed first. 
// This is possible by inserting elements at one end (called back) and deleting them from the other end (called front) of the data structure.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    //declaration of a queue
    queue<int>q;
    // Pushing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    //Accessing the front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    //Removing an element from the front
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    queue<int>qEmpty;
    if (qEmpty.empty()) {
        cout << "Queue is empty " << endl;
    }
    qEmpty.push(100);
    if (!qEmpty.empty()) {
        cout << "Queue is not empty. Front element: " << q.front() << endl;
    }

    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;


    queue<int> q1;
    q1.push(3);
    q1.push(4);
    q1.push(5);

    // Create a copy
    queue<int> temp(q1);

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
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
