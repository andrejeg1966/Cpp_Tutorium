// UnorderedMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
using namespace std;

void print(unordered_map<int, string> um) {
    for (auto i : um)
        cout << i.first << " " << i.second
        << endl;
}

string check_key(unordered_map<int, int> m, int key)
{
    // Key is not present
    if (m.count(key) == 0)
        return "Not Present";

    return "Present";
}
int main() {

    // Create an empty unordered_map
    unordered_map<int, string> um1;

    // Creating an unordered_map using
    // initializer list
    unordered_map<int, string> um2 = { {1, "Geeks"}, {2, "For"}, {3, "C++"} };

    print(um1);
    cout << endl;
    print(um2);

    cout << "\ninsert elements: " << endl;
    unordered_map<int, string> um;
    // Insert elements using square brackets
    um[1] = "Geeks";

    // Insert elements using insert() method
    um.insert({ 2, "For" });
    um.insert({ 3, "C++" });

    for (auto i : um)
        cout << i.first << ": " << i.second
        << endl;

    cout << "\nAccess value: " << endl;
    // Access value associated with key 2
    // using [] operator
    cout << um[2] << endl;

    // Access value associated with key 1
    // using at() function
    cout << um.at(1);

    cout << "\nFinding element: " << endl;
    // Finding element with key 2
    auto it = um.find(2);

    if (it != um.end())
        cout << it->first << ": " << it->second;
    else cout << "Not Found";

    cout << "\nUpdating value: " << endl;
    // Updating value associated with key 2
   // using [] operator
    um[2] = "By";
    cout << um[2] << endl;

    // Updating value associated with key 1
    //using at() function
    um.at(1) = "Tips";
    cout << um.at(1);

    cout << "\nTraversing: " << endl;
    // Traversing using iterators with loop
    for (auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second
        << endl;

    // Delete element which have key 2
    um.erase(2);


    cout << "\nDelete: " << endl;
    // Delete first element
    um.erase(um.begin());

    for (auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second
        << endl;

    unordered_map<char, char>
        n{ { 'A', 'G' },
           { 'B', 'E' },
           { 'C', 'E' },
           { 'D', 'K' },
           { 'E', 'S' } };

    cout << "size of map = "
        << n.size() << endl;

    unordered_map<string, double> ra;

    cout << "Initial size of map = "
        << ra.size() << endl;

    ra = {
        { "Geeks", 1.556 },
        { "For", 2.567 },
        { "Geeks", 3.345 },
        { "GeeksForGeeks", 4.789 },
        { "GFG", 5.998 }
    };

    cout << "size of map = "
        << ra.size() << endl;

    // Take any two unordered_map
    unordered_map<int, int> ump1, ump2;

    // Inserting values
    ump1[1] = 2;
    ump1[3] = 4;
    ump1[5] = 6;
    ump1[7] = 8;

    // Print the size of container
    cout << "ump1 size = " << ump1.size() << endl;
    cout << "ump2 size = " << ump2.size() << endl;

    // Running the function for ump1
    if (ump1.empty())
        cout << "True\n";
    else
        cout << "False\n";

    // Running the function for ump2
    if (ump2.empty())
        cout << "True\n";
    else
        cout << "False\n";

    // Running the function for ump1 after
    // clearing it
    ump1.clear();
    if (ump1.empty())
        cout << "True\n";
    else
        cout << "False\n";

    unordered_map<int, int> m;

    // Initialising keys and mapped values
    m[1] = 4;
    m[2] = 6;
    m[4] = 6;

    // Keys to be checked
    int check1 = 5, check2 = 4;

    // Function call
    cout << check1 << ": " << check_key(m, check1) << '\n';
    cout << check2 << ": " << check_key(m, check2);


    unordered_map<char, int> sample1, sample2;

    // Map initialization
    sample1 = { { 'a', 2 }, { 'b', 4 }, { 'c', 6 }, { 'd', 8 } };
    sample2 = { { 'e', 11 }, { 'f', 13 }, { 'h', 15 } };

    // printing details before calling swap

    cout << " Elements of maps before swap \n";
    cout << " Elements of first map are : \n";
    for (auto& x : sample1)
        cout << x.first << " : " << x.second << endl;

    cout << " Elements of second map are : \n";
    for (auto& x : sample2)
        cout << x.first << " : " << x.second << endl;

    // swapping
    sample1.swap(sample2);

    cout << " Elements of maps after swap \n";
    cout << " Elements of first map are : \n";
    for (auto& x : sample1)
        cout << x.first << " : " << x.second << endl;

    cout << " Elements of second map are : \n";
    for (auto& x : sample2)
        cout << x.first << " : " << x.second << endl;
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
