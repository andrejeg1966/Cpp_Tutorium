// Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Stack container follows LIFO (Last In First Out) order of insertion and deletion. 
// It means that most recently inserted element is removed first and the first inserted element will be removed last. 
// This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int>st;
    // Inserting element top of the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //Accessing top element
    cout << "Top element: " << st.top() << endl;
    //Popping an element
    st.pop();

    stack<int>st1;
    if (st1.empty()) {
        cout << "Stack is empty " << endl;
    }
    st1.push(100);
    if (!st1.empty()) {
        cout << "Stack is not empty. Top element: " << st1.top() << endl;
    }

    cout << "Size of stack: " << st.size() << endl;
    cout << "Size of stack: " << st1.size() << endl;

    stack<int> st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);
    st2.push(40);

    // Create a copy
    stack<int> temp(st2);

    while (!temp.empty()) {
        cout << temp.top() << " ";
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
