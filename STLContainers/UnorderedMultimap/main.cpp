// UnorderedMultimap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // Creating an empty unordered_multimap
    unordered_multimap<int, string> umm1;

    // Creating unordered_multimap using
    // initializer list
    unordered_multimap<int, string> umm2 =
    { {1, "Geeks"}, {2, "For"}, {1, "C++"} };

    for (auto x : umm2)
        cout << x.first << ": " << x.second
        << endl;

    cout << "\nIserting elements: " << endl;
    // Insert elements using insert()

    unordered_multimap<int, string> umm;
    umm.insert({ 2, "For" });
    umm.insert({ 3, "C++" });
    umm.insert({ 2, "Geeks" });

    for (auto x : umm)
        cout << x.first << ": "
        << x.second << endl;
   
    cout << "\nFind elements: " << endl;
    // Find 2nd element
    auto it = next(umm.begin(), 1);

    if (it != umm.end())
        cout << it->first << ": " <<
        it->second;
    else
        cout << "Element not found!";

    cout << "\nUpdating value: " << endl;
    // Searching for key '2' using find()
    it = umm.find(2);

    // Updating value
    it->second = "Java";

    for (auto x : umm)
        cout << x.first << ": " << x.second
        << endl;
    cout << "\nTraversing: " << endl;
    // Traversing using iterators with loop
    for (auto it = umm.begin(); it != umm.end(); it++)
        cout << it->first << ": " << it->second
        << endl;

    cout << "\nDeleting elemnt: " << endl;
    // Delete all elements which are 
    // associated with key 1
    umm.erase(1);

    // Delete first element
    // using iterator
    umm.erase(umm.begin());

    for (auto x : umm)
        cout << x.first << " " << x.second;

    cout << "\nSize Check: " << endl;
    // declaration
    unordered_multimap<int, int> sample1, sample2;

    // inserts key and element
    // in sample1
    sample1.insert({ 10, 100 });
    sample1.insert({ 50, 500 });

    // inserts key and element
    // in sample1
    sample2.insert({ 20, 200 });
    sample2.insert({ 30, 300 });
    sample2.insert({ 30, 150 });

    cout << "The size of Sample1 is: " << sample1.size();

    cout << "\nKey and Elements of Sample1 are:";
    for (auto it = sample1.begin(); it != sample1.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\n\nThe size of Sample2 is: " << sample2.size();

    cout << "\nKey and Elements of Sample2 are:";
    for (auto it = sample2.begin(); it != sample2.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\nEmpty Check: " << endl;

    // declaration
    unordered_multimap<int, int> sample;

    // inserts key and element
    sample.insert({ 1, 2 });
    sample.insert({ 1, 2 });
    sample.insert({ 2, 3 });
    sample.insert({ 3, 4 });
    sample.insert({ 5, 6 });

    // if not empty then print the elements
    if (sample.empty() == false) {
        cout << "Key and Elements: ";

        for (auto it = sample.begin(); it != sample.end(); it++) {
            cout << "{" << it->first << ":" << it->second << "} ";
        }
    }

    // container is erased completely
    sample.clear();

    if (sample.empty() == true)
        cout << "\nContainer is empty";

    // declaration
    unordered_multimap<char, char> sampleChar;

    // inserts element
    sampleChar.insert({ 'a', 'b' });
    sampleChar.insert({ 'a', 'b' });
    sampleChar.insert({ 'g', 'd' });
    sampleChar.insert({ 'r', 'e' });
    sampleChar.insert({ 'g', 'd' });

    // if not empty then print the elements
    if (sampleChar.empty() == false) {
        cout << "Key and elements: ";

        for (auto it = sampleChar.begin(); it != sampleChar.end(); it++) {
            cout << "{" << it->first << ":" << it->second << "} ";
        }
    }

    // container is erased completely
    sampleChar.clear();

    if (sampleChar.empty() == true)
        cout << "\nContainer is empty";

    cout << "\nCheck the frequency of elements with the same key: " << endl;
    unordered_multimap<char, char> sampleKey;
    // inserts key and element 
    sampleKey.insert({ 'a', 'b' });
    sampleKey.insert({ 'a', 'b' });
    sampleKey.insert({ 'b', 'c' });
    sampleKey.insert({ 'r', 'a' });
    sampleKey.insert({ 'r', 'b' });

    cout << "a occurs " << sampleKey.count('a')
        << " times";

    cout << "\nb occurs " << sampleKey.count('b')
        << " times";

    cout << "\nz occurs " << sampleKey.count('z')
        << " times";

    cout << "\nr occurs " << sampleKey.count('r')
        << " times";


    cout << "\\nSwap Check Int: " << endl;
    // declaration
    unordered_multimap<int, int> sample1Int, sample2Int;

    // inserts key and element
    // in sample1
    sample1Int.insert({ 10, 100 });
    sample1Int.insert({ 50, 500 });

    // inserts key and element
    // in sample1
    sample2Int.insert({ 20, 200 });
    sample2Int.insert({ 30, 300 });
    sample2Int.insert({ 30, 150 });

    cout << "Key and Elements of Sample1 before swap are:";
    for (auto it = sample1Int.begin(); it != sample1Int.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\nKey and Elements of Sample2 before swap are:";
    for (auto it = sample2Int.begin(); it != sample2Int.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    // performs swap of two
    // unordered_multimaps
    sample1Int.swap(sample2Int);

    cout << "\n\nKey and Elements of Sample1 after swap are:";
    for (auto it = sample1Int.begin(); it != sample1Int.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\nKey and Elements of Sample2 after swap are:";
    for (auto it = sample2Int.begin(); it != sample2Int.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\\nSwap Check Char: " << endl;

    // declaration
    unordered_multimap<char, char> sample1Char, sample2Char;

    // inserts key and element
    // in sample1
    sample1Char.insert({ 'a', 'A' });
    sample1Char.insert({ 'g', 'G' });

    // inserts key and element
    // in sample1
    sample2Char.insert({ 'b', 'B' });
    sample2Char.insert({ 'c', 'C' });
    sample2Char.insert({ 'd', 'D' });

    cout << "Key and Elements of Sample1 before swap are:";
    for (auto it = sample1Char.begin(); it != sample1Char.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\nKey and Elements of Sample2 before swap are:";
    for (auto it = sample2Char.begin(); it != sample2Char.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    // performs swap of two
    // unordered_multimaps
    sample1Char.swap(sample2Char);

    cout << "\n\nKey and Elements of Sample1 after swap are:";
    for (auto it = sample1Char.begin(); it != sample1Char.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }

    cout << "\nKey and Elements of Sample2 after swap are:";
    for (auto it = sample2Char.begin(); it != sample2Char.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
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
