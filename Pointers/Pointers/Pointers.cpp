// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h> 
#include <iostream>

using namespace std;

/*
A NULL pointer in C is a pointer that doesn't point to any of the memory locations. The NULL constant is defined in the header files stdio.h, stddef.h as well as stdlib.h.
A pointer is initialized to NULL to avoid the unpredicted behavior of a program or to prevent segmentation fault errors.
*/

int main()
{
    int* p = NULL;//initialize the pointer as null.
    int* ptr = NULL;   // null pointer
    
    cout << endl;



    if (ptr == NULL) {
        printf("Pointer is a NULL pointer");
    }
    else {
        printf("Value stored in the address referred by the pointer: %d", *ptr);
    }
    cout << endl;
    int* ptr1 = (int*)malloc(sizeof(int));


    if (ptr1 == NULL) {
        printf("Memory Allocation Failed");
        exit(0);
    }
    else {
        printf("Memory Allocated successfully");
    }

    
    /*
    void Pointer in C
    A void pointer in C is a type of pointer that is not associated with any data type. A void pointer can hold an address of any type and can be typecasted to any type. 
    They are also called general-purpose or generic pointers.
    In C programming, the function malloc() and calloc() return "void *" or generic pointers.
    */

    int a = 10;
    char b = 'x';

    // void pointer holds address of int a
    void* ptr2 = &a;
    printf("Address of 'a': %d", &a);
    printf("\nVoid pointer points to: %d", ptr2);

    // it now points to char b
    ptr2 = &b;
    printf("\nAddress of 'b': %d", &b);
    printf("\nVoid pointer points to: %d", ptr2);

    void* arr[3];

    int a = 100;
    float b = 20.5;
    

    arr[0] = &a;
    arr[1] = &b;
   

    printf("Integer: %d\n", *((int*)arr[0]));
    printf("Float: %f\n", *((float*)arr[1]));
    


}

