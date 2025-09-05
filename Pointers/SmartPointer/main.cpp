//SmartPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A smart pointer is a wrapper over a raw pointer that automatically manages memory, ensuring proper deallocation and preventing memory leaks. 
//Defined in the <memory> header, smart pointers are template-based, allowing use with any data type.

//Types of Smart Pointers

//1. auto_ptr
//2.unique_ptr
//3. shared_ptr
//4. weak_ptr

#include <iostream>
#include <memory>
using namespace std;

// creating class with overloaded constructor and destructor
class Integer {
public:
    Integer() { cout << "Object Created" << endl; }

    ~Integer() { cout << "Object Destroyed" << endl; }
};


int main() {
    //1. auto_ptr
    // creating auto pointer to Integar class
    auto_ptr<Integer> ptr(new Integer());

    // not using delete
    cout << "auto_ptr" << endl;

    // Pointer declaration
    auto_ptr<int> ptr1(new int(10));
    cout << *ptr1 << endl;

    // Transfer ownership to
    // pointer ptr2, 
    auto_ptr<int> ptr2 = ptr1;
    cout << *ptr2;
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
