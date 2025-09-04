// Maps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Maps are associative containers that store data as pairs of keys and values.
//Each key is unique, and the data is automatically sorted by keys in ascending order.

#include <iostream>
#include <map>

using namespace std;


// Function to check if the key is present or not using count()
string check_key(map<int, int> m, int key)
{
    // Key is not present
    if (m.count(key) == 0)
        return "Not Present";

    return "Present";
}
int main() {

    // Creating an empty map
    map<int, string> m1_empty;

    // Initialze map with list
    map<int, string> m2 = { {1, "Geeks"}, {2, "For"}, {3, "Geeks"} };

    for (auto& p : m2)
        cout << p.first << " " << p.second << endl;

    cout << endl;
    cout << "Inserting a key value pair: ";
    map<int, string> m = { {2, "For"}, {3, "Geeks"} };
    // Inserting a key value pair
    m.insert({ 1, "Geeks" });

    for (auto x : m)
        cout << x.first << " " << x.second
        << endl;

    // Accessing elements
    cout << m[1] << endl;
    cout << m.at(2);
    cout << endl;
    // Updating value
    m[0] = "Tweaks";
    m.at(1) = "By";

    cout << m[0] << endl;
    cout << m.at(1);

    map<int, string> m3 = { {1, "Geeks"},
             {2, "For"}, {3, "Geeks"} };
    cout << endl;
    cout << "*******************";
    cout << endl;
    // Finding element with key 2
    auto it1 = m3.find(1);
    auto it2 = m3.find(2);
    auto it3 = m3.find(3);

    if ((it2 != m3.end()) && (it1 != m3.end()))
    {
        cout << it1->first << " " << it1->second;
        cout << endl;
        cout << it2->first << " " << it2->second;
        cout << endl;
        cout << it3->first << " " << it3->second;
    }  
    else cout << "Key not Found!";

    cout << endl;
    // Traversing using iterators
    for (auto it = m3.begin(); it != m3.end(); ++it)
        cout << it->first << " " << it->second
        << endl;

    cout << endl;

    // Deleting by key
    m3.erase(2);
    // Deleting by iterator
    m3.erase(m3.begin());
    for (auto it = m3.begin(); it != m3.end(); ++it)
        cout << it->first << " " << it->second
        << endl;
    

    map<int, int> mPresent;

    // Initializing keys and mapped values
    mPresent[1] = 4;
    mPresent[2] = 6;
    mPresent[4] = 6;

    // Keys to be checked
    int check1 = 5, check2 = 4;

    // Function call
    cout << check1 << ": " << check_key(mPresent, check1) << '\n';
    cout << check2 << ": " << check_key(mPresent, check2);
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
