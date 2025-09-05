// UniqPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
using namespace std;

struct A {
    void printA() {
        cout << "A struct....\n" << endl;
    }
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
    //2. uniq_ptr
   //In C++, unique_ptr is a smart pointer that manages a dynamically allocated object, and it was introduced in C++11. It is defined in the <memory> header file. Here are the key points about unique_ptr:
   //Ownership: unique_ptr owns the object it points to.Only one unique_ptr can own an object at a time.
   //Move Semantics : Since only one unique_ptr can own an object, it cannot be copied.However, it can be transferred(moved) from one unique_ptr to another using move semantics(std::move).
   //Memory Management : unique_ptr automatically deletes the object it points to when it goes out of scope, so there's no need to manually call delete.
    cout << "uniq_ptr" << endl;

    unique_ptr<A> p1(new A);
    p1->printA();
    

    // displays address of the 
    // containing pointer
    
    cout << p1.get();

    //Moving Object Owned by unique_ptr
    cout << "\nMoving Object Owned by unique_ptr\n" << endl;
    // now address stored in p1 
    // shpould get copied to p2
    unique_ptr<A> p2 = move(p1);

    p2->printA();
    cout << p1.get() << endl;
    if (p1 == NULL)
        cout << "\nYes NULL pointer\n";
    cout << p2.get();

    //another example
    cout << "\nanother uniq_ptr example\n";
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl;

    unique_ptr<Rectangle> P2;

    // Copy the addres of P1 into p2
    P2 = move(P1);
    cout << P2->area();

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
