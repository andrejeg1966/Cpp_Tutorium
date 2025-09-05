// PointerArithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //1. Incrementing and Decrementing Pointer
    cout << "1. Incrementing and Decrementing Pointerßn" << endl;
    int n = 27;

    // Storing address of n in ptr
    int* ptr = &n;

    // Print size of int
    cout << "Size of int: " << sizeof(int) << endl;

    // Print the address stored at ptr
    cout << "Before Increment: " << ptr << endl;

    // Increment pointer
    ptr++;
    cout << "After Increment: " << ptr << endl;

    // Print the address stored at ptr
    cout << "Before Decrement: " << ptr << endl;

    // Decrement pointer
    ptr--;
    cout << "After Decrement: " << ptr;

    //2. Addition of Constant to Pointers
    cout << endl;
    cout << "2. Addition of Constant to Pointers" << endl;

    cout << "Address stored in ptr: " << ptr << endl;

    // Adding the integer value 1 to the pointer ptr
    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << ptr << endl;

    // Adding the integer value 2 to the pointer ptr
    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << ptr;

    //3. Subtraction of Constant from Pointers
    cout << endl;
    cout << "3. Subtraction of Constant from Pointers" << endl;

    cout << "Address stored in ptr: " << ptr << endl;

    // Subtracting the integer value 1 from pointer ptr
    ptr = ptr - 1;
    cout << "Subtract 1 from ptr: " << ptr;

    //4. Subtraction of Two Pointers of the Same Datatype
    cout << endl;
    cout << "4. Subtraction of Two Pointers of the Same Datatype" << endl;
    //The Subtraction of two pointers can be done only when both pointers are of the same data type. 
    //The subtraction of two pointers gives the number of elements present between the two memory addresses 
    // so it is primarily valid if the two pointers belong to the same array.
    int arr[5] = { 1, 2, 3, 4, 5 };

    int* ptr1 = &arr[2];

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = &arr[4];

    // Subtracting ptr2 from ptr1
    cout << ptr2 - ptr1;
    //5. Comparison of Pointers
    cout << "5. Comparison of Pointers" << endl;
    int n1 = 10;
    int* ptr11 = &n1;
    int** ptr21 = &ptr11;
    int* ptr31 = *ptr21;
    

    // comparing equality
    if (ptr11 == ptr31) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "ptr1 points to: " << ptr11 << endl;
        cout << "ptr3 points to: " << ptr31;
    }
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
