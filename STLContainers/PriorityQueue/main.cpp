// PriorityQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Priority queue is a type of queue in which there is some priority assigned to the elements. 
//According to this priority, elements are removed from the queue. By default, the value of the element being inserted is considered as priority. 
//Higher its value, higher its priority. But this can be changed to any desired priority scheme as per requirement.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(9);
    pq.push(8);
    pq.push(6);

    // Accessing top element
    cout << pq.top();
    // Delete top element
    cout << endl;
    pq.pop();
    cout << pq.top();
    cout << endl;
    priority_queue<int>pqEmpty;
    if (pqEmpty.empty()) {
        cout << "Priority queue is empty. " << endl;
    }
    pqEmpty.push(50);
    pqEmpty.push(30);
    if (!pqEmpty.empty()) {
        cout << "Priority queue is not empty. Top element " << pqEmpty.top() << endl;
    }
    cout << "Size of priority queue: " << pq.size() << endl;
    pqEmpty.push(40);
    // Create a copy
    priority_queue<int> temp(pqEmpty);

    // Traverse
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    //**************Changing Priority Queue Order*************
    //All the above operations are demonstrated on a priority queue implementing max heap. 
    //This can be changed by using a custom comparator in which you define the priority parameter and how to compare them.
    //If you only want to assign highest priority to the smallest element(min - heap), then inbuilt greater<type> functional object can be used.
    
    //even though vector is default container, we still have to pass it because the comparator is third template argument. So, we have to pass all the arguments before it.
    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(9);
    pq1.push(8);
    pq1.push(6);
    cout << endl;
    auto temp1 = pq1;
    while (!temp1.empty()) {
        cout << temp1.top() << " ";
        temp1.pop();
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
