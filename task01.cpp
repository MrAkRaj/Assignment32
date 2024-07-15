#include <iostream>
using namespace std;

class FLOAT {
    float value;

public:
    FLOAT(float v = 0) : value(v) {}

    // Overload addition operator
    FLOAT operator+(const FLOAT &f) const {
        return FLOAT(value + f.value);
    }

    // Overload subtraction operator
    FLOAT operator-(const FLOAT &f) const {
        return FLOAT(value - f.value);
    }

    // Overload multiplication operator
    FLOAT operator*(const FLOAT &f) const {
        return FLOAT(value * f.value);
    }

    // Overload division operator
    FLOAT operator/(const FLOAT &f) const {
        if (f.value == 0) {
            throw "Division by zero error!";
        }
        return FLOAT(value / f.value);
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    FLOAT f1(10.5), f2(2.5);
    FLOAT result;

    result = f1 + f2;
    result.display();

    result = f1 - f2;
    result.display();

    result = f1 * f2;
    result.display();

    result = f1 / f2;
    result.display();

    return 0;
}
