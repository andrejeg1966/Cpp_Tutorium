// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//C++ vector is a dynamic array that stores collection of elements same type in contiguous memory. 
// It has the ability to resize itself automatically when an element is inserted or deleted.

#include <iostream>
#include <vector>

using namespace std;


void printVector(vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    // Creating an empty vector
    vector<int> v0;
    v0 = { 2,3,4,1 };
    // 
    // Creating a vector of 5 elements from
    // initializer list
    vector<int> v1 = { 1, 4, 2, 3, 5 };

    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5, 9);

    printVector(v0);
    printVector(v1);
    printVector(v2);

    // Insert Elements
    cout << endl;
    cout << "Insert Elements" << endl;
    vector<char> v = { 'a', 'f', 'd' };

    // Inserting 'z' at the back
    v.push_back('z');

    // Inserting 'c' at index 1
    v.insert(v.begin() + 1, 'c');

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
   
    cout << v[3] << endl;
    cout << v.at(2) << endl;

    // Updating values using indexes 3 and 2
    cout << "Updating values using indexes 3 and 2" << endl;
    v[3] = 'D';
    v.at(2) = 'F';

    cout << v[3] << endl;
    cout << v.at(2) << endl;;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " " ;
    cout << endl;

    // Finding size
    cout << v.size() << endl;
    // Find the size of vector
    cout << "find the size Using Iterators" << endl;
    cout << v.end() - v.begin() << endl;

    // Deleting last element 'z'
    v.pop_back();

    // Deleting element 'f'
    v.erase(find(v.begin(), v.end(), 'F'));

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // Checking if vector is empty or not
    if (v.empty())
        cout << "Empty";
    else
        cout << "Not Empty";

    // Vetor resized to 9
    v.resize(7,'r');
    cout << "Vetor resized to 9" << endl;
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //reverse vector
   // reverse(v1.begin(), v.end());
    vector<int> vR = { 1, 3, 5, 7, 9 };
    vR = vector<int>(vR.rbegin(), vR.rend());
    cout << "reverse vector" << endl;
    
    for (auto i : vR)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
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
