#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Default Constructor of A" << endl;
    }

    A(int x) {
        cout << "Parameterized Constructor of A with value " << x << endl;
    }
};

class B : public A {
public:
    B() : A() {
        cout << "Default Constructor of B" << endl;
    }

    B(int x) : A(x) {
        cout << "Parameterized Constructor of B with value " << x << endl;
    }
};

int main() {
    B b1;  // Calls default constructors of A and B
    B b2(10);  // Calls parameterized constructor of A and B
    return 0;
}
