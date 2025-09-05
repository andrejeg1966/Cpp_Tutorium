// WeakPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

class Object {
public:
    Object(int value): data(value)
    {
        cout << "Object created with value: " << data
            << endl;
    }

    ~Object()
    {
        cout << "Object destroyed with value: " << data
            << endl;
    }

    int data;
};

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
int main()
{
    // Create shared_ptr Smart Pointer
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));

    // Created a weak_ptr smart pointer
    weak_ptr<Rectangle> P2(P1);
    cout << P1->area() << endl;
   

    // Returns the number of shared_ptr 
    // objects that manage the object
    cout << P2.use_count();

    //another example
    cout << "\nanother weak_ptr example\n";

    // creating shared pointer with resource ownership
    shared_ptr<Object> sharedObjectA = make_shared<Object>(42);

    // creating weak pointer to the previously created
    // shared objects
    weak_ptr<Object> weakObjectA = sharedObjectA;
    
    // Access objects using weak_ptr
    if (!weakObjectA.expired()) {
        cout << "The value stored in sharedObjectA:"
            << (*weakObjectA.lock()).data << endl;
    }
    cout << endl;
    cout << weakObjectA.use_count();
    cout << endl;
    // deleting object
    sharedObjectA.reset();
    cout << "End of the Program";
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
