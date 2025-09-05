// DanglingPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. 
// Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.

#include <iostream>
using namespace std;

int* fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    static int x = 5;

    return &x;
}
int main()
{
    //1. De - allocation of Memory
    cout << "1. De-allocation of Memory\n";
    int* ptr = (int*)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr = NULL;

    //2. Function Call 
    cout << "2. Function Call \n";

    int* p = fun();
    fflush(stdin);

    // p points to something which is not
    // valid anymore
    printf("%d", *p);
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
