#include <iostream>
using namespace std;

class Animals {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dogs : public Animals {
public:
    void sound() override {  // Overriding base class function
        cout << "Dogs bark" << endl;
    }
};

int main() {
    Animals* a = new Dogs();
    a->sound();  // Calls the overridden method in Dogs class
    delete a;
    return 0;
}
