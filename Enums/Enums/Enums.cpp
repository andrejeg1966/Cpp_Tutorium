// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum TP { C, Java, Python, Ruby, Kotlin, Javascript, TypeScript, Others };
enum Day {
    Sunday,      // 0
    Monday,      // 1
    Tuesday,     // 2
    Wednesday, // 3
    Thursday,     // 4
    Friday = 45,  // 45
    Saturday       // 46
};

//Scoped Enums (enum class)
enum class Color {
    Red,    // Implicitly 0
    Green,  // Implicitly 1
    Blue    // Implicitly 2
};


int main()
{
    enum TP course;
    cout << "Which course do you love the most?" << endl;

    course = Kotlin;
    cout << "I love the " << course + 1 << "th course !!!";
    cout << "\n";
    Day get1 = Wednesday;
    cout << get1 << endl;

    cout << Saturday << endl;

    //Scoped Enums (enum class)
    Color myColor = Color::Red;  // Must use enum name
    // int value = myColor;       // Error: no implicit conversion

    // Explicit conversion to int if needed
    int value = static_cast<int>(myColor);  // value = 0

    cout << "Integer value: " << value << endl; // Outputs: 0

    Color myColor1 = Color::Green;
    if (myColor1 == Color::Green) {
        cout << "The color is green!" << endl;
    }
    else {
        cout << "The color is not green." << endl;
    }


}

