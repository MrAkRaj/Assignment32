#include <iostream>
#include <cmath>
using namespace std;

class Area {
    float value;

public:
    // Constructor for rectangle
    Area(float length, float breadth) {
        value = length * breadth;
        cout << "Area of Rectangle: " << value << endl;
    }

    // Constructor for triangle
    Area(float base, float height, bool isTriangle) {
        if (isTriangle) {
            value = 0.5 * base * height;
            cout << "Area of Triangle: " << value << endl;
        }
    }

    // Constructor for circle
    Area(float radius, bool isCircle, bool isNotTriangle) {
        if (isCircle && isNotTriangle) {
            value = M_PI * radius * radius;
            cout << "Area of Circle: " << value << endl;
        }
    }
};

int main() {
    int choice;
    float a, b;
    cout << "Choose an option:\n1. Rectangle\n2. Triangle\n3. Circle\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter length and breadth of rectangle: ";
            cin >> a >> b;
            Area rect(a, b);  // Rectangle
            break;
        case 2:
            cout << "Enter base and height of triangle: ";
            cin >> a >> b;
            Area tri(a, b, true);  // Triangle
            break;
        case 3:
            cout << "Enter radius of circle: ";
            cin >> a;
            Area circ(a, true, true);  // Circle
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
