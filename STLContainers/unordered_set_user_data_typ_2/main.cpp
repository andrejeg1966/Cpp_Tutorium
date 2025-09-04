// unordered_set_user_data_typ_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <unordered_set>
using namespace std;

struct Person {
    string first, last;

    Person(string f, string l)
    {
        first = f;
        last = l;
    }
    
    bool operator==(const Person& p) const
    {
        return first == p.first && last == p.last;
    }
    
    
};

class MyHashFunction {
public:

    // We use predefined hash functions of strings
    // and define our hash function as XOR of the
    // hash values.
    size_t operator()(const Person& p) const
    {
        return (hash<string>()(p.first)) ^ (hash<string>()(p.last));
    }
};

// Driver code
int main()
{
    unordered_set<Person, MyHashFunction> us;
    Person p1("kartik", "kapoor");
    Person p2("Ram", "Singh");
    Person p3("Laxman", "Prasad");

    us.insert(p1);
    us.insert(p2);
    us.insert(p3);
    /*
    for (auto e : us) {
        cout << "[" << e.first << ", "
            << e.last << "]\n";
    }
    */

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
