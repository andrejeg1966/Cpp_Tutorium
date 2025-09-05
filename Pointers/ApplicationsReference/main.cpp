// ApplicationsReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In C++, a reference works as an alias for an existing variable, providing an alternative name for it and allowing you to work with the original data directly.
//When the value of ref is modified, it directly changes the value of x, since both ref and x refer to the same memory location.
#include <iostream>
using namespace std;

int& getMax(int& a, int& b) {

    // Return the larger of the two numbers
    return (a > b) ? a : b;
}

void modifyValue(int& x) {

    // Modifies the original variable
    x = 20;
}

int main()
{
    //1. Passing Arguments by Reference
    cout << "1. Passing Arguments by Reference\n";
    int a = 10;

    // Pass a by reference
    modifyValue(a);

    cout << a;

    //2. Returning Reference from Functions
    cout << "2. Returning Reference from Functions\n";
    int x = 10, y = 20;
    int& maxVal = getMax(x, y);

    // Modify the value of the larger number
    maxVal = 30;
    cout << "x = " << x << ", y = " << y;
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
