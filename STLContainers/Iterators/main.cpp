// Iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v = { 1,2,3,4,5 };
    vector<int> v1 = { 1, 2, 3, 4, 5};

    if (v < v1)
        cout << "no" << endl;
    // Get the iterator of first element
    // of the vector
    vector<int>::iterator it = v.begin();

    // Print the content of location which is 
    // pointed by iterator (it)
    cout << *it;
    cout << "\n***********" << endl;
    cout << *++it;
    cout << "\n***********" << endl;
    cout << *--it;
    cout << "\n***********" << endl;
    *it = 7;
    cout << *it;

    // Declaring an iterator
    vector<int>::iterator i1;
    cout << "\n***********" << endl;
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        // Accessing elements using iterator
        cout << (*i1) << " ";
    }
    cout << "\n***********" << endl;
    for (i1 = v1.begin();i1 != v1.end();++i1)
    {
        // Assigning elements using iterator
        *i1 = 1;
        cout << (*i1) << " ";
    }
   
    cout << "\n***********l lis ****************" << endl;
    list<int>l1 = { 1, 2, 3, 4, 5 };

    // Declaring first iterator
    list<int>::iterator il1;

    // Declaring second iterator
    list<int>::iterator il2;

    // i1 points to the beginning of the list
    il1 = l1.begin();

    // i2 points to the end of the list
    il2 = l1.end();

    /**
    // Applying relational operator to them
    if (i1 > i2)
    {
        cout << "Yes";
    }
    */
    // This will throw an error because relational
    // operators cannot be applied to bidirectional iterators


    // Applying arithmetic operator to them
    //int count = il1 - il2;
    // This will also throw an error because arithmetic 
    // operators cannot be applied to bidirectional iterators 

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
