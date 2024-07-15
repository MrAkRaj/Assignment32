#include <iostream>
using namespace std;

class Addition {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Addition add;
    cout << "Sum of 2 and 3: " << add.add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3: " << add.add(1, 2, 3) << endl;
    cout << "Sum of 1.5 and 2.5: " << add.add(1.5f, 2.5f) << endl;
    return 0;
}
