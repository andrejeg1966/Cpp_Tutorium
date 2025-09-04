// unordered_set_user_data_typ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>
using namespace std;

// Structure definition
struct Test {

    int id;

    // This function is used by unordered_set to compare
    // elements of Test.
    
    bool operator==(const Test& t) const
    {
        return (this->id == t.id);
    }
    

};

// class for hash function
class MyHashFunction {
public:
    // id is returned as hash function
    size_t operator()(const Test& t) const
    {
        return t.id;
    }

};

// Driver method
int main()
{
    // put values in each
    // structure define below.
    Test t1 = { 110 }, t2 = { 102 },
        t3 = { 101 }, t4 = { 115 };

    // define a unordered_set having
    // structure as its elements.
    unordered_set<Test, MyHashFunction> us;

    // insert structure in unordered_set
    us.insert(t1);
    us.insert(t2);
    us.insert(t3);
    us.insert(t4);

    // printing the elements of unordered_set
    for (auto e : us) {
        cout << e.id << " ";
    }

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
