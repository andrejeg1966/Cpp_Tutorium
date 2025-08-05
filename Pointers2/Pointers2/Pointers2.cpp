// Pointers2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX = 3;
int main() {
	int* ptr0 = NULL;
	cout << "The value of ptr is " << ptr0;
    cout << endl;

    //C++ Pointer Arithmetic
    int  var[MAX] = { 10, 100, 200 };

    int* ptr;

    // let us have array address in pointer.
    ptr = var;

    for (int i = 0; i < MAX; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }

    //Pointer Comparisons
    int  var1[MAX] = { 10, 100, 200 };
    int* ptr1;

    // let us have address of the first element in pointer.
    ptr1 = var1;
    int i = 0;

    while (ptr1 <= &var1[MAX - 1]) {
        cout << "Address of var1[" << i << "] = ";
        cout << ptr1 << endl;

        cout << "Value of var1[" << i << "] = ";
        cout << *ptr1 << endl;

        // point to the previous location
        ptr1++;
        i++;
    }

    

	return 0;
}