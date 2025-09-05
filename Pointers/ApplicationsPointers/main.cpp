// ApplicationsPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int* arr, int n)
{
    // here array elements are passed by reference
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void fun(int n, int* square, double* sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);

}

int* createArr(int n)
{
    int* arr = (int*)(malloc(n * sizeof(int)));
    return arr;
}
int main()
{
    //1. Passing Arguments by Reference
    cout << "1. Passing Arguments by Reference\n";
    int x = 10, y = 20;
    swap(&x, &y);
    printf("%d %d\n", x, y);

    //2. For Efficiency Purpose
    cout << "2. For Efficiency Purpose\n";
    int arr[5] = { 1, 2, 3, 4, 5 };
    printArray(arr, 5);
    cout << endl;

    //3. For Accessing Array Elements
    cout << "3. For Accessing Array Elements\n";
    // So below also works.
    printf("%d\n", *(arr));
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr + 2));

    //4. To Return Multiple Values
    cout << "4. To Return Multiple Values\n";
    int n = 100;
    int sq;
    double sq_root;
    fun(n, &sq, &sq_root);
    printf("%d %f\n", sq, sq_root);

    //5. For dynamic memory Allocation
    cout << "5. For dynamic memory Allocation\n";
    int* pt = createArr(10);
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
