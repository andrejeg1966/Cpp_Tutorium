// unordered_map_user_data_typ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
using namespace std;

struct Point {
    int x, y;

    // Constructor
    Point(int x, int y) : x(x), y(y)
    {
    }
    bool operator==(const Point& other) const
    {
        return x == other.x && y == other.y;
    }
};
// Define a custom hash function for the Point
struct PointHasher {
    size_t operator()(const Point& p) const
    {
        // Combine hashes of x and y using the bitwise XOR
        return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
    }
};

int main()
{
    // Create an unordered_map with the Point as key and int
    // as value and pass hash function as template arguement
    unordered_map<Point, int, PointHasher> point_map;
    point_map[Point(1, 2)] = 10;
    point_map[Point(3, 4)] = 20;
    point_map[Point(5, 6)] = 30;
    // printing the key-value pairs of point_map
    for (const auto& pair : point_map) {
        cout << "Point(" << pair.first.x << ", "
            << pair.first.y << "): " << pair.second
            << endl;
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
