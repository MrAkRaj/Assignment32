#include <iostream>
using namespace std;

class Rectangle {
public:
    // Function to calculate area with integer length and breadth
    int area(int length, int breadth) {
        return length * breadth;
    }

    // Function to calculate area with float length and breadth
    float area(float length, float breadth) {
        return length * breadth;
    }

    // Function to calculate area with integer side (square)
    int area(int side) {
        return side * side;
    }
};

int main() {
    Rectangle rect;
    cout << "Area (int, int): " << rect.area(5, 3) << endl;
    cout << "Area (float, float): " << rect.area(5.5f, 3.5f) << endl;
    cout << "Area (int side): " << rect.area(4) << endl;
    return 0;
}
