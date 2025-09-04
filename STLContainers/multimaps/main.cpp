// multimaps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Multiset is an associative container similar to the set, but it can store multiple elements with same value. 
// It is sorted in increasing order by default, but it can be changed to any desired order.

#include <iostream>
#include <map>
using namespace std;

int main() {

    cout << "multimap" << endl;
    // Creating an empty multimap
    multimap<int, string> mm1;

    // Creating multimap using initializer list
    multimap<int, string> mm2 = { {1, "Geeks"}, {2, "For"}, {1, "C++"} };

    for (auto i : mm2)
        cout << i.first << ": " << i.second
        << endl;

    cout << "\nInserting key-value pairs: " << endl;
    multimap<int, string> mm;
    // Inserting key-value pairs
    mm.insert({ 1, "Geeks" });
    mm.insert({ 2, "For" });
    mm.insert({ 1, "C++" });

    for (auto x : mm)
        cout << x.first << ": " << x.second
        << endl;

    cout << "\nAccessing 1st element: " << endl;
    // Accessing 1st element
    auto f = mm.begin();
    cout << f->first << ": " << f->second
        << endl;

    // Accessing 2nd element
    auto it = next(f, 1);
    cout << it->first << ": " << it->second;

    cout << "\nUpdating 2nd element value: " << endl;
    
    /*
    // Updating 2nd element value
    auto it1 = next(mm.begin(), 1);
    it1->second = "Java";

    for (auto it1 = mm.begin(); it1 != mm.end(); ++it)
        cout << it1->first << " " << it1->second
        << endl;
    */

    multimap<int, string> mu = { {1, "Geeks"}, {2, "For"}, {1, "C++"} };
    // Updating 2nd element value
    auto itu = next(mu.begin(), 1);
    itu->second = "Java";

    for (auto x : mu)
        cout << x.first << ": " << x.second
        << endl;
    
    cout << "\nTraverse multimap: " << endl;
    // Traverse multimap
    for (auto it = mm.begin(); it != mm.end(); it++)
        cout << it->first << " " << it->second
        << "\n";

    cout << "\nFind element with key 2: " << endl;
    // Find element with key 2
    auto itf = mm.find(2);

    cout << itf->first << ": " << itf->second;
    // Delete element using key
    mm.erase(2);

    cout << "\nDelete element using iterator: " << endl;
    // Delete element using iterator
    mm.erase(mm.find(1));

    for (auto x : mm)
        cout << x.first << ": " << x.second;

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
