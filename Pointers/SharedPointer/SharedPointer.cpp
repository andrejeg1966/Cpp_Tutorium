// SharedPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By using shared_ptr, more than one pointer can point to same object at a time, and it will maintain a reference counter using the use_count() method.

#include <iostream>
#include <memory>
using namespace std;


class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
};

class A {
public:
    void show() { cout << "A::show()" << endl; }
};
int main()
{
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl;

    shared_ptr<Rectangle> P2;

    // P1 and P2 are pointing 
    // to same object
    P2 = P1;
    cout << P2->area() << endl;
    cout << P1->area() << endl;
    cout << P1.use_count();

    //another shared_ptr example
    cout << "\nanother shared_ptr example\n";
    // Creating a shared pointer and accessing the object
    
    shared_ptr<A> p1(new A);
    // Printing the address of the managed object
    cout << p1.get() << endl;
    p1->show();

    // Creating a new shared pointer that shares ownership
    shared_ptr<A> p2(p1);
    p2->show();

    // Printing addresses of p1 and p2
    cout << p1.get() << endl;
    cout << p2.get() << endl;

    // Returns the number of shared_ptr objects
    // referring to the same managed object
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;

    // Relinquishes ownership of p1 on the object
    // and pointer becomes NULL
    p1.reset();
    cout << p1.get() << endl; // This will print nullptr or 0
    cout << p2.use_count() << endl;
    cout << p2.get() << endl;

    // Creating shared pointers using std::make_shared
    shared_ptr<int> shr_ptr1 = make_shared<int>(42);
    shared_ptr<int> shr_ptr2 = make_shared<int>(24);
    // Accessing the values using the dereference operator
    // (*)
    cout << "Value 1: " << *shr_ptr1 << endl;
    cout << "Value 2: " << *shr_ptr2 << endl;
    // Using the assignment operator (=) to share ownership
    shared_ptr<int> shr_ptr3 = shr_ptr1;
    // Checking if shared pointer 1 and shared pointer 3
    // point to the same object
    if (shr_ptr1 == shr_ptr3) {
        cout << "shared pointer 1 and shared pointer 3 "
            "point to the same object."
            << endl;
    }
    // Swapping the contents of shared pointer 2 and shared
   // pointer 3
    shr_ptr2.swap(shr_ptr3);
    // Checking the values after the swap
    cout << "Value 2 (after swap): " << *shr_ptr2 << endl;
    cout << "Value 3 (after swap): " << *shr_ptr3 << endl;
    // Using logical operators to check if shared pointers
    // are valid
    if (shr_ptr1 && shr_ptr2) {
        cout << "Both shared pointer 1 and shared pointer "
            "2 are valid."
            << endl;
    }
    // Resetting a shared pointer
    shr_ptr1.reset();


    /*
    These lines demonstrate that p1 no longer manages an
    object (get() returns nullptr), but p2 still manages the
    same object, so its reference count is 1.
    */
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
