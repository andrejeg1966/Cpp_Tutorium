// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// function declaration :
double getAverage(int arr[], int size);
int* getRandom();
int main()
{
    //Getting Array Length
    int arr[] = { 10, 20, 30, 40, 50 };
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    cout << "Array's Length : " << arr_length << endl;

    // changing the value
    arr[2] = 108;

    cout << "After changing, element at index 2: " << arr[2] << endl;

    // an array with 5 rows and 2 columns.
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };

    // output each array element's value                      
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++) {

            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j] << endl;
        }

    // An array with 2 layers, 3 rows, and 4 columns.
    int b[2][3][4] = { {
                          {0, 1, 2, 3},   // Layer 0, Row 0
                          {4, 5, 6, 7},   // Layer 0, Row 1
                          {8, 9, 10, 11}  // Layer 0, Row 2
                      },
                      {
                          {12, 13, 14, 15},  // Layer 1, Row 0
                          {16, 17, 18, 19},  // Layer 1, Row 1
                          {20, 21, 22, 23}   // Layer 1, Row 2
                      } };

    // Output each array element's value
    for (int i = 0; i < 2; i++) {      // Iterating through layers
        for (int j = 0; j < 3; j++) {    // Iterating through rows
            for (int k = 0; k < 4; k++) {  // Iterating through columns
                cout << "b[" << i << "][" << j << "][" << k << "]: ";
                cout << b[i][j][k] << endl;
            }
        }
    }
    //C++ Pointer to an Array
         // an array with 5 elements.
    double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
    double* p;

    p = balance;

    // output each array element's value 
    cout << "Array values using pointer " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    cout << "Array values using balance as address " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }
    //C++ Passing Arrays to Functions

    double avg;
    int balance1[5] = { 1000, 2, 3, 17, 50 };
    // pass pointer to the array as an argument.
    avg = getAverage(balance1, 5);

    // output the returned value 
    cout << "Average value is: " << avg << endl;
    //Return Array from Functions in C++
    
    // a pointer to an int.
    int* p1;

    p1 = getRandom();

    for (int i = 0; i < 10; i++) {
        cout << "*(p1 + " << i << ") : ";
        cout << *(p1 + i) << endl;
    }

    return 0;
}
double getAverage(int arr[], int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;



    return avg;
}

// function to generate and retrun random numbers.
int* getRandom() {

    static int  r[10];

    // set the seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}




