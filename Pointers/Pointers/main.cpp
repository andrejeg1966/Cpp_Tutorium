// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h> 
#include <iostream>
#include <stdlib.h>     // for _countof
#include <limits.h>

using namespace std;

/*
A NULL pointer in C is a pointer that doesn't point to any of the memory locations. The NULL constant is defined in the header files stdio.h, stddef.h as well as stdlib.h.
A pointer is initialized to NULL to avoid the unpredicted behavior of a program or to prevent segmentation fault errors.
*/

int main()
{
    // Use %zu for size_t if your compiler supports it.
    printf("sizeof(int)       = %d\n", sizeof(int));
    printf("sizeof(float)     = %d\n", sizeof(float));
    printf("sizeof(double)    = %d\n", sizeof(double));
    printf("sizeof(char)      = %d\n", sizeof(char));
    printf("sizeof(167)       = %d\n", sizeof(167));
    printf("sizeof(3.1415926) = %d\n", sizeof(3.1415926));
    printf("sizeof('$')       = %d\n", sizeof('$'));
    cout << endl;
    printf("The value of CHAR_BIT: %d\n", CHAR_BIT);
    printf("The value of SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("The value of SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("The value of UCHAR_MAX: %u\n", UCHAR_MAX);
    printf("The value of CHAR_MIN: %d\n", CHAR_MIN);
    printf("The value of CHAR_MAX: %d\n", CHAR_MAX);
    printf("The value of MB_LEN_MAX: %d\n", MB_LEN_MAX);
    printf("The value of SHRT_MIN: %d\n", SHRT_MIN);
    printf("The value of SHRT_MAX: %d\n", SHRT_MAX);
    printf("The value of USHRT_MAX: %u\n", USHRT_MAX);
    printf("The value of INT_MIN: %d\n", INT_MIN);
    printf("The value of INT_MAX: %d\n", INT_MAX);
    printf("The value of UINT_MAX: %u\n", UINT_MAX);
    printf("The value of LONG_MIN: %ld\n", LONG_MIN);
    printf("The value of LONG_MAX: %ld\n", LONG_MAX);
    printf("The value of ULONG_MAX: %lu\n", ULONG_MAX);
    cout << endl;

    // printf format
    char string[10];
    int A = -73;
    unsigned int B = 31337;

    strcpy_s(string, _countof(string), "sample");
   
    // printing with different formats
    printf("[A] Dec: %d, Hex: %x, Unsigned: %u\n", A, A, A);
    printf("[B] Dec: %d, Hex: %x, Unsigned: %u\n", B, B, B);
    printf("[field width on B] 3: '%3u', 10: '%10u', '%08u'\n", B, B, B);


    // Example of unary address operator (dereferencing) and a %x
    printf("variable A is at address: %08x\n", &A);
    cout << endl;

    cout << "*******************Pointers * ****************" << endl;
    
    //*******************Pointers*****************

    //initialize the pointer as null.
    int* ptr = NULL;  
    cout << endl;

    if (ptr == NULL) {
        printf("Pointer is a NULL pointer");
    }
    else {
        printf("Value stored in the address referred by the pointer: %08x", *ptr);
    }
    cout << endl;

    ptr = (int*)malloc(sizeof(int));


    if (ptr == NULL) {
        printf("Memory Allocation Failed");
        exit(0);
    }
    else {
        printf("Memory Allocated successfully");
    }
    cout << "\nValue stored in pointer ptr: " << ptr << endl;
    printf("Value stored in pointer ptr: %16x\n", ptr);
    cout << "Value pointed to by ptr: " << *ptr << endl;
    printf("Value pointed to by ptr: %u\n", *ptr);
    cout << endl;
    

    int var = 10;

    // declare pointer and store address of x
    ptr = &var;

    // print value and address
    cout << "Value of x: " << var << endl;
    cout << "Address of x: " << &var << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Address of pointer: " << &ptr << endl;


    /*
    void Pointer in C
    A void pointer in C is a type of pointer that is not associated with any data type. A void pointer can hold an address of any type and can be typecasted to any type. 
    They are also called general-purpose or generic pointers.
    In C programming, the function malloc() and calloc() return "void *" or generic pointers.
    */
    cout << endl;
    int a = 10;
    char b = 'x';

    // void pointer holds address of int a
    void* ptr2 = &a;
    printf("Address of 'a': %x", &a);
    printf("\nVoid pointer points to: %x", ptr2);
    cout << "\nValue of a: " << a << endl;
    // Error: cannot dereference void pointer
    //cout << "\nValue of a: " << *ptr2 << endl;
    cout << "Value of a: " << *(static_cast<int*>(ptr)) << endl;

    // it now points to char b
    ptr2 = &b;
    printf("\nAddress of 'b': %x", &b);
    printf("\nVoid pointer points to: %x", ptr2);



    void* arr[3];

    int a1 = 100;
    float b1 = 20.5;
    

    arr[0] = &a1;
    arr[1] = &b1;
   
    cout << endl;
    printf("Integer: %d\n", *((int*)arr[0]));
    printf("Float: %f\n", *((float*)arr[1])); 
    
    cout << "Size of pointer on 64-bit CPU" << endl;
    // Finding size using sizeof()
    cout << sizeof(ptr) << endl;

}

