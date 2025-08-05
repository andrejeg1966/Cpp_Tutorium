// Start.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main()
{
    // Create a string variable
    string greeting = "Hello";
    const int MAX_SIZE = 100;
    int area;
    bool isCodingFun = true;
    bool isFishTasty = false;
    int p = 2147483647;
    cout << "Hello \'World!\n";
    cout << "I am \\learning C++"<< endl;
    cout << "Size of int p: " << sizeof(p);
    cout << "\np: " << p;

    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    const int myNum = 15;  // myNum will always be 15
    int x, y;
    int sum;

    //C++ User Input
    cout << "\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    cout << "MAX_SIZE: " << MAX_SIZE << "\n";
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)

    char a = 65, b = 66, c = 67;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    
    // Output string value
    cout << greeting;
    //Character Literals
    cout << "Hello\tWorld\n\n";

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    std::cout << "Int Min " << std::numeric_limits<int>::min() << endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << endl;
    std::cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << endl;
    std::cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << endl;
    std::cout << "Long Int Min " << std::numeric_limits<long int>::min() << endl;
    std::cout << "Long Int Max " << std::numeric_limits<long int>::max() << endl;

    std::cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned  long int>::min() << endl;
    std::cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned  long int>::max() << endl;
    return 0;
}

