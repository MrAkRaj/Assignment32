#include <iostream>
using namespace std;

class Factorial {
    int value;

public:
    Factorial(int v) : value(v) {}

    // Copy constructor
    Factorial(const Factorial &f) : value(f.value) {
        int result = 1;
        for (int i = 1; i <= value; ++i) {
            result *= i;
        }
        cout << "Factorial of " << value << " is " << result << endl;
    }
};

int main() {
    Factorial f1(5);  // Calls the parameterized constructor
    Factorial f2 = f1;  // Calls the copy constructor
    return 0;
}
